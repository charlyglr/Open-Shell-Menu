#Comentando para provocar cambios en GIT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct alumnos {
char nombres[30];
char matricula[15];
int nota1;
int nota2;
    int nota3;
    int final;
    }alu2;
int main()
{

fflush(stdin);
    printf("Ingreso de alumnos\n\n");
    printf("\n\nIngrese Nombre: ");
    gets(alu2.nombre);
fflush(stdin);
    printf("\n\nIngrese Matricula: ");
    gets(alu2.matricula);
    fflush(stdin);
printf("\n\nIngrese Nota 1: ");
    scanf("%d",&alu1.nota1);
    fflush(stdin);
    printf("\n\nIngrese Nota 2: ");
scanf("%d",&alu1.nota2);
    fflush(stdin);
    printf("\n\nIngrese Nota 3: ");
scanf("%d",&alu1.nota3);
    fflush(stdin);
    printf("\n\nIngrese Nota: ");
scanf("%d",&alu1.final);
    printf("\nNombre: ");
puts(alu2.nombre);
    printf("\nMatricula: ");
    puts(alu2.matricula);
    printf("\nNota1: %d",alu1.nota1);
    printf("\nNota2: %d",alu1.nota2);
printf("\nNota3: %d",alu1.nota3);
    printf("\nNota Final: %d",alu1.final);
    return 0;
}