#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elaborar um programa na linguagem C que calcule o 
quadrado do número inserido e somente termine 
quando for inserido o número 0 */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
    
	do {
		
	    printf ("Digite um número: ");
	    scanf ("%d", &n);
	    
	    n=n*n;
	    
		printf ("O quadrado do número digitado é: %d", n);
		printf ("\n");
		printf ("-------------------------------------------------\n");
		
	} while (n!=0);
	
}