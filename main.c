#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcion.h"
#define TAM 20

int main()
{
    int opcion=0;
    ePersona persona[TAM];

    do
    {   system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");


        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                agregarPersona (persona, TAM);
                break;
            case 2:
                borrarPersona(persona,TAM);
                break;
            case 3:
                ordenarPersonas(persona,TAM);
                break;
            case 4:
                graficoEdad(persona, TAM);
                break;
        }
        system("pause");
        }

    while(opcion !=5);
    return 0;
}

