#include <stdio.h>
#include <stdlib.h>
#include "bibloteca.h"
int main()
{
 float suma;
 float resta;
 float multiplicacion;
 float division;
 int menu;
 float numeroA;
 float numeroB;
 float resultado;
 float x= 0;
 float y=0;
 int factorial1;
 int factorial2;


    printf("menu");
    printf("1.Ingrese 1er operando  (A=%f)\n",x);
    printf("2. Ingresar 2do operando. (B=%f)\n",y);
    printf("3. Calcular todas las operaciones.\n");
    printf("4. Informar resultados.\n");
    printf("5. Salir.\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&menu);



switch(menu){

 case 1:

 printf("\nIngrese 1er operando\n");
 scanf("%f", &numeroA);
 x = numeroA;
 break;



 case 2:

 printf("\nIngrese 2do operando\n");
 scanf("%f", &numeroB);
 y= numeroB;
 break;

 case 3:

 printf("Calculando...");
 system("PAUSE");

 case 4:


 printf("\nIngrese primer numero\n");
 scanf("%f", &numeroA);
 printf("\nIngrese segundo numero\n");
 scanf("%f", &numeroB);
 resultado = numeroA + numeroB;
 printf("El resultado de la suma de %.1f + %.2f es %.1f\n\n",numeroA,numeroB, resultado);
 resultado = numeroA - numeroB;
 printf("\nEl resultado de la resta de %.1f - %.2f es %.1f\n\n",numeroA,numeroB, resultado);
 resultado = numeroA/numeroB;
 printf("\n\nEl resultado de la division de %.1f / %.2f es %.1f\n\n",numeroA,numeroB, resultado);
 resultado = numeroA*numeroB;
 printf("\n\nEl resultado de la multiplicacion de %.1f * %.2f es %.1f\n\n",numeroA,numeroB,resultado);
 resultado = factorial1;
 printf("\nEl factorial es %i \n",factorial1);
 resultado = factorial2;
 printf("\nEl factorial es %i \n",factorial2);


 break;
 }
}

