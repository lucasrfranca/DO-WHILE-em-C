#include <stdio.h>
#include <stdlib.h>

/* Criar um programa na linguagem C que imprima os 
múltiplos de 3 e 5, ao mesmo tempo, no intervalo de 
1 a 100 */

main() {
	
	int i=1;
	
	do {

		i++;
		
		if (i%3==0 && i%5==0) {
			
		   printf ("%d ", i);
		     
		}
		
	} while (i<100);
	
}