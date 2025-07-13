#include<locale.h>
#include <stdio.h>
#include <stdlib.h>
//Funcoes
float somar(float num1,float num2)
{
    return num1+num2;
}
float subtrair(float num1, float num2)
{
    return num1-num2;
}
float dividir(float num1,float num2)
{
    return num1/num2;
}
float multiplicar(float num1,float num2)
{
    return num1*num2;
}
float porcentagem(float num1,float num2)
{
    return (num1*num2)/100;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Variaveis
    float num1,num2,resultado;
    int opcao;


    //Input
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\nEscolha uma operação:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Dividir\n");
    printf("4 - Multiplicar\n");
    printf("5 - Porcentagem\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            resultado = somar(num1, num2);
            break;
        case 2:
            resultado = subtrair(num1, num2);
            break;
        case 3:
            resultado = dividir(num1, num2);
            break;
        case 4:
            resultado = multiplicar(num1, num2);
            break;
        case 5:
            resultado = porcentagem(num1, num2);
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
