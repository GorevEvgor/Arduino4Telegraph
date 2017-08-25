#define BITS 5
#include <AltSoftSerial.h>
#include "tables.h"
#define RX_LEN 200
#define BUTTON_1 10   //12 in v1
#define BUTTON_2 11
#define LED_1 13
#define LED_2 12

AltSoftSerial mySerial; // 8 RX, 9 TX


/*
   32     64     96
 @ рус, # цыф, $ лат, * мальт+, % change code
    0     27     31
*/
uint8_t ao_text[] = {8, 2, 31, 31, 31, 31, 0, 10, 10, 10, 10, 3, 27, 21, 7, 22, 6, 9 }; 
uint8_t ao_len = 18;
uint8_t zc[] = {4,17,14,17,14};
uint8_t nn[] = {4,12,12,12,12};

/*                      0    1   2   3   4    5    6    7   8   9   10   11   12   13   14   15   16   17   18   19   20   21   22   23   24   25   26  27  28   29   30  31
uint8_t mtk2ascii[] = { 2 , 'E',10, 'A',' ', 'S', 'I', 'U',13, 'D', 'R', 'J', 'N', 'F', 'C', 'K', 'T', 'Z', 'L', 'W', 'H', 'Y', 'P', 'Q', 'O', 'B', 'G', 3 ,'M', 'X', 'V', 1 ,
                        2 , 'Е',10, 'A',' ', 'С', 'И', 'У',13, 'Д', 'Р', 'Й', 'Н', 'Ф', 'Ц', 'К', 'Т', 'З', 'Л', 'В', 'Х', 'Ы', 'П', 'Я', 'О', 'Б', 'Г', 3 ,'М', 'Ь', 'Ж', 1 ,
                        2 , '3',10, '-',' ',0x27, '8', '7',13,  4 , '4', 'Ю', ',', 'Э', ':', '(', '5', '+', ')', '2', 'Щ', '6', '0', '1', '9', '?', 'Ш', 3 ,'.', '/', '=', 1 }; 
*/
uint8_t * mtk2ascii,* ascii2mtk;
uint8_t * to_ascii[] = { mtk2cp866, mtk2koi8r, mtk2cp1251 };
uint8_t * to_mtk2[]  = { cp8662mtk, koi8r2mtk, cp12512mtk };
char * tables[] = {"cp866","koi8r","cp1251","utf8"};
int speeds[] = {50,100,200,300};

uint8_t Registr = 2;
uint8_t Code = 2;
uint8_t Utf8 = 1;
uint8_t Speed = 1;
uint8_t prev = 0;
uint8_t malt_send = 0;
uint8_t send_ao = 1;
uint8_t request = 0;
uint8_t last_butt1_state = 0;
uint8_t butt1_state = 0;
uint8_t last_butt2_state = 0;
uint8_t butt2_state = 0;
uint8_t i;
uint8_t rx_buff[RX_LEN];
int rx_head = 0;
int rx_tail = 0;
uint8_t ao_block = 0;
int beephz = 440;

void setup() {
    Serial.begin(9600);
    mySerial.begin(speeds[Speed]);
    mtk2ascii = to_ascii[Code];
    ascii2mtk = to_mtk2[Code];
    pinMode(LED_1, OUTPUT);
    pinMode(LED_2, OUTPUT);
    pinMode(BUTTON_1, INPUT);
    pinMode(BUTTON_2, INPUT);
//Serial.println(" 8 pin RX, 9 pin TX");
Serial.println(" % change code table, [] change speed");
Serial.println(" @ rus, # num, $ lat, * req AO, ~ send AO, ESC on/off AO");
Serial.print(" current table "); Serial.println(tables[Code+Utf8]);
Serial.print(" current speed "); Serial.println(speeds[Speed]);
Serial.print(" auto answer "); Serial.println(send_ao?"on":"off");
digitalWrite(LED_1, request);
digitalWrite(LED_2, send_ao);
beep();
};


void loop() {
  uint8_t newchar;
  uint8_t newreg;
  uint8_t v;
  if (mySerial.available()) {
    v=mySerial.read();
    flash(v);
    buf_write(v);
    if (buf_cmp(zc) or buf_cmp(nn)) {
      ao_block = 1;
      beephz = 880;
      send_ao = 0;
      digitalWrite(LED_2, send_ao);
    }
//    Serial.print("recv "); Serial.println(v);
    newchar = mtk2ascii[v + ((Registr - 1) << 5)];
    if (newchar < 4) Registr = newchar;
    else if (newchar == 4) { //*
      Serial.write('*');
      if (prev == 27 and ! malt_send) 
        if (send_ao) ao();
        else {
          request = HIGH;
          digitalWrite(LED_1,request);
          beep();
        }
      malt_send=0;
    }
    else {
      if (! Utf8 or newchar < 0xc0 ){
        Serial.write(newchar);
      } else {
//    Serial.print("line read "); Serial.println(newchar);
        Serial.write(0xd0);
        Serial.write(newchar-0xc0+0x90);
      }
    }
    prev = v;
  }
  if (Serial.available()) {
    newchar = Serial.read();
    if (Utf8 and ((newchar & 0xfe) == 0xd0)) {
      i = 30;
      while (!Serial.available() and (i-- > 0)) delay(10);
      if (i > 0) {
        newchar = (Serial.read() & 0x3f) + ((newchar & 0x01) << 6);
        if ((newchar >= 0x10) and (newchar <= 0x4f)) newchar += 0xb0;
      }
    }
    switch (newchar) {
	case '%':
            if (Code == 2 and Utf8 == 0) {
              Utf8 = 1;
            } else {
	      Code++; 
              Utf8 = 0;
            }
	    if (Code > 2) Code = 0;
	    Serial.print("code "); Serial.println(tables[Code+Utf8]);
	    mtk2ascii = to_ascii[Code];
	    ascii2mtk = to_mtk2[Code];
	    break;
	case '[':
	    if (Speed == 0) Speed=3; else Speed--;
	    Serial.print("speed "); Serial.println(speeds[Speed]);
	    mySerial.begin(speeds[Speed]);
	    break;
	case ']':
	    if (Speed == 3) Speed=0; else Speed++;
	    Serial.print("speed "); Serial.println(speeds[Speed]);
	    mySerial.begin(speeds[Speed]);
	    break;
        case 27:
            send_ao ^= 1;
            digitalWrite(LED_2, send_ao);
            ao_block = 0;
            beephz = 440;
	    Serial.print("auto answer "); Serial.println(send_ao?"on":"off");
	    break;
        case '~':
            ao();
	    break;        
	default:
	    newchar = ascii2mtk[newchar];
	    newreg = newchar >> 5;
	    newchar &= 0x1f;
	    if (newreg > 0 and (! (newreg == Registr) or ! newchar )) {
		mySerial.write(ascii2mtk[newreg]);
//		Serial.print("send "); Serial.println(ascii2mtk[newreg]);
		Registr = newreg;
	    }
	    if (newchar) {
                if (newreg == 3 and newchar==9) malt_send=1;
  		mySerial.write(newchar);
//		Serial.print("send "); Serial.println(newchar);
	    }
    }
  }
  if (!ao_block and digitalRead(BUTTON_1) != last_butt1_state) {
    butt1_state = 0; 
    delay (40);
    for (i=5; i--; delay(40)) butt1_state += digitalRead(BUTTON_1);
    if (butt1_state == 5) butt1_state = HIGH;
    else if (butt1_state == 0) butt1_state = LOW;
    else butt1_state = last_butt1_state;
    if (butt1_state != last_butt1_state) {
      if (butt1_state == HIGH) ao();
      last_butt1_state = butt1_state;
    }
  }

  if (digitalRead(BUTTON_2) != last_butt2_state) {
    butt2_state = 0; 
    delay (40);
    for (i=5; i--; delay(40)) butt2_state += digitalRead(BUTTON_2);
    if (butt2_state == 5) butt2_state = HIGH;
    else if (butt2_state == 0) butt2_state = LOW;
    else butt2_state = last_butt2_state;
    if (butt2_state != last_butt2_state) {
      if (butt2_state == HIGH) {
        send_ao ^=1;
        digitalWrite(LED_2, send_ao);
      }
      last_butt2_state = butt2_state;
    }
  }


}

void ao() {
//8 2 31 31 31 31 0 10 10 10 10 3 27 21 7 22 6 9 
//cr nl lat lat lat lat lat rus Р Р Р Р А num 6 7 0 8 *
  uint8_t i;
  for (i = 0; i < ao_len; i++) mySerial.write(ao_text[i]);
  request = LOW;
  digitalWrite(LED_1,request);
}

void flash(uint8_t v) {
  tone(6, 400 * (v+1) , 10);
  digitalWrite(LED_1,request ^ HIGH);
  delay(10);
  digitalWrite(LED_1,request);
  noTone(6);
}

void beep() {
  tone(6, beephz, 200);
  delay(200);
  noTone(6);
}

void buf_write(uint8_t c) {
  rx_tail++;
  if (rx_tail >= RX_LEN) rx_tail = 0;
  if (rx_tail == rx_head) {
    rx_head++;
    if (rx_head >= RX_LEN) rx_head = 0;
  }
  rx_buff[rx_tail] = c;
}

uint8_t buf_cmp (uint8_t * pattern) {
  uint8_t len;
  int pointer;
  uint8_t match = 1;
  len = pattern[0];
  pointer = rx_tail;
  while (match and len > 0 and pointer != rx_head) {
    if ( pattern[len] != rx_buff[pointer] ) match = 0;
    else {
      if (pointer == 0) pointer = RX_LEN;
      pointer--;
      len--;
    }
  }
  if (len == 0) return match;
  else return 0;
}
