#include <stdio.h>
#include <stdlib.h>

int main(){

	char letra;

	printf("Digite uma letra: ");
	letra = fgetc(stdin);
	printf("LEtra digitada: %c", letra);
	return 0;


}

