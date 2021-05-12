#include<stdio.h>

int main()
{
    /*Hernandez Flores Ricardo Omar
    equipo Zener
    28 abr 21
    Programa 10 Calcular el precio total con iva    
    */
   float precio, IVA, total;
   printf("precio");
   scanf("%f",&precio);
   printf("ingresa el iva");
   scanf("%f",&IVA);
   total= precio+precio*(IVA/100);
   printf("el precio final con iva es : %.2f/n", total);
   return 0;
}
