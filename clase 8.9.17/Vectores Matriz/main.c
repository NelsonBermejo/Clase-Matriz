#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ValidarCadena(char[],int tam);
void mostrarNombres(char[][20],int);
void mostrarNombre(char []);
int main()
{    char aux[50];
     char mat [5][20];


    for(int i=0;i<5;i++){
        printf("Ingrese Nombre: ");
        gets(aux);/**Toma el control de los indices**/

        while(!ValidarCadena(aux,20))
        {  printf("Error Reingrese El nombre: ");
             gets(aux);
        }
        strcpy(mat[i],aux);/**Guarda el auxiliar en el indice de la matriz*/
    }
     for(int i=0;i<5;i++)
    {
        printf("\n%s",mat[i]);

    }
    mostrarNombres(mat,5);
    return 0;
}

int ValidarCadena(char cadena[],int tam)
{
int esValido=0;
if(strlen(cadena)<tam)/**strlen Cadena de Caracteres*/
{
    esValido=1;
}
return esValido;
}
void mostrarNombres(char nombre[][20],int cant)
{
    for (int i=0; i<cant;i++)
    {
        mostrarNombre(nombre[i]);
    }
}
void mostrarNombre(char nombre[])
{
    printf("\n%s",nombre);
}
