/*
 * File:   delay.c
 * Author: 21193634
 *
 * Created on 7 de Maio de 2021, 14:50
 */


#include <xc.h>
#include "config.h"

void delay (int t) 
{
    while(t)
    {
        __delay_ms(1);
        --t;
    }
}
