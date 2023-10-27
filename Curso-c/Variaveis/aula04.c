// --- me 

#include <stdlib.h>
#include <stdio.h>

int main(){
	int v1, v2 ,v3, total;
	printf("\nDigite O primeiro valor: ");
	scanf("%d",&v1);
	printf("\nDigite o Segundo valor: ");
	scanf("%d", &v2);
	printf("\nDigite O terceiro Valor:");	
	scanf("%d", &v3);
	total = v1  + v2 + v3;
	printf(" \nSoma total dos valores: %d", total);

	printf("\nPresione qualquer Tecla para sair");
	getchar();
	return 0;
}
