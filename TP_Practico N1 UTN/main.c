#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main()
{
    float datoA=0;
    float datoB=0;
    int opcion;

    do
    {
        system("cls");
        printf("CALCULADORA - TP1\n\n");

        printf("1 Ingresar 1er operando (A= %f)\n", datoA);
        printf("2 Ingresar 2do operando (B= %f)\n", datoB);
        printf("3 Sumar\n");
        printf("4 Restar\n");
        printf("5 Multiplicar\n");
        printf("6 Dividir\n");
        printf("7 Factorial\n");
        printf("8 Todas las operaciones\n");
        printf("9 Salir\n");
        scanf("%d",&opcion);
        while(!validarRango(opcion,1,9))
                {
                    printf("Error Reingrese opcion: \n\n");
                    scanf("%d",&opcion);
                }
        switch (opcion)
            {
            case 1:
                printf("ingrese su primer valor A: ");
                scanf("%f",&datoA);
                break;
            case 2:
                printf("ingrese su primer valor B: ");
                scanf("%f",&datoB);
                break;
            case 3:
                printf("El resultado de la suma es %f\n", sumar(datoA,datoB));
                break;
            case 4:
                printf("El resultado de la resta es %f\n", restar(datoA,datoB));
                break;
            case 5:
                printf("El resultado de la multiplicacion es %f\n", multiplicar(datoA,datoB));
                break;
            case 6:

                if (datoB == 0)
                    {
                    printf("ERROR, Ingrese divisor distinto de cero.\n");
                    printf("2 Ingresar 2do operando (B= %f)\n", datoB);
                    scanf("%f",&datoB);
                    }
                else
                    {
                    printf("El resultado de la division es %.2f \n", division(datoA,datoB));
                    }
                break;

            case 7:
                    {
                    printf("El resultado del factorial de dato A, es %f\n", factorial(datoA));
                    }
                break;

            case 8:

                    printf("El resultado de la suma es %f\n", sumar(datoA,datoB));

                    printf("El resultado de la resta es %f\n",restar(datoA,datoB));

                    printf("El resultado de la multiplicacion es %f\n", multiplicar(datoA,datoB));

                if (datoB == 0)
                    {
                    printf("Error. Reingrese divisor distinto de cero\n");
                    }
                else
                    {
                    printf("El resultado de la division es %.2f \n", division(datoA,datoB));
                    }
                    {

                    printf("El resultado del factorial es %f\n", factorial(datoA));
                    }
                break;
            case 9:
                break;

            }

        system("pause");
            }while(opcion != 9);

    return 0;
}








