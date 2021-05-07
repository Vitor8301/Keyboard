/*
 * File:   teclado.c
 * Author: 21193634
 *
 * Created on 7 de Maio de 2021, 14:35
 */


#include <xc.h>

void teclado_init( void )
{
    ANSELH = 0;
    TRISB = 0xF0;
    PORTB = 0;
}

#define MASK    0x10

char tabTeclado[4] = {'1','2','3','A'};

char teclado ( void )
{
    char tecla = 0;
    char i;
    PORTB = 0x01;
    for( i=0; i<4; i++ )
    {    
    if( PORTB & MASK<<i )
        tecla = tabTeclado[i];
    }        
    return( tecla );
}
