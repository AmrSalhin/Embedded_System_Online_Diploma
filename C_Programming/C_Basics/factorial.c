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
{int x;
printf("Enter number : ");
fflush(stdout);
scanf("%d",&x);
int i,factorial=1;
if(x>0){
	for(i=0;i<x;i++){
		factorial*=(x-i);
	}
	printf("factorial equal : %d",factorial);
}else if(x==0){
	printf("factorial equal : 1");
}else{
	printf("Wrong Data");
}

}
