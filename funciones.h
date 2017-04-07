#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Solicita un numero al usuario y devuelve ese numero
 *
 * \param mensaje Es el mensaje a ser mostrado en pantalla
 * \return El numero ingresado por el usuario
 *
 */
float getNum(char mensaje[]);

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
void validateAnswer(int, int, char text[], float, float, float);

/** \brief Valida si se ingreso el numeros A si no es así indica que no se puede realizar la accion,
 *         De haber ingresado el numero imprime la respuesta de la operacion
 * \param flagUno Representa el flag para saber si se ingreso el numero A
 * \param numUno Representa el numero A
 * \param resp Representa la variable que contiene el resultado de la operacion
 * \return Devuelve la respuesta con los parametros cambiados en la oracion. Si no se ingreso el numero A aun, devuelve
 *         que no se puede realizar la operacion. Si se ingresa un numero menor a cero indica que no se puede calcular
 */
void validateAnswerFactorial(int flagUno, float numUno, float resp);

/** \brief Valida si se ingresaron los dos numeros A y B, si no es así indica que no se puede realizar la accion,
 *         De haber ingresado los dos numeros imprime la respuesta de la operacion.
 * \param flagUno Representa el flag para saber si se ingreso el numero A
 * \param flagDos Representa el flag para saber si se ingreso el numero B
 * \param text Es el texto que se ingresa con la operación que se realizará
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \param resp Representa la variable que contiene el resultado de la operacion
 * \return  Devuelve la respuesta con los parametros cambiados en la oracion. Si no se ingresaron numeros aun devuelve
 *          que no se puede realizar la operacion. Si se ingresa numero menor a 0 devuelve que no se puede calcular
 */
void validateAnswerDivision(int flagUno, int flagDos, char text[], float numUno, float numDos, float resp);

/** \brief Suma dos numeros
 *
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \return Devuelve el resultado de la operacion
 *
 */
float sumNumbers(float, float);

/** \brief Resta dos numeros
 *
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \return Devuelve el resultado de la operacion
 *
 */
float restNumbers(float,float);

/** \brief Divide dos numeros
 *
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \return Devuelve el resultado de la operacion
 *
 */
float divideNumbers(float, float);

/** \brief Multiplica dos numeros
 *
 * \param numUno Representa el numero A
 * \param numDos Representa el numero B
 * \return Devuelve el resultado de la operacion
 *
 */
float multiplyNumbers(float, float);


/** \brief Calcula el factorial de un numero
 *
 * \param numUno Representa el numero A
 * \return Devuelve el numero factorial, si el numero es 1 o 0 devuelve el numero 1
 *
 */
float factorial(float);

#endif // FUNCIONES_H_INCLUDED
