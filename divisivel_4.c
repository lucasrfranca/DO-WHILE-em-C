#include <stdio.h>
#include <stdlib.h>

/* Apresentar na linguagem C todos os números 
divisíveis por 4 que sejam menores que 200.
 */

main() {
	
	int i=0;
	
	do {
		
		i+=4;
		printf ("%d ", i);
			
	} while (i<200);
	
}