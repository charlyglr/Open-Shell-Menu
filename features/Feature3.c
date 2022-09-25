#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct docente3 {
    char nombre[10];
    char dni[10];
    }profe3;
int main()
{

    fflush(stdin);
    printf("Ingreso de alumnos\n\n");
    printf("\n\nIngrese Nombre: ");
    gets(profe3.nombre);
    fflush(stdin);
    printf("\n\nIngrese Matricula: ");
    printf("\n\nIngrese Nota 3: ");
    scanf("%d",&profe3.nota3);
    fflush(stdin);
    printf("\nNombre: ");
    puts(alu1.nombre);
    printf("\nMatricula: ");
    puts(alu1.matricula);
    printf("\nNota3: %d",alu1.nota3);
    printf("\nNota Final: %d",alu1.final);
    return 0;
}