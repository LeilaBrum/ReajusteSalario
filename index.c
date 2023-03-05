#include <stdio.h>
#include <locale.h>
#define Ex5

#ifdef Ex5
// Crie uma funcao chamada positivo para garantir o recebimento de um salario positivo.
// Crie a funcao Reajuste e calcule o reajuste desse salario considerando:
// a) Se o salario for inferior  a 1100 reais o reajuste sera de 15%;
// b)Se o salario for maior ou igual a 1100 e menor ou igual a 1800 o reajuste sera de 12.5%;
// c)Se o salario for superior a 1800, o reajuste deve ser de 8%.
// Exiba no interior da funcao main o antigo salario e o salario novo com reajuste

float salario, salarionovo;

void positivo()
{
    do
    {
        printf("Insira o valor do seu salario atual.\n");
        scanf("%f", &salario);

        if (salario < 0)
            printf("Salario invalido.\nInsira apenas valores maiores que 0.\n\n");
    } while (salario < 0);
}

void reajuste()
{
    if (salario < 1100)
        salarionovo = salario + (salario * 0, 15);

    else if (salario >= 1100 && salario <= 1800)
        salarionovo = salario + (salario * 0.125);

    else
        salarionovo = salario + (salario * 0.8);
}

float main()
{
    setlocale(LC_ALL, "Portuguese");
    positivo();
    reajuste();
    printf("O salario antigo %.2f\n", salario);
    printf("O salario novo e  %.2f \n", salarionovo);
}

#endif // Ex5
