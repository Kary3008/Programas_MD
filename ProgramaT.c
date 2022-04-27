#include<stdio.h>
#include<stdlib.h>

//Determinar si es un número primo o no.

void main(void)
{
	int i, num, cont=0;
	
	printf("Digite un  numero: ");
	scanf("%i", &num);
	
	for(i=1;i<=num;i++)
	{
		if(num % i == 0){ /*se divide entre todos los numeros, 
			si es igual a 0, hay más números divisibles entre ellos*/
			//cont++;
			if(cont>2)
			{
				for(i=1;i<=num/2;i++)
				{
					if(num % i ==0) //num modulo es igual a 0
					{
						printf("%i, ", i); //el for se detiene hasta no tener divisores, e imprime los que son divisores.
					}	
				}
			}
			else
			{
				printf("%i, ", i);
			}
		}
		//	printf("%i, ", i); //el for se detiene hasta no tener divisores, e imprime los que son divisores.
	}
	//printf("%i", num);//se imprime el número porque es divisor entre sí mismo.
	
/*	if(cont>2)//si el conteo es mayor a 2, no es primo
	//porque quiere decir que hay más números divisibles entre ese número
		{
		//printf("\nEl numero no es primo.");
		for(i=1;i<=num/2;i++)//hasta el num divido entre 2, comprobar de uno en uno si el valor es divisible.
		{
			if(num % i ==0) //num modulo es igual a 0
			{
				printf("%i, ", i); //el for se detiene hasta no tener divisores, e imprime los que son divisores.
			}
		}
		printf("%i", num);//se imprime el número porque es divisor entre sí mismo.
	}
	//else
		//printf("\nEl numero es primo.");*/
}
//Determinar los divisores de un numero.
/*
void main(void)
{
	int i, num;
	
	do
	{	
	printf("Digite un numero: ");
	scanf("%i", &num);
	}while(num<=0);
	
	
}*/
