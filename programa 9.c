#include<stdio.h>
int main(){
    /*Hernandez Flores Ricardo Omar
    equipo Zener
    28 abr 21
    Programa 9 Calcular Promedio de una materia    
    */
   float cal1, cal2, cal3, prom ;
   printf("\n\n Programa 9");
   printf("\n\n  Calcular Promedio de una materia");
   Printf("\ndame tu primer calificacion");
   scanf("%f", &cal1);
   printf("\n\n dame tu segunda calificacion");
   scanf("%f",%cal2);
   printf("\n\n dame tu tercer calificacion");
   scanf("%f",cal3);
   prom= (cal1+cal2+cal)/3;
   printf("tu promedio es : %.2f\n", prom);
   printf("gracias por tu visita");
   return 0;
}
