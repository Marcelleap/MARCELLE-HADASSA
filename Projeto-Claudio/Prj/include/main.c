#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculadora ( float a, float b, int c);
float soma (float a, float b);
float subtracao (float a, float b);
float multiplicacao (float a, float b);
float divisao (float a, float b);
void menu ();
void menu1();

int main ()
{
    float a, b;
    int res;
    char opcao;

    do
    {
        printf ("\n\n.....................CALCULADORA.........................");
        printf ("Insira o primeiro numero:");
        scanf("%f", &a);
        printf ("\n\nInsira o segundo numero:");
        scanf("%f", &b);

        do
        {
            menu();

            printf ("\n\n Insira a opcao correspondente: ");
            if ((res != 1 )|| (res != 2)|| (res!= 3) || (res!= 4))
            {
                printf ("Opcao invalida, insira novamente");
            }

            scanf("%d", &res);
        }
        while (res>4 || res<1);

        calculadora(a, b, res);

        printf("\n Deseja continuar ?");
        menu1();
        printf("Digite a opcao desejada:")
        scanf("%d", &opcao);


        switch(opcao)
        {
        case 's':
        case 'S':
            break;

        case 'n':
        case 'N':
            exit(1);
            break;


        default:
            printf("Opcao invalida");
            break;
        }


    }
    while (opcao!='s'|| opcao !='S');


}


void menu()
{
    printf ("\n\n............................MENU.........................");
    printf ("\n S - Sim ");
    printf ("\n N - Nao ");

};

void menu1()
{
    printf ("\n\n............................MENU.........................");
    printf ("\n 1- Soma ");
    printf ("\n 2- Subtracao ");
    printf ("\n 3- Multiplicacao ");
    printf ("\n 4- Subtracao ");
}

void calculadora (float a, float b, int c)
{
    switch (c)
    {
    case 1:
        soma (a,b);
        printf ("\n\n\n Operacao escolhida: SOMA");
        break;

    case 2:
        subtracao (a,b);
        printf ("\n\n\n Operacao escolhida: SUBTRACAO");
        break;

    case 3:
        multiplicacao (a,b);
        printf ("\n\n\n Operacao escolhida: MULTIPLICACAO");
        break;

    case 4:
        divisao (a,b);
        printf ("\n\n\n Operacao escolhida: DIVISAO");
        break;

    default:
        printf (" Opcao invalida digite novamente");
        break;
    }

    printf ("\n O resultado eh: ");
}

float soma (float a, float b)
{
    return a + b;
}

float subtracao (float a, float b)
{
    return a - b;
}

float multiplicacao (float a, float b)
{
    return a * b;
}
float divisao (float a, float b)
{
    return a/b;
}
