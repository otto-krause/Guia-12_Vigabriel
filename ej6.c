#include <stdio.h>
#include <stdlib.h>

flotar calculo (flotar a)
{
    return a / 8;
}

vacío principal()
{
    flotar a, resultado;
    printf ("ingrese el número cuya octava parte desea conocer \ n");
    scanf ("% f", & a);
    resultado = cálculo (a);
    printf ("la octava parte del número introducido es% f", resultado);
