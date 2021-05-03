#include <stdio.h>
int main()
{
    /*Hernandez Flores Ricardo Omar
    equipo Zener
    28 abr 21
    Programa 7. Calcular el indice de masa corporal
    */
   float peso, altura, quinto;
   printf("\n\n Programa 7");
   printf("\n\n Calcular el indice de masa corporal");
   printf("\n\n Dame el peso");
   scanf("%f",&peso); 
   printf("\n\n Dame la altura");
   scanf("%f",&altura);
   quinto = peso /(altura*altura);
   printf("\n La masa muscular es %f",  quinto);
   return 0;
}
