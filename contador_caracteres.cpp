#include<stdio.h>
int contar_cad();
main()
{
	int x;
	printf("\tcontador de caracteres\n");
	x = contar_cad();
	printf("el caracter aparece:%i veces\n", x);
}
int contar_cad()
{
	char texto[50], caracter;
	int numeroV=0, cont=0;
	printf("ingrese una oracion\n");
	gets(texto);
	printf("ingrese el caracter a buscar\n");
	scanf("%c",&caracter);
	for(cont=0;texto[cont];cont++)
	{
		if(texto[cont]==caracter)
		{
			numeroV++;
		}
	}
	return numeroV;
}
