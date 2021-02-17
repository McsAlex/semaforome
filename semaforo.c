/*
 * File:   semaforo.c
 * Author: 19179453
 *
 * Created on 17 de Fevereiro de 2021, 16:38
 */


#include <xc.h>
#include "config.h"
#define VERDE       PORTDbits.RD5
#define AMARELO     PORTDbits.RD6
#define VERMELHO    PORTDbits.RD7
#define VERDEped    PORTDbits.RD3
#define VERMELHOped PORTDbits.RD2
#define BOTAO       PORTDbits.RD1

void semaforo_init(void) 
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD1 = 1;
    
    VERDEped    = 0;
    VERMELHOped = 0;
    VERDE       = 0;
    AMARELO     = 0;
    VERMELHO    = 0;
}

void verde (int x)
{
    PORTDbits.RD5 = x;
}
void amarelo (int x)
{
    PORTDbits.RD6 = x;
}
void vermelho (int x)
{
    PORTDbits.RD7 = x;
}
void verdePE (int x)
{
    PORTDbits.RD2 = x;
}
void vermelhoPE (int x)
{
    PORTDbits.RD2 = x;
}
int botao (void)
{
    return BOTAO;
}