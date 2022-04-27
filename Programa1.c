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
		if(num%i==0) /*se divide entre todos los numeros, 
			si es igual a 0, hay más números divisibles entre ellos*/
			cont++;
	}
	
	if(cont>2)//si el conteo es mayor a 2, no es primo
	//porque quiere decir que hay más números divisibles entre ese número
		printf("\nEl numero no es primo.");
	else
		printf("\nEl numero es primo.");
}
