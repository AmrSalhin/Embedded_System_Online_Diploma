/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{float x,y;

printf("Enter number a : ");
fflush(stdout);
scanf("%f",&x);
printf("Enter number b : ");
fflush(stdout);
scanf("%f",&y);
/*Swapping Process*/
x=x+y;
y=x-y;
x=x-y;
printf("number 'a' after swap : %f\n",x);
printf("number 'b' after swap : %f",y);
}
