#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //a linha abaixo configura o idioma para portugês
    setlocale(LC_ALL, "Portuguese");
    //A linha a baixo muda a cor do texto
    system("color 1F");
    printf("Olá mundo!!\n");
    system("pause");
    system("cls");
    printf(" \n Tony-DEV \n");
    system("pause");

    return 0;
}
