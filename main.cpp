/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Permite mostrar las calificaciones de un curso
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#include <iostream>
#include "LibroCalificaciones.h"

    
int main() {
    static const int ESTUDIANTES = 10;
    static const int EXAMENES = 3;
    int listaCalificaciones[ESTUDIANTES][EXAMENES] = ((80, 92, 75), (98, 88, 90), (94, 100, 90), (100, 70, 84), (85, 89, 100), (65, 72, 98), (100, 98, 90), (77, 67, 98), (59, 98, 78), (88, 79, 67));

    LibroCalificaciones libroCalificaciones("Curso Programa I", listaCalificaciones);

    std::cout << libroCalificaciones.obtenerReporteNotas() << std::endl;
    std::cout << libroCalificaciones.obtenerReporteNotasMaxMin() << std::endl;
}