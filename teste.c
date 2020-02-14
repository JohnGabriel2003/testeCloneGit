#include <stdlib.h>
#include <stdio.h>

int main(){
	int idade;

	printf("Idade: ");
	scanf("%i", &idade);

	idade = idade - 1;

	printf("Nova Idade - 1 = %i", idade);
	printf("\n");

	idade = idade + 1;
	
	printf("Idade Original = %i, idade");
	printf("\n");
	
    return 0;
}
