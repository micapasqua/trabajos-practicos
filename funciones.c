#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funcion.h"

void agregarPersona(ePersona persona[],int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        printf("Ingrese Nombre: ");
        fflush(stdin);
        gets(persona[i].nombre);
        printf("Ingrese edad: ");
        scanf("%d", &persona[i].edad);
        printf("Ingrese dni: ");
        scanf("%d", &persona[i].dni);
        printf("persona cargada, ingrese 1 para continuar...\n");
        scanf("%d", &persona[i].estado);
    }
}

void borrarPersona(ePersona persona[], int tam)
{   int auxInt;
    int i;
    char rta;

    printf("Ingrese el dni: ");
    scanf("%d",&auxInt);

    for(i=0; i<tam; i++)
    {
        if(persona[i].dni==auxInt)
        {
            printf("Desea eliminar los datos de %s: s/n?\n",persona[i].nombre);
            fflush(stdin);
            scanf("%c",&rta);
            if(rta=='s')
            {
                persona[i].estado=0;

            }
            else
            {
                printf("Accion cancelada por el usuario\n");
            }
        }
    }
}
void ordenarPersonas (ePersona persona[], int tam)
{
    int i, j;
    ePersona auxpers;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(persona[j].nombre, persona[i].nombre)<0)
            {
                auxpers = persona[j];
                persona[j]=persona[i];
                persona[i]=auxpers;

            }
        }
    }

printf("Nombre\t\tEdad\t\tDNI\n\n");


for(i=0; i<tam; i++)

{
    if(persona[i].estado==1){
    printf("%s\t\t%d\t\t%d\n", persona[i].nombre, persona[i].edad, persona[i].dni);
}
}
}

void graficoEdad(ePersona persona[], int tam)
{
    int i, hasta18=0, de19a35=0, mayorDe35=0, flag=0, mayor;

	for(i=0;i<tam;i++)
    {
        if(persona[i].edad<18 && persona[i].estado==1)
        {
           hasta18++;
        }
        if((persona[i].edad>17 && persona[i].edad<36) && persona[i].estado==1)
        {
           de19a35++;
        }
        if(persona[i].edad>35 && persona[i].estado==1)
        {
           mayorDe35++;
        }
    }


    if(hasta18 >= de19a35 && hasta18 >= mayorDe35){
        mayor = hasta18;
    }else{
        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else{
        mayor = mayorDe35;
        }
    }

    for(i=mayor; i>0; i--){
        printf("%02d|",i);

        if(i<= hasta18){
            printf("*");
        }
        if(i<= de19a35){
            flag=1;
            printf("\t*");
        }
        if(i<= mayorDe35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
                printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);

}
