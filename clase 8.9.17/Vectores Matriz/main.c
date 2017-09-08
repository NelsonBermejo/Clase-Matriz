#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ValidarCadena(char[],int tam);

int main()
{    char aux[20];
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
