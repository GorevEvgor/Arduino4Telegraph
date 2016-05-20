//                      0    1   2   3   4    5    6    7   8   9   10   11   12   13   14   15   16   17   18   19   20   21   22   23   24   25   26  27  28   29   30  31
//cp866
uint8_t mtk2cp866[] = { 2 , 'E',10, 'A',' ', 'S', 'I', 'U',13, 'D', 'R', 'J', 'N', 'F', 'C', 'K', 'T', 'Z', 'L', 'W', 'H', 'Y', 'P', 'Q', 'O', 'B', 'G', 3, 'M', 'X', 'V', 1 ,
                        2 ,0x85,10,0x80,' ',0x91,0x88,0x93,13,0x84,0x90,0x89,0x8d,0x94,0x96,0x8a,0x92,0x87,0x8b,0x82,0x95,0x9b,0x8f,0x9f,0x8e,0x81,0x83, 3,0x8c,0x9c,0x86, 1 ,
                        2 , '3',10, '-',' ',0x27, '8', '7',13,  4 , '4',0x9e, ',',0x9d, ':', '(', '5', '+', ')', '2',0x99, '6', '0', '1', '9', '?',0x98, 3, '.', '/', '=', 1 };
//koi8r
uint8_t mtk2koi8r[] = { 2 , 'E',10, 'A',' ', 'S', 'I', 'U',13, 'D', 'R', 'J', 'N', 'F', 'C', 'K', 'T', 'Z', 'L', 'W', 'H', 'Y', 'P', 'Q', 'O', 'B', 'G', 3, 'M', 'X', 'V', 1 ,
                        2 ,0xe5,10,0xe1,' ',0xf3,0xe9,0xf5,13,0xe4,0xf2,0xea,0xee,0xe6,0xe3,0xeb,0xf4,0xfa,0xec,0xf7,0xe8,0xf9,0xf0,0xf1,0xef,0xe2,0xe7, 3,0xed,0xf8,0xf6, 1 ,
                        2 , '3',10, '-',' ',0x27, '8', '7',13,  4 , '4',0xe0, ',',0xfc, ':', '(', '5', '+', ')', '2',0xfd, '6', '0', '1', '9', '?',0xfb, 3 , '.','/', '=', 1 };
//cp1251
uint8_t mtk2cp1251[]= { 2 , 'E',10, 'A',' ', 'S', 'I', 'U',13, 'D', 'R', 'J', 'N', 'F', 'C', 'K', 'T', 'Z', 'L', 'W', 'H', 'Y', 'P', 'Q', 'O', 'B', 'G', 3, 'M', 'X', 'V', 1 ,
                        2 ,0xc5,10,0xc0,' ',0xd1,0xc8,0xd3,13,0xc4,0xd0,0xc9,0xcd,0xd4,0xd6,0xca,0xd2,0xc7,0xcb,0xc2,0xd5,0xdb,0xcf,0xdf,0xce,0xc1,0xc3, 3,0xcc,0xdc,0xc6, 1 ,
                        2 , '3',10, '-',' ',0x27, '8', '7',13,  4 , '4',0xde, ',',0xdd, ':', '(', '5', '+', ')', '2',0xd9, '6', '0', '1', '9', '?',0xd8, 3, '.', '/', '=', 1 };

//cp866                  0     1     2     3     4     5     6     7     8     9     a     b     c     d     e     f
uint8_t cp8662mtk[] = {  0  , 31  ,  0  , 27  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  2  ,  0  ,  0  ,  8  ,  0  ,  0  , //00
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //10
                         4  ,  0  ,  0  ,96+0 ,32+0 ,  0  ,  0  ,96+5 ,96+15,96+18,96+9 ,96+17,96+12,96+3 ,96+28,96+29, //20
                       96+22,96+23,96+19,96+1 ,96+10,96+16,96+21,96+7 ,96+6 ,96+24,96+14,  0  ,  0  ,96+30,  0  ,96+25, //30
                       64+0 ,32+3 ,32+25,32+14,32+9 ,32+1 ,32+13,32+26,32+20,32+6 ,32+11,32+15,32+18,32+28,32+12,32+24, //40
                       32+22,32+23,32+10,32+5 ,32+16,32+7 ,32+30,32+19,32+29,32+21,32+17,  0  ,  0  ,  0  ,  0  ,  0  , //50
                         0  ,32+3 ,32+25,32+14,32+9 ,32+1 ,32+13,32+26,32+20,32+6 ,32+11,32+15,32+18,32+28,32+12,32+24, //60
                       32+22,32+23,32+10,32+5 ,32+16,32+7 ,32+30,32+19,32+29,32+21,32+17,  0  ,  0  ,  0  ,  0  ,  0  , //70
                       64+3 ,64+25,64+19,64+26,64+9 ,64+1 ,64+30,64+17,64+6 ,64+11,64+15,64+18,64+28,64+12,64+24,64+22, //80
                       64+10,64+5 ,64+16,64+7 ,64+13,64+20,64+14,96+10,96+26,96+20,  0  ,64+21,64+29,96+13,96+11,64+23, //90
                       64+3 ,64+25,64+19,64+26,64+9 ,64+1 ,64+30,64+17,64+6 ,64+11,64+15,64+18,64+28,64+12,64+24,64+22, //a0
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //b0
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //c0
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //d0
                       64+10,64+5 ,64+16,64+7 ,64+13,64+20,64+14,96+10,96+26,96+20,  0  ,64+21,64+29,96+13,96+11,64+23, //e0
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  };//f0

//koi8r                  0     1     2     3     4     5     6     7     8     9     a     b     c     d     e     f
uint8_t koi8r2mtk[] = {  0  , 31  ,  0  , 27  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  2  ,  0  ,  0  ,  8  ,  0  ,  0  , //00
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //10
                         4  ,  0  ,  0  ,96+0 ,32+0 ,  0  ,  0  ,96+5 ,96+15,96+18,96+9 ,96+17,96+12,96+3 ,96+28,96+29, //20
                       96+22,96+23,96+19,96+1 ,96+10,96+16,96+21,96+7 ,96+6 ,96+24,96+14,  0  ,  0  ,96+30,  0  ,96+25, //30
                       64+0 ,32+3 ,32+25,32+14,32+9 ,32+1 ,32+13,32+26,32+20,32+6 ,32+11,32+15,32+18,32+28,32+12,32+24, //40
                       32+22,32+23,32+10,32+5 ,32+16,32+7 ,32+30,32+19,32+29,32+21,32+17,  0  ,  0  ,  0  ,  0  ,  0  , //50
                         0  ,32+3 ,32+25,32+14,32+9 ,32+1 ,32+13,32+26,32+20,32+6 ,32+11,32+15,32+18,32+28,32+12,32+24, //60
                       32+22,32+23,32+10,32+5 ,32+16,32+7 ,32+30,32+19,32+29,32+21,32+17,  0  ,  0  ,  0  ,  0  ,  0  , //70
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //80
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //90
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //a0
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //b0
                       96+11,64+3 ,64+25,64+14,64+9 ,64+1 ,64+13,64+26,64+20,64+6 ,64+11,64+15,64+18,64+28,64+12,64+24, //c0
                       64+22,64+23,64+10,64+5 ,64+16,64+7 ,64+30,64+19,64+29,64+21,64+17,96+26,96+13,96+20,96+10,  0  , //d0
                       96+11,64+3 ,64+25,64+14,64+9 ,64+1 ,64+13,64+26,64+20,64+6 ,64+11,64+15,64+18,64+28,64+12,64+24, //e0
                       64+22,64+23,64+10,64+5 ,64+16,64+7 ,64+30,64+19,64+29,64+21,64+17,96+26,96+13,96+20,96+10,  0  };//f0

//cp1251                 0     1     2     3     4     5     6     7     8     9     a     b     c     d     e     f
uint8_t cp12512mtk[]= {  0  , 31  ,  0  , 27  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  2  ,  0  ,  0  ,  8  ,  0  ,  0  , //00
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //10
                         4  ,  0  ,  0  ,96+0 ,32+0 ,  0  ,  0  ,96+5 ,96+15,96+18,96+9 ,96+17,96+12,96+3 ,96+28,96+29, //20
                       96+22,96+23,96+19,96+1 ,96+10,96+16,96+21,96+7 ,96+6 ,96+24,96+14,  0  ,  0  ,96+30,  0  ,96+25, //30
                       64+0 ,32+3 ,32+25,32+14,32+9 ,32+1 ,32+13,32+26,32+20,32+6 ,32+11,32+15,32+18,32+28,32+12,32+24, //40
                       32+22,32+23,32+10,32+5 ,32+16,32+7 ,32+30,32+19,32+29,32+21,32+17,  0  ,  0  ,  0  ,  0  ,  0  , //50
                         0  ,32+3 ,32+25,32+14,32+9 ,32+1 ,32+13,32+26,32+20,32+6 ,32+11,32+15,32+18,32+28,32+12,32+24, //60
                       32+22,32+23,32+10,32+5 ,32+16,32+7 ,32+30,32+19,32+29,32+21,32+17,  0  ,  0  ,  0  ,  0  ,  0  , //70
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //80
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //90
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //a0
                         0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  , //b0
                       64+3 ,64+25,64+19,64+26,64+9 ,64+1 ,64+30,64+17,64+6 ,64+11,64+15,64+18,64+28,64+12,64+24,64+22, //c0
                       64+10,64+5 ,64+16,64+7 ,64+13,64+20,64+14,96+10,96+26,96+20,  0  ,64+21,64+29,96+13,96+11,64+23, //d0
                       64+3 ,64+25,64+19,64+26,64+9 ,64+1 ,64+30,64+17,64+6 ,64+11,64+15,64+18,64+28,64+12,64+24,64+22, //e0
                       64+10,64+5 ,64+16,64+7 ,64+13,64+20,64+14,96+10,96+26,96+20,  0  ,64+21,64+29,96+13,96+11,64+23};//f0