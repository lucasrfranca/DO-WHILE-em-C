#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que exiba a tabuada de 
multiplicação do número 5. */

main() {
	
	int i=0, n=5, res;
	
	do {
		
		i++;
		res=i*n;
			
		printf ("%d x %d = %d\n", i, n, res);
		
		
	} while (res<50);
	
}