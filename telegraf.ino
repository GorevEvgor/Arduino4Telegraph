#include <AltSerial5.h>
#include "tables.h"

AltSerial5 mySerial; // 8 RX, 9 TX


/*
   32     64     96
 @ рус, # цыф, $ лат, * мальт+, % change code
    0     27     31
*/

/*                      0    1   2   3   4    5    6    7   8   9   10   11   12   13   14   15   16   17   18   19   20   21   22   23   24   25   26  27  28   29   30  31
uint8_t mtk2ascii[] = { 2 , 'E',10, 'A',' ', 'S', 'I', 'U',13, 'D', 'R', 'J', 'N', 'F', 'C', 'K', 'T', 'Z', 'L', 'W', 'H', 'Y', 'P', 'Q', 'O', 'B', 'G', 3 ,'M', 'X', 'V', 1 ,
                        2 , 'Е',10, 'A',' ', 'С', 'И', 'У',13, 'Д', 'Р', 'Й', 'Н', 'Ф', 'Ц', 'К', 'Т', 'З', 'Л', 'В', 'Х', 'Ы', 'П', 'Я', 'О', 'Б', 'Г', 3 ,'М', 'Ь', 'Ж', 1 ,
                        2 , '3',10, '-',' ',0x27, '8', '7',13,  4 , '4', 'Ю', ',', 'Э', ':', '(', '5', '+', ')', '2', 'Щ', '6', '0', '1', '9', '?', 'Ш', 3 ,'.', '/', '=', 1 }; 
*/

uint8_t * mtk2ascii,* ascii2mtk;
uint8_t * to_ascii[] = { mtk2cp866, mtk2koi8r, mtk2cp1251 };
uint8_t * to_mtk2[]  = { cp8662mtk, koi8r2mtk, cp12512mtk };
char * tables[] = {"cp866","koi8r","cp1251"};
int speeds[] = {50,100,150,200,300};

uint8_t Registr = 2;
uint8_t Code = 2;
uint8_t Speed = 1;

void setup() {
    Serial.begin(9600);
    mySerial.begin(speeds[Speed]);
    mtk2ascii = to_ascii[Code];
    ascii2mtk = to_mtk2[Code];
Serial.println(" 8 pin RX, 9 pin TX");
Serial.println(" @ rus, # num, $ lat, * AO, % change code table, [] change speed");
Serial.print(" current table "); Serial.println(tables[Code]);
Serial.print(" current speed "); Serial.println(speeds[Speed]);

};


void loop() {
  uint8_t newchar;
  uint8_t newreg;
  uint8_t v;
  if (mySerial.available()) {
    v=mySerial.read();
//    Serial.print("recv "); Serial.println(v);
    newchar = mtk2ascii[v + ((Registr - 1) << 5)];
    if (newchar < 4) Registr = newchar;
    else if (newchar == 4) ao();
    else Serial.write(newchar);
  }
  if (Serial.available()) {
    newchar = Serial.read();
    switch (newchar) {
	case '%':
	    Code++;
	    if (Code > 2) Code = 0;
	    Serial.print("code "); Serial.println(tables[Code]);
	    mtk2ascii = to_ascii[Code];
	    ascii2mtk = to_mtk2[Code];
	    break;
	case '[':
	    if (Speed == 0) Speed=4; else Speed--;
	    Serial.print("speed "); Serial.println(speeds[Speed]);
	    mySerial.begin(speeds[Speed]);
	    break;
	case ']':
	    if (Speed == 4) Speed=0; else Speed++;
	    Serial.print("speed "); Serial.println(speeds[Speed]);
	    mySerial.begin(speeds[Speed]);
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
		mySerial.write(newchar);
//		Serial.print("send "); Serial.println(newchar);
	    }
    }
  }
}

void ao() {
  mySerial.write(27);
  mySerial.write(23);
  mySerial.write(23);
  mySerial.write(23);
}



