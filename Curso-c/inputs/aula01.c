#include <stdlib.h>
#include <stdio.h>

int main(){
	char letra;

	printf("Digite um caracter: ");

	letra = getc(stdin);

	printf("Caracter: %c", letra);
	return 0; 
}
