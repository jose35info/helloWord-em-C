#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
   char nome[50];// precisa dew array em string
   int idade;
   printf("Digite seu nome: ");
    scanf("%s",nome);
   printf("Digite a sua idade: ");

   scanf("%d",&idade);
   // a linha abaixo executa uma estrutura de decisão
   if(idade < 18)
   {
       printf("%s voce é Menor de idade nao pode tirar carteira de habilitação \n", nome);
   }
   if( idade >=18)
   {
      printf("%s voce é Maior de idade já pode tirar carteira de habilitação \n ", nome);
   }
   system("pause");
   return 0;
}
