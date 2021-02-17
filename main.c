/*
 * File:   main.c
 * Author: 19179453
 *
 * Created on 17 de Fevereiro de 2021, 15:14
 */


#include <xc.h>
#include "config.h"
#include "semaforo.h"
#include "delay.h"

void main(void)
{
    int estado = 0;
    int t;
    while(1)
    {
        switch ( estado )
       {
            case 0:
                estado = 1;
                break;
            case 1:
                semaforo_init();
                estado = 2;
                break;
            case 2:
                amarelo(0);
                vermelho(0);
                verde(1);
                if(botao()==1)
                estado = 3;
                break;
            case 3:
                t=3000;
                break;
                estado = 4;
            case 4:
                delay(1)
                --t;
                if(t<=0)
                estado = 5;
                break;
            case 5:
                verdePE(1);
                break;
    }
   }
}
