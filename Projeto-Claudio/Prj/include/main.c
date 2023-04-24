#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculadora ( float a, float b, float c);
float soma (float a, float b);
float subtracao (float a, float b);
float multiplicacao (float a, float b);
float divisao (float a, float b); 
void menu (); 

int main ()
{
    float a, b, opcao; 

    printf ("Insira o primeiro numero:"); 
    scanf("%f", &a); 
    printf ("\n\nInsira o segundo numero:");
    scanf("%f", &b);  
    menu(); 

    calculadora(a, b, opcao); 


}


void main()
{
    printf ("\n\n............................MENU.........................");
    printf ("\n 1- Soma ");
    printf ("\n 2- Subtracao ");
    printf ("\n 3- Multiplicacao ");
    printf ("\n 4- Subtracao ");

}; 

float calculadora (float a, float b, float opcao); 


