#include <stdio.h>
int main()
{
    /*Hernandez Flores Ricardo Omar
    equipo Zener
    28 abr 21
    Programa 7. Calcular la tasa de rentabilidad que obtendrias al comprar una empresa
    */

   float beneficiosanualesnetos, precio, rentabilidad;
   printf("\n\n Programa 8");
   printf("\n\n calcular la tasa de rentabilidad inicial");
   printf("\n\n ¿cuales son los beneficios anuales de la empresa?");
   scanf("%f", &beneficiosanualesnetos);
   printf("\n\n ¿cual es el precio de venta?");
   scanf("%f", &precio);
   rentabilidad = (beneficiosanualesnetos/precio);
   printf("\n\n la tasa de rentabilidad que obtendras sera de %f", rentabilidad );
   return 0; 
}
