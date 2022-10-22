#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa na linguagem C que exiba a 
tabuada de multiplicação de um número N, onde N 
será inserido pelo usuário */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	
	do {
		
		printf ("Digite o número da tabuada: ");
		scanf ("%d", &n);
		printf ("\n");
		
		for (i=1; i<=10; i++) {
			
			printf ("%d x %d = %d\n", i, n, i*n);
			
		}
		
		printf ("------------------------------------\n");
		
	} while (i!=0);
	
}