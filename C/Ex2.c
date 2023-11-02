#include <stdio.h>
#include <locale.h>

// Adicionando nova biblioteca para fun��es matem�ticas
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c;
    float x_linha, x_duas_linhas;
    
    printf("Equa��o de 2� Grau: f(x) = a*x^2 + b*x + c \n");
    printf("Os coeficientes devem ser para fun��es com ra�zes reais.\n");
    //pegando mais de um valor
    printf("Inserir \"a\" \"b\" \"c\": ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("\nCalculando ra�zes para: %d*x^2 + %d*x + %d.\n", a, b, c);
    
    // Utilizando funcao "sqrt" importado de "math.h" para obter raiz quadrada do par�metro 
    x_linha = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
    x_duas_linhas = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

    printf("Valor de x1 = %f\n", x_linha);
    printf("Valor de x2 = %f\n", x_duas_linhas);
    
    // ou ainda:
    printf("\n");
    printf("x\'\t= %3.f\n", x_linha);
    printf("x\'\'\t= %3.f\n", x_duas_linhas);
    
    return 0;
}
