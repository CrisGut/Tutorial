#include <stdio.h>
#include <stdlib.h>

/** \brief validamos si el entero esta dentro del rango 1-7
 *
 * \param opcion a validar
 * \return retorna 1 si esta dentro del rango , 0 si esta fuera del rango.
 *
 */
 int validarRango(int x, int inf, int sup)
 {
     int valido;
     if (x >= inf && x <= sup)
        {
          valido = 1;
        }
     else
        {
          valido = 0;
        }
     return valido;
 }


/** \brief operacion de la suma.
 *
 * \param primer eentero o decimal a sumar.
 * \param segundo entero o decimal a sumar.
 * \return resultado de la suma.
 *
 */
 float sumar(int num1, int num2)
 {
     return (num1 + num2);
 }

/** \brief realizamos la operacion de la resta.
 *
 * \param primer entero o decimal a restar.
 * \param segundo entero o decimal a restar.
 * \return resultado de la resta.
 *
 */
 float restar(int num1, int num2)
 {
     return num1 - num2;
 }

/** \brief realizamos la operacion de la multiplicacion
 *
 * \param primer entero o decimal a multiplicar
 * \param segundo entero o decimal a multiplicar
 * \return resultado de la multiplicacion
 *
 */
 float multiplicar(int num1, int num2)
 {
     return num1 * num2;
 }

/** \brief realizamos la operacion del factorial
 *
 * \param entero o decimal a factorizar
 * \return resultado del factorial del entero
 *
 */
 float factorial(int num1)
 {
     int rta;
     if (num1 > 0)
     {
          if (num1 == 1)
            { rta = 1;}
          else
            { rta = num1 * factorial( num1 - 1);}
     }
    if (num1 == 0)
        { rta = 1;}
     return rta;
 }

/** \brief realizamos la operacion de la division
 *
 * \param entero o decimal dividiendo
 * \param entero divisor en main !=0.
 * \return resultado de la division
 *
 */
 float division(int num1,int num2)
{

        return ((float)num1/num2);
}
