/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>

static const int ESTUDIANTES = 10;
static const int EXAMENES = 3;

LibroCalificaciones::LibroCalificaciones() {}

LibroCalificaciones::LibroCalificaciones(const std::string &nombreCurso, int[][EXAMENES]){
}
    std::string nombreCurso;

    int calificaciones[ESTUDIANTES][EXAMENES];

LibroCalificaciones::obtenerNotaMinima();
LibroCalificaciones::obtenerNotaMaxima();
LibroCalificaciones::obtenerPromedio(const int[], const int);

public:

    LibroCalificaciones();
    LibroCalificaciones(const std::string &nombreCurso, int[][EXAMENES]);

    std::string obtenerReporteNotas();
    std::string obtenerReporteNotasMaxMin();
    std::string getNombreCurso();
    void setNombreCurso(std::string nom);
};


