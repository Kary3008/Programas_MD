#include<stdio.h>
#include<stdlib.h>

//Determinar los divisores de un numero.

void main(void)
{
	int i, num;
	
	do
	{	
	printf("Digite un numero: ");
	scanf("%i", &num);
	}while(num<=0);
	
	for(i=1;i<=num/2;i++)
	{
		if(num % i ==0)
		{
			printf("%i, ", i);
		}
	}
	printf("%i", num);
}
