#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/** \brief Solicita un numero al usuario y devuelve ese numero
 *
 * \param mensaje Es el mensaje a ser mostrado en pantalla
 * \return El numero ingresado por el usuario
 *
 */

float getNum(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f",&numero);
    return numero;
}
/** \brief Valida si se ingresaron los dos numeros A y B, si no es así indica que no se puede realizar la accion,
 *         De haber ingresado los dos numeros imprime la respuesta de la operacion
 * \param flagUno Representa el flag para saber si se ingreso el numero A
 * \param flagDos Representa el flag para saber si se ingreso el numero B
 * \param text Es el texto que se ingresa con la operación que se realizará
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \param resp Es la variable que contiene la respuesta de la operacion
 * \return Devuelve la respuesta con los parametros cambiados en la oracion. Si no se ingresaron numeros aun devuelve
 *         que no se puede realizar la operacion.
 */

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

/** \brief Valida si se ingreso el numeros A si no es así indica que no se puede realizar la accion,
 *         De haber ingresado el numero imprime la respuesta de la operacion
 * \param flagUno Representa el flag para saber si se ingreso el numero A
 * \param numUno Representa el numero A
 * \param resp Representa la variable que contiene el resultado de la operacion
 * \return Devuelve la respuesta con los parametros cambiados en la oracion. Si no se ingreso el numero A aun, devuelve
 *         que no se puede realizar la operacion. Si se ingresa un numero menor a cero indica que no se puede calcular
 */

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

/** \brief Valida si se ingreso el numeros A si no es así indica que no se puede realizar la accion,
 *         De haber ingresado el numero imprime la respuesta de la operacion
 * \param flagUno Representa el flag para saber si se ingreso el numero A
 * \param flagDos Representa el flag para saber si se ingreso el numero B
 * \param text Es el texto que se ingresa con la operación que se realizará
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \param resp Representa la variable que contiene el resultado de la operacion
 * \return  Devuelve la respuesta con los parametros cambiados en la oracion. Si no se ingresaron numeros aun devuelve
 *          que no se puede realizar la operacion. Si se ingresa numero menor a 0 devuelve que no se puede calcular
 */

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

/** \brief Suma dos numeros
 *
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \return Devuelve el resultado de la operacion
 *
 */

float sumNumbers(float numUno, float numDos)
{
    float sumar;
    sumar = numUno + numDos;
    return sumar;
}

/** \brief Resta dos numeros
 *
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \return Devuelve el resultado de la operacion
 *
 */

float restNumbers(float numUno, float numDos)
{
    float resta;
    resta = numUno - numDos;
    return resta;
}

/** \brief Divide dos numeros
 *
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \return Devuelve el resultado de la operacion
 *
 */

float divideNumbers(float numUno, float numDos)
{
    float division;
    division = numUno / numDos;
    return division;
}

/** \brief Multiplica dos numeros
 *
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \return Devuelve el resultado de la operacion
 *
 */

float multiplyNumbers(float numUno, float numDos)
{
    float multiplicar;
    multiplicar = numUno * numDos;
    return multiplicar;
}

/** \brief Calcula el factorial de un numero
 *
 * \param numUno Representa el numero A
 * \return Devuelve el numero factorial, si el numero es 1 o 0 devuelve el numero 1
 *
 */

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
