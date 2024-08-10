/* 
 * File:   main.h
 * Author: ameen
 *
 * Created on 11 March, 2024, 7:42 PM
 */

#ifndef MAIN_H
#define	MAIN_H
#include<xc.h>
#include"digitalkeypad.h"
#include"clcd.h"
#include"timer.h"
#define BUZZER RC1
#define BUZZER_DDR TRISC1
#define FAN RC2
#define FAN_DDR TRISC2
#define ON 1
#define OFF 0
#define DC_MOTOR RA0
#define DC_MOTOR_DDR TRISA
#define PAUSE 0x05
#define WASHING_PROGRAM_DISPLAY 0x01
#define WASHING_PROGRAM_DISPLAY_RESET 0x10
#define RESET_NOTHING 0x00
#define WATER_LEVEL 0x02
#define WATER_LEVEL_RESET 0x11
#define START_STOP_SCREEN 0x03
#define START_PROGRAM 0x04
#define START_PROGRAM_RESET 0x12
void washing_program_display(unsigned char key);
void power_on_screen(void);
void clear_screen(void);
void water_level_display(unsigned char key);
void set_time_for_program(void);
void run_program(unsigned char key);
#endif	

