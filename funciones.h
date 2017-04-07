#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

float getNum(char mensaje[]);
void validateAnswer(int, int, char text[], float, float, float);
void validateAnswerFactorial(int flagUno, float numUno, float resp);
void validateAnswerDivision(int flagUno, int flagDos, char text[], float numUno, float numDos, float resp);
float sumNumbers(float, float);
float restNumbers(float,float);
float divideNumbers(float, float);
float multiplyNumbers(float, float);
float factorial(float);

#endif // FUNCIONES_H_INCLUDED
