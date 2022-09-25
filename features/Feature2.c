#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct docenta {
    char nombre[20];
    char dni[15];
    int nota3;
    int final;
    }profe;
int main()
{

    fflush(stdin);
    printf("Ingreso de alumnos\n\n");
    printf("\n\nIngrese Nombre: ");
    gets(profe.nombre);
    fflush(stdin);
    printf("\n\nIngrese Matricula: ");
    printf("\n\nIngrese Nota 3: ");
    scanf("%d",&profe.nota3);
    fflush(stdin);
    printf("\n\nIngrese Nota: ");
    scanf("%d",&alu1.final);
    printf("\nNombre: ");
    puts(alu1.nombre);
    printf("\nMatricula: ");
    puts(alu1.matricula);
    printf("\nNota3: %d",alu1.nota3);
    printf("\nNota Final: %d",alu1.final);
    return 0;
}