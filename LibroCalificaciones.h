/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
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


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>

class LibroCalificaciones {
private:
    static int ESTUDIANTES;
    static int EXAMENES;
    std::string nombreCurso;
    int calificaciones[ESTUDIANTES][EXAMENES];
public:
    
    LibroCalificaciones();
    LibroCalificaciones(const std::string &nombreCurso, int[][]);
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    double obtenerPromedio(const int[], const int);
    std::string obtenerReporteNotas();
    std::string obtenerReporteNotasMaxMin();
    std::string getNombreCurso();
    void setNombreCurso();
};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
