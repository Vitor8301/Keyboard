/*
 * File:   main.c
 * Author: 21193634
 *
 * Created on 7 de Maio de 2021, 14:28
 */

#include <xc.h>
#include "config.h"
#include "delay.h"
#include "dispLCD4vias.h"
#include "teclado.h"


void main(void) 
{
    char msg[] = "Tecla:          ";
    char tecla;
    dispLCD_init();
    teclado_init();
    dispLCD( 0,0,"SENAI Keyboard");
    
    while ( 1 )
    {
        tecla = teclado();
        if( tecla )
            msg[7] = tecla;
        dispLCD(1,0, msg );
    }
}
