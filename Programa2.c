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
	
	for(i=1;i<=num/2;i++)//hasta el num divido entre 2, comprobar de uno en uno si el valor es divisible.
	{
		if(num % i ==0) //num modulo es igual a 0
		{
			printf("%i, ", i); //el for se detiene hasta no tener divisores, e imprime los que son divisores.
		}
	}
	printf("%i", num);//se imprime el número porque es divisor entre sí mismo.
}
