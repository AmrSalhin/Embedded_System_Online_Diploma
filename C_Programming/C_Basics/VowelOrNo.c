/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
/*************         Amr Ahmed Mostafa Salhien          ****************/
/*************                 21/may/2022                ****************/
/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
#include <stdio.h>

void main ()
{char x;

printf("Enter an char you want to check : ");
fflush(stdout);
scanf("%c",&x);
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
	printf("%c is vowel",x);
}else{
	printf("%c is consonant",x);
}


}
