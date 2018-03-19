/*
* Main.c
*
* Created: 3/19/2018 9.11.32 PM
* Author : Salman Faris
*/


#define F_CPU 20000000UL
#include <avr/io.h>


int main(void)
{
 
    DDRA |= (1<<3);
    DDRA &=~ (1<<2);
 
   
    while (1) 
        {
            if(PINA & (1<<2)) 
                {
                    PORTA = PORTA|(1<<3);
   
                 }
            else
                {
                    PORTA &=~(1<<3);
                }
  
        }   
}