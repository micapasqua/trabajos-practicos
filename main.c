#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int opcion;
    float numero1, numero2;
    float respuesta;

    do
    {
        printf("  1- Ingresar 1er operando (A=%.2f)\n", numero1);
        printf("  2- Ingresar 2do operando (B=%.2f)\n", numero2);
        printf("  3- Calcular la suma (A+B)\n");
        printf("  4- Calcular la resta (A-B)\n");
        printf("  5- Calcular la division (A/B)\n");
        printf("  6- Calcular la multiplicacion (A*B)\n");
        printf("  7- Calcular el factorial (A!)\n");
        printf("  8- Calcular todas las operaciones\n");
        printf("  9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("ingrese un numero: ");
            scanf("%f", &numero1);
            break;
        case 2:
            printf("ingrese un numero: ");
            scanf("%f", &numero2);
            break;
        case 3:
            respuesta= suma (numero1, numero2);
                        printf("\nel primer operando es: %f \nel segundo operando es: %f \ny la suma es: %.2f\n",numero1,numero2, respuesta);
                        break;
        case 4:
            respuesta= resta (numero1, numero2);
                        printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su resta es: %.2f\n",numero1,numero2, respuesta);
                        break;
        case 5:
            respuesta= division (numero1, numero2);
            if(respuesta != 0)
            {
                                printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su division es: %.2f\n",numero1 ,numero2, respuesta);
                            }
            else
            {
                                printf("\nERROR (no se puede dividir por cero, reintente por favor)\n");
                           }
            break;
        case 6:
            respuesta= multiplicacion (numero1, numero2);
                        printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su multiplicacion es: %.2f\n",numero1,numero2, respuesta);
                       break;
        case 7:
            respuesta = factorial (numero1);
            if (respuesta != 0)
            {
                respuesta= factorial (numero1);
                                printf("\nel primer operando es: %f \ny su factorizacion es: %f\n",numero1, respuesta);
                            }
            else
            {
                                printf("\nENTRADA NO VALIDA (no existe factorial de numero negativo, reintente)\n");
                            }
            break;
        case 8:
                        respuesta= suma (numero1,numero2);
            printf("\nel primer operando es: %f \nel segundo operando es: %f \ny la suma es: %f",numero1,numero2, respuesta);
                        respuesta= resta (numero1, numero2);
            printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su resta es: %f",numero1,numero2, respuesta);
                        respuesta= division (numero1, numero2);
            if(respuesta != 0)
            {
                printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su division es: %f \n",numero1,numero2, respuesta);
            }
            else
            {
                printf("\nERROR (no se puede dividir por cero, reintente por favor)\n");
            }
                        respuesta= multiplicacion (numero1, numero2);
            printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su multiplicacion es: %f\n",numero1,numero2, respuesta);
                        respuesta = factorial (numero1);
            if (respuesta != 0)
            {
                respuesta= factorial (numero1);
                printf("\nel primer operando es: %f \ny su factorizacion es: %f",numero1, respuesta);
            }
            else
            {
                printf("\nENTRADA NO VALIDA (no existe factorial de numero negativo, reintente)\n");
            }
            break;
        }

    }
    while(opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4 || opcion == 5 || opcion == 6 || opcion == 7 || opcion == 8);

    return 0;
}
