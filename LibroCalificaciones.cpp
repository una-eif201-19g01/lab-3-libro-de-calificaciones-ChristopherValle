/*
 * =====================================================================================
 * 
 * Laboratorio 3 -Libro de Calificaciones-
 * Christopher Valle
 * Universidad Nacional de Costa Rica
 * 
 * =====================================================================================
 */

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>

static const int ESTUDIANTES = 10;
static const int EXAMENES = 3;

LibroCalificaciones::LibroCalificaciones() {
    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
	for (int examen = 0; examen < EXAMENES; examen++) {
            calificaciones[estudiante][examen] = 0;
        }
    }
}
LibroCalificaciones::LibroCalificaciones(const std::string &nombreCurso, int lasCalificaciones[][EXAMENES])
:nombreCurso(nombreCurso) {
	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
        calificaciones[estudiante][examen] = lasCalificaciones[estudiante][examen];
                }
        }
}
int LibroCalificaciones::obtenerNotaMinima(){
    int min = 0;
    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
	for (int examen = 0; examen < EXAMENES; examen++) {
            if(calificaciones[estudiante][examen] < min){
                min = calificaciones[estudiante][examen];
            }
        }
    }
    return min;
}
int LibroCalificaciones::obtenerNotaMaxima(){
    int max = 0;
    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
	for (int examen = 0; examen < EXAMENES; examen++) {
            if(calificaciones[estudiante][examen] > max){
                max = calificaciones[estudiante][examen];
            }
        }
    }
    return max;
}
double LibroCalificaciones::obtenerPromedio(const int[], const int est){
    int prom = 0;
    for (int examen = 0; examen < EXAMENES; examen++) {
            prom += calificaciones[est][examen];
    }
    return prom / 3;
}

std::string LibroCalificaciones::obtenerReporteNotas(){
    std::string reporte = "\n Notas del curso [Curso Progra I]: \n\t\tExamen 1\tExamen 2\tExamen 3\tPromedio";
    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
        reporte = reporte + "\nEstudiante[" + std::to_string(estudiante + 1) + "]:\t";
	for (int examen = 0; examen < EXAMENES; examen++) {
            reporte = reporte + std::to_string(calificaciones[estudiante][examen]) + "\t\t";
        }
        reporte = reporte + std::to_string(obtenerPromedio([][estudiante]));
    }
return reporte;
}
    
std::string LibroCalificaciones::obtenerReporteNotasMaxMin(){
    int maxima = LibroCalificaciones::obtenerNotaMaxima();
    int minima  = LibroCalificaciones::obtenerNotaMinima();
    std::string notas = "\nLa nota mínima es:\t[" + std::to_string(maxima) + "]\n" + "La nota máxima es:\t[" + std::to_string(minima) + "]\n";
}

std::string LibroCalificaciones::getNombreCurso(){
    return nombreCurso;
}

void LibroCalificaciones::setNombreCurso(std::string nombre){
    nombreCurso = nombre;
}
