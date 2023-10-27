#include  <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int valor = 0;
	printf("Digite um número inteiro: ");
	scanf("%d", &valor);
	printf("Seu valor em hexadecimal: \"%X\"\n", valor);
	printf("Seu valor em octal: \"%o\"\n", valor);
	
	return 0;
}
