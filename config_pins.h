/*
 * 
 *  AVR
 * 
 * 
 */ 
#if defined(__AVR__)

#include<arduino.h>
#define xenable 2
#define xdirection 6
#define xstep 4

#define yenable 7
#define ydirection 9
#define ystep 8

#define zenable 10
#define zdirection A5
#define zstep A4

#define e0enable 11
#define e0direction A2
#define e0step A3


/*#define xmin_pin 0
#define xmax_pin 0
#define ymin_pin 0
#define ymax_pin 0
#define zmin_pin 0
#define temp0_pin 0
#define heater0_pin 0
*/

#define zmax_pin 13


/*
 * 
 *  ESP8266
 * 
 * 
 */ 
#elif defined(ESP8266)

#include<arduino.h>
#define xenable D1
#define xdirection D2
#define xstep D3
#define yenable D1
#define ydirection D2
#define ystep D3
#define zenable D1
#define zdirection D2
#define zstep D3


#else
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <conio.h>

#define xenable 0
#define xdirection 0
#define xstep 0
#define yenable 0
#define ydirection 0
#define ystep 0
#define zenable 0
#define zdirection 0
#define zstep 0
#define e0enable 0
#define e0direction 0
#define e0step 0

#define xmin_pin 0
#define xmax_pin 0
#define ymin_pin 0
#define ymax_pin 0
#define zmin_pin 0
#define zmax_pin 0


#define temp0_pin 0
#define heater0_pin 0
#endif


/*
 * 
 *  
 *  CONFIGURATION
 * 
 * 
 */ 

#define motortimeout 10000000 // 30 seconds

// need to change depends on CPU
#define F_CPU 16000000UL
#define  US  * (F_CPU / 1000000)
#define MS  * (F_CPU / 1000)


#define HOMINGSPEED 100
#define XOFFSET 0
#define YOFFSET 0
#define ZOFFSET 0
#define EOFFSET 0

#define XJERK 25
#define YJERK 25
#define ZJERK 5
#define E0JERK 5

#define XACCELL 500
#define YACCELL 500
#define ZACCELL 500

#define XMOVEACCELL 1500
#define YMOVEACCELL 1500
#define ZMOVEACCELL 1500

#define E0ACCELL 100

#define XMAXFEEDRATE 200
#define YMAXFEEDRATE 200
#define ZMAXFEEDRATE 50
#define E0MAXFEEDRATE 10

#define XSTEPPERMM 120
#define YSTEPPERMM 120
#define ZSTEPPERMM 420
#define E0STEPPERMM 230

#define NUMBUFFER 5
#define XMAX 0
#define YMAX 0
#define ZMAX 100

