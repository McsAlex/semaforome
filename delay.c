/*
 * File:   delay.c
 * Author: 19179453
 *
 * Created on 17 de Fevereiro de 2021, 16:45
 */


#include <xc.h>
#include "config.h"

void delay (unsigned int t) 
{
    while(1)
    {
        --t;
        __delay_ms(1);                
    }
}
