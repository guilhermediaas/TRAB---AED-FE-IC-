#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"Portuguese");
    /*Esse programa ir� executar toda parte de cadastro
    e leitura de dados de funcion�rios. Ir� usar um banco de dados
    funcionarios.txt na pasta raiz do programa*/



    /*inicio - var�aveis do programa*/
    int i=0, qtd;
    char nome[100], telefone[20],cargo[100], salario[20], algo[2], codigo[5];
    FILE *dbFunc;
    /*fim - var�aveis do programa*/

    /*abertura do programa para atualiza��o a partir do final*/
    dbFunc = fopen("db-Funcionarios.txt","a+"); /*arquivo db.txt aberto modo grava��o*/

    printf("Quantos funcion�rio deseja cadastrar? ");
    scanf("%d", &qtd);
    gets(algo);
    do
    {

    /*inicio-c�digo*/
    fputs("C�digo: ", dbFunc);
    printf("Digite o c�digo: ");
    gets(codigo);
    fputs(codigo, dbFunc);
    /*inicio-c�digo*/
    fputc('\n',dbFunc);

    /*inicio-nome*/
    fputs("Nome do funcion�rio: ", dbFunc);
    printf("Digite o nome do funcion�rio: ");
    gets(nome);
    fputs(nome, dbFunc);
    /*fim-nome*/
    fputc('\n',dbFunc);

    /*inicio-telefone*/
    fputs("Telefone: ", dbFunc);
    printf("Digite o n�mero do telefone: ");
    gets(telefone);
    fputs(telefone, dbFunc);
    /*fim-telefone*/

    fputc('\n',dbFunc);

    /*inicio-cargo*/
    fputs("Cargo: ", dbFunc);
    printf("Digite o cargo: ");
    gets(cargo);
    fputs(cargo, dbFunc);
    /*fim-cargo*/

    fputc('\n',dbFunc);

    /*inicio-salario*/
    fputs("Sal�rio: ", dbFunc);
    printf("Digite o sal�rio: ");
    gets(salario);
    fputs(salario, dbFunc);
    /*fim-cargo*/

    printf("\n\n");

    fputc('\n',dbFunc);
    fputc('\n',dbFunc);

    i++;
    } while ( i<qtd );
    return 0;
}
