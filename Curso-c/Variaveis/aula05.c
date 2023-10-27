#include <stdio.h>
#include <stdlib.h>

int main(){
						
			
						float num;

						float num2 = 322222;
						
						printf("Numero float: %f\n", num2); // Para numeros float tenho que imprimir com %d
							
						printf("Numero formatado: %.f\n", num2); // formatar em decimal
						
						printf("Digite o numero float:");
						scanf("%f", &num);
						printf("Numero digitado: %.3f\n", num); // numero formatado 
	
						printf("\nPrecione enter ..\n");
						getchar();
						return 0;
	}
