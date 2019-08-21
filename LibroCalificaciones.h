/*
 * =====================================================================================
 *
 * Laboratorio 3 -Libro de Calificaciones-
 * Christopher Valle
 * Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>
static const int ESTUDIANTES = 10;
static const int EXAMENES = 3;

class LibroCalificaciones {
private:
    std::string nombreCurso;

    int calificaciones[ESTUDIANTES][EXAMENES];

    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    double obtenerPromedio(const int[], const int);

public:

    LibroCalificaciones();
    LibroCalificaciones(const std::string &nombreCurso, int[][EXAMENES]);

    std::string obtenerReporteNotas();
    std::string obtenerReporteNotasMaxMin();
    std::string getNombreCurso();
    void setNombreCurso(std::string nom);
};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
