/******************************************************************
*Programa: Calculadora TP 1
*
*Objetivos :
*Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
*1. Ingresar 1er operando (A=x)
*2. Ingresar 2do operando (B=y)
*3. Calcular la suma (A+B)
*4. Calcular la resta (A-B)
*5. Calcular la division (A/B)
*6. Calcular la multiplicacion (A*B)
*7. Calcular el factorial (A!)
*8. Calcular todas las operaciones
*9. Salir
*Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
*que contenga las funciones para realizar las 4 operaciones.

*En el menú deberán aparecer los valores actuales cargados en los operandos A y B
*(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)

*Deberán contemplarse los casos de error (división por cero, etc)

*Documentar todas las funciones
*****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0; //Opcion que elije el usuario
    int primeraFlag=0; //Bandera de inicializacion de ingreso de numero
    int segundaFlag=0; //Bandera de inicializacion de ingreso de numero
    float numA; //Contiene ingreso del primer numero
    float numB; //Contiene ingreso del segundo numero
    float suma; //Contiene el resultado de la operacion del mismo nombre
    float resta; //Contiene el resultado de la operacion del mismo nombre
    float division; //Contiene el resultado de la operacion del mismo nombre
    float multiplicacion; //Contiene el resultado de la operacion del mismo nombre
    float factorialNumero; //Contiene el resultado de la operacion del mismo nombre

    while(seguir=='s')
    {
        if(primeraFlag ==0 && segundaFlag==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else if (primeraFlag ==0 && segundaFlag !=0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
            printf("2- Ingresar 2do operando (B=%f)\n", numB);
        }
        else if (primeraFlag !=0 && segundaFlag ==0)
        {
            printf("1- Ingresar 1er operando (A=%f)\n", numA);
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%f)\n", numA);
            printf("2- Ingresar 2do operando (B=%f)\n", numB);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                primeraFlag++;
                numA = getNum("Ingrese Primer Operando: ");
                break;
            case 2:
                segundaFlag++;
                numB = getNum("Ingrese Segundo Operando: ");
                break;
            case 3:
                suma = sumNumbers(numA, numB);
                validateAnswer(primeraFlag, segundaFlag, "suma", numA, numB, suma);
                break;
            case 4:
                resta = restNumbers(numA, numB);
                validateAnswer(primeraFlag, segundaFlag, "resta", numA, numB, resta);
                break;
            case 5:
                division = divideNumbers(numA, numB);
                validateAnswerDivision(primeraFlag, segundaFlag, "division" , numA, numB, division);
                break;
            case 6:
                multiplicacion = multiplyNumbers(numA, numB);
                validateAnswer(primeraFlag, segundaFlag, "multiplicacion", numA, numB, multiplicacion);
                break;
            case 7:
                factorialNumero = factorial(numA);
                validateAnswerFactorial(primeraFlag, numA, factorialNumero);
                break;
            case 8:
                suma = sumNumbers(numA, numB);
                validateAnswer(primeraFlag, segundaFlag, "suma", numA, numB, suma);
                resta = restNumbers(numA, numB);
                validateAnswer(primeraFlag, segundaFlag, "resta", numA, numB, resta);
                division = divideNumbers(numA, numB);
                validateAnswerDivision(primeraFlag, segundaFlag, "division" , numA, numB, division);
                multiplicacion = multiplyNumbers(numA, numB);
                validateAnswer(primeraFlag, segundaFlag, "multiplicacion", numA, numB, multiplicacion);
                factorialNumero = factorial(numA);
                validateAnswerFactorial(primeraFlag, numA, factorialNumero);
                break;
            case 9:
                printf("\nCreado por Miguel Angel Tadakuma - Ano 2017 - Division 1-H \n");
                printf("\nGracias por utilizar este programa.\n");
                seguir = 'n';
                break;
            default:
                printf("Numero ingresado es incorrecto, por favor ingrese un nuevo numero: \n");
                break;
        }
        system("pause");
        system("cls");
    }
    return 0;
}

