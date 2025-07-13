#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void teste(void);
int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Exemplo de Funcao!\n");
    teste();
    system("pause");
    return 0;
}
void teste(void)
{
    printf("Jose Antonio Gomes da Luz\n\n");
}
