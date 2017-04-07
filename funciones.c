#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float getNum(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f",&numero);
    return numero;
}

void validateAnswer(int flagUno, int flagDos, char text[], float numUno, float numDos, float resp)
{
    if(flagUno == 0 || flagDos ==0)
    {
        printf("Debe ingresar ambos operandos para poder realizar la operacion\n");
    }
    else
    {
        printf("La %s de %f y %f es: %f \n", text, numUno, numDos, resp);
    }
}

void validateAnswerFactorial(int flagUno, float numUno, float resp)
{
    float diferencia;
    float diferenciaTolerable;

    diferencia = (int)numUno - numUno;
    diferenciaTolerable = 0.00001;

     if(flagUno == 0)
    {
        printf("Debe ingresar operando A para poder realizar la operacion\n");
    }
    else if ((-diferenciaTolerable <= diferencia) && (diferencia <= diferenciaTolerable) && numUno>=0)
    {
        printf("El factorial de %.0f es: %.0f \n", numUno, resp);
    }
    else
    {
        printf("El factorial solo se puede realizar con numeros enteros y no negativos.\n");
    }
}

void validateAnswerDivision(int flagUno, int flagDos, char text[], float numUno, float numDos, float resp)
{
    if(flagUno == 0 || flagDos ==0)
    {
        printf("Debe ingresar ambos operandos para poder realizar la operacion \n");
    }
    else if(numDos ==0)
    {
        printf("El Divisor(operando B) debe ser distinto de 0 para poder dividir \n");
    }
    else
    {
        printf("La %s de %f y %f es: %f \n", text, numUno, numDos, resp);
    }
}

float sumNumbers(float numUno, float numDos)
{
    float sumar;
    sumar = numUno + numDos;
    return sumar;
}

float restNumbers(float numUno, float numDos)
{
    float resta;
    resta = numUno - numDos;
    return resta;
}

float divideNumbers(float numUno, float numDos)
{
    float division;
    division = numUno / numDos;
    return division;
}

float multiplyNumbers(float numUno, float numDos)
{
    float multiplicar;
    multiplicar = numUno * numDos;
    return multiplicar;
}

float factorial(float numUno)
{
    int i;
    float factorialNumero;

    if(numUno ==  1 || numUno == 0)
    {
        return 1;
    }
    else
    {
        for(i=(numUno-1);i>1; i--)
        {
            numUno = numUno*i;
            factorialNumero = numUno;
        }
    }
    return factorialNumero;
}
