EESchema Schematic File Version 2
LIBS:nanov3-rescue
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:nanov3-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date "7 feb 2016"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L DIODE D1
U 1 1 569E8699
P 3000 2400
F 0 "D1" H 3000 2500 40  0000 C CNN
F 1 "DIODE" H 3000 2300 40  0000 C CNN
F 2 "Discret:D4" H 3000 2400 60  0000 C CNN
F 3 "~" H 3000 2400 60  0000 C CNN
	1    3000 2400
	0    -1   -1   0   
$EndComp
$Comp
L R-RESCUE-nanov3 R1
U 1 1 569E86C0
P 1900 1750
F 0 "R1" V 1980 1750 40  0000 C CNN
F 1 "1k" V 1907 1751 40  0000 C CNN
F 2 "Discret:R7" V 1830 1750 30  0000 C CNN
F 3 "~" H 1900 1750 30  0000 C CNN
	1    1900 1750
	0    -1   -1   0   
$EndComp
$Comp
L OPTO_DARLINGTON U1
U 1 1 569E87D7
P 3850 2500
F 0 "U1" H 4350 3250 60  0000 C CNN
F 1 "4N33" H 3950 2000 60  0000 C CNN
F 2 "Housings_DIP:DIP-6_W7.62mm" H 3850 2500 60  0000 C CNN
F 3 "~" H 3850 2500 60  0000 C CNN
	1    3850 2500
	1    0    0    -1  
$EndComp
$Comp
L R-RESCUE-nanov3 R4
U 1 1 569E8840
P 2750 2350
F 0 "R4" V 2830 2350 40  0000 C CNN
F 1 "200" V 2757 2351 40  0000 C CNN
F 2 "Discret:R4" V 2680 2350 30  0000 C CNN
F 3 "~" H 2750 2350 30  0000 C CNN
	1    2750 2350
	-1   0    0    1   
$EndComp
Wire Wire Line
	3000 2300 3000 2200
Connection ~ 2750 2100
$Comp
L R-RESCUE-nanov3 R8
U 1 1 569E8AC5
P 5600 2100
F 0 "R8" V 5680 2100 40  0000 C CNN
F 1 "100" V 5607 2101 40  0000 C CNN
F 2 "Discret:R4" V 5530 2100 30  0000 C CNN
F 3 "~" H 5600 2100 30  0000 C CNN
	1    5600 2100
	0    -1   -1   0   
$EndComp
$Comp
L R-RESCUE-nanov3 R7
U 1 1 569E8AD4
P 5100 3200
F 0 "R7" V 5180 3200 40  0000 C CNN
F 1 "100k" V 5107 3201 40  0000 C CNN
F 2 "Discret:R4" V 5030 3200 30  0000 C CNN
F 3 "~" H 5100 3200 30  0000 C CNN
	1    5100 3200
	0    1    1    0   
$EndComp
$Comp
L R-RESCUE-nanov3 R10
U 1 1 569E8B22
P 5650 2950
F 0 "R10" V 5730 2950 40  0000 C CNN
F 1 "5k" V 5657 2951 40  0000 C CNN
F 2 "Discret:R4" V 5580 2950 30  0000 C CNN
F 3 "~" H 5650 2950 30  0000 C CNN
	1    5650 2950
	-1   0    0    1   
$EndComp
Wire Wire Line
	4650 2100 5350 2100
Wire Wire Line
	4650 1900 4850 1900
Wire Wire Line
	4850 1900 4850 3200
$Comp
L DIODE D2
U 1 1 569E8D13
P 3000 4400
F 0 "D2" H 3000 4500 40  0000 C CNN
F 1 "DIODE" H 3000 4300 40  0000 C CNN
F 2 "Discret:D4" H 3000 4400 60  0000 C CNN
F 3 "~" H 3000 4400 60  0000 C CNN
	1    3000 4400
	0    -1   -1   0   
$EndComp
$Comp
L R-RESCUE-nanov3 R3
U 1 1 569E8D19
P 2500 4000
F 0 "R3" V 2580 4000 40  0000 C CNN
F 1 "1k" V 2507 4001 40  0000 C CNN
F 2 "Discret:R7" V 2430 4000 30  0000 C CNN
F 3 "~" H 2500 4000 30  0000 C CNN
	1    2500 4000
	0    -1   -1   0   
$EndComp
$Comp
L OPTO_DARLINGTON U2
U 1 1 569E8D25
P 4000 4400
F 0 "U2" H 4500 5150 60  0000 C CNN
F 1 "4N33" H 4100 3900 60  0000 C CNN
F 2 "Housings_DIP:DIP-6_W7.62mm" H 4000 4400 60  0000 C CNN
F 3 "~" H 4000 4400 60  0000 C CNN
	1    4000 4400
	-1   0    0    -1  
$EndComp
$Comp
L R-RESCUE-nanov3 R9
U 1 1 569E8D58
P 5600 4200
F 0 "R9" V 5680 4200 40  0000 C CNN
F 1 "100" V 5607 4201 40  0000 C CNN
F 2 "Discret:R4" V 5530 4200 30  0000 C CNN
F 3 "~" H 5600 4200 30  0000 C CNN
	1    5600 4200
	0    -1   -1   0   
$EndComp
$Comp
L R-RESCUE-nanov3 R5
U 1 1 569E8D5E
P 2750 4850
F 0 "R5" V 2830 4850 40  0000 C CNN
F 1 "100k" V 2757 4851 40  0000 C CNN
F 2 "Discret:R4" V 2680 4850 30  0000 C CNN
F 3 "~" H 2750 4850 30  0000 C CNN
	1    2750 4850
	0    1    1    0   
$EndComp
Wire Wire Line
	2750 4000 3200 4000
Connection ~ 3000 4600
Wire Wire Line
	2500 4850 2500 4600
Wire Wire Line
	2500 4600 3200 4600
Wire Wire Line
	4650 4200 5350 4200
Connection ~ 3200 2300
Connection ~ 3000 2200
Connection ~ 4650 1900
Connection ~ 4650 2100
Connection ~ 4850 3200
Connection ~ 5350 2100
Connection ~ 4650 4200
Connection ~ 3200 3800
Connection ~ 3000 4850
Connection ~ 3200 4000
Connection ~ 2750 4000
Connection ~ 2500 4850
Wire Wire Line
	3200 3800 3300 3800
Wire Wire Line
	3300 3800 3300 4950
Wire Wire Line
	3300 4950 3000 4950
Wire Wire Line
	3000 4950 3000 4850
NoConn ~ 3500 2750
NoConn ~ 4350 4650
Wire Wire Line
	3000 4200 2750 4200
Wire Wire Line
	2750 4200 2750 4000
Connection ~ 3000 4200
Wire Wire Line
	4650 2700 6900 2700
Wire Wire Line
	6900 2700 6900 2650
Connection ~ 5650 2700
Wire Wire Line
	5350 3200 6700 3200
Wire Wire Line
	6700 3200 6700 1950
Wire Wire Line
	6700 1950 7600 1950
Connection ~ 5650 3200
Wire Wire Line
	5850 4200 6800 4200
Wire Wire Line
	6800 4200 6800 2750
Wire Wire Line
	6800 2750 7600 2750
Wire Wire Line
	4650 4500 6100 4500
Wire Wire Line
	6100 4500 6100 3200
Wire Wire Line
	6100 3200 5650 3200
$Comp
L RJ45 J1
U 1 1 56B71753
P 1050 1100
F 0 "J1" H 1250 1600 60  0000 C CNN
F 1 "RJ45" H 900 1600 60  0000 C CNN
F 2 "Connect:RJ45_8" H 1050 1100 60  0001 C CNN
F 3 "" H 1050 1100 60  0000 C CNN
	1    1050 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1300 1550 1400 1550
Wire Wire Line
	700  1550 800  1550
Wire Wire Line
	1200 2600 3200 2600
Connection ~ 3000 2600
Wire Wire Line
	1200 1550 1200 4850
Connection ~ 2750 2600
Wire Wire Line
	900  1550 1200 1550
Wire Wire Line
	1200 4850 2500 4850
Connection ~ 1200 2600
Connection ~ 3200 2600
Connection ~ 1400 1550
Connection ~ 1300 1550
Connection ~ 1200 1550
Connection ~ 1100 1550
Connection ~ 800  1550
Connection ~ 700  1550
Connection ~ 2250 4000
Connection ~ 4650 2700
Connection ~ 5350 3200
Connection ~ 4650 4500
Connection ~ 5350 4200
Connection ~ 5850 4200
Connection ~ 6100 3200
Connection ~ 1000 1550
Connection ~ 900  1550
Connection ~ 1600 750 
NoConn ~ 1600 750 
$Comp
L R-RESCUE-nanov3 R2
U 1 1 56BA4DB0
P 1900 1950
F 0 "R2" V 1980 1950 40  0000 C CNN
F 1 "1k" V 1907 1951 40  0000 C CNN
F 2 "Discret:R7" V 1830 1950 30  0000 C CNN
F 3 "~" H 1900 1950 30  0000 C CNN
	1    1900 1950
	0    -1   -1   0   
$EndComp
Wire Wire Line
	700  1950 1650 1950
Connection ~ 2150 1950
Connection ~ 1650 1950
Wire Wire Line
	2150 1950 2150 1850
Wire Wire Line
	2150 1850 1650 1850
Wire Wire Line
	1650 1850 1650 1750
$Comp
L R-RESCUE-nanov3 R6
U 1 1 56BA5177
P 3000 1950
F 0 "R6" V 3080 1950 40  0000 C CNN
F 1 "100" V 3007 1951 40  0000 C CNN
F 2 "Discret:R4" V 2930 1950 30  0000 C CNN
F 3 "~" H 3000 1950 30  0000 C CNN
	1    3000 1950
	-1   0    0    1   
$EndComp
Wire Wire Line
	2150 1750 2750 1750
Wire Wire Line
	2750 1700 2750 2100
Wire Wire Line
	2750 1700 3000 1700
Connection ~ 2750 1750
Connection ~ 3000 1700
Connection ~ 2150 1750
Wire Wire Line
	3000 2200 3200 2200
Wire Wire Line
	3200 2200 3200 2300
Connection ~ 5850 2100
Wire Wire Line
	5850 2100 5850 1350
Wire Wire Line
	5850 1350 9800 1350
Wire Wire Line
	9800 1350 9800 2000
Wire Wire Line
	9800 2000 8800 2000
$Comp
L SUPP32 P1
U 1 1 56BA5819
P 8200 2450
F 0 "P1" H 8200 3300 50  0000 C CNN
F 1 "SUPP32" H 8200 1600 50  0000 C CNN
F 2 "Housings_DIP:DIP-32_W15.24mm" H 8200 2450 50  0001 C CNN
F 3 "" H 8200 2450 50  0000 C CNN
	1    8200 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	7600 1950 7600 2000
Wire Wire Line
	6900 2650 7600 2650
Wire Wire Line
	7600 2650 7600 2700
Wire Wire Line
	7600 2750 7600 2800
NoConn ~ 7600 1700
NoConn ~ 7600 1800
NoConn ~ 7600 1900
NoConn ~ 7600 2100
NoConn ~ 7600 2200
NoConn ~ 7600 2300
NoConn ~ 7600 2400
NoConn ~ 7600 2500
NoConn ~ 7600 2600
NoConn ~ 7600 2900
NoConn ~ 7600 3000
NoConn ~ 7600 3100
NoConn ~ 7600 3200
NoConn ~ 8800 1700
NoConn ~ 8800 1800
NoConn ~ 8800 1900
NoConn ~ 8800 2100
NoConn ~ 8800 2200
NoConn ~ 8800 2300
NoConn ~ 8800 2400
NoConn ~ 8800 2500
NoConn ~ 8800 2600
NoConn ~ 8800 2700
NoConn ~ 8800 2800
NoConn ~ 8800 2900
NoConn ~ 8800 3000
NoConn ~ 8800 3100
NoConn ~ 8800 3200
Wire Wire Line
	700  1950 700  1550
Wire Wire Line
	1400 1550 1400 4000
Connection ~ 1400 4000
Wire Wire Line
	1400 4000 2250 4000
Connection ~ 7600 1700
Connection ~ 7600 1800
Connection ~ 7600 1900
Connection ~ 7600 2100
Connection ~ 7600 2200
Connection ~ 7600 2300
Connection ~ 7600 2400
Connection ~ 7600 2500
Connection ~ 7600 2600
Connection ~ 7600 2900
Connection ~ 7600 3000
Connection ~ 7600 3100
Connection ~ 7600 3200
Connection ~ 8800 1700
Connection ~ 8800 1800
Connection ~ 8800 1900
Connection ~ 8800 2100
Connection ~ 8800 2200
Connection ~ 8800 2300
Connection ~ 8800 2400
Connection ~ 8800 2500
Connection ~ 8800 2600
Connection ~ 8800 2700
Connection ~ 8800 2800
Connection ~ 8800 2900
Connection ~ 8800 3000
Connection ~ 8800 3100
Connection ~ 8800 3200
$EndSCHEMATC
