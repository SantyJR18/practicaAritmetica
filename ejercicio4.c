//librerias
#include <stdio.h>
#include <stdlib.h>

//incluir funciones
#include "menu.c"
#include "suma.c"
#include "resta.c"
#include "mult.c"
#include "division.c"

//declaracion de funciones
void suma(int num1, int num2);
void resta(int num1, int num2);
void mult(int num1, int num2);
void division(int num1, int num2);
void menu();

//principal
int main(int argc, char const *argv[])
{
    int op, num1, num2;
        do
        {
        system("cls");
        system("color f0");
        menu();
        scanf("%i", &op);

        switch (op)
        {
        case 1:
             printf("\n");
             printf("Bienvenido a la suma de dos numeros\n");
             printf("\n");
             suma(num1, num2);
             system("pause");
            break;
        case 2:
             printf("\n");
             printf("Bienvenido a la resta de dos numeros\n");
             printf("\n");
             resta(num1, num2);
             system("pause");
             break;

        case 3:
             printf("\n");
             printf("Bienvenido a la multiplicacion de dos numeros\n");
             printf("\n");
             mult(num1, num2);
             system("pause");
             break;

        case 4:
             printf("\n");
             printf("Bienvenido a la division de dos numeros\n");
             printf("\n");
             division(num1, num2);
             system("pause");
             break;
        
        case 5:
             printf("\n");
             printf("Nos vemos.... \n");
             break;
        
        default:
             printf("\n");
             printf("opcion invalida\n");
            break;
        }
        } while (op!=5);
    return 0;
}
//funciones implementadas de forma modular