/*
 * File:   main.c
 * Author: ameen
 *
 * Created on 11 March, 2024, 8:16 PM
 */


#include <xc.h>
void init_timer2(void)
{
    T2CKPS0=1;
    T2CKPS1=1;
    PR2=250;
    TMR2IE=1;
    TMR2ON=0;
}

