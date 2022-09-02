#include <stdio.h>
#include <stdlib.h>
//define PI 3.1415926535897
#ifdef PI
#define area(r) (PI*r*r)
#endif
/*
* Este es un programa de prueba, para verificar
* el funcionamiento del sistema de procesamiento de lenguaje
*/
int main(void){
	printf("Hola mundo!\n"); // Función para imprimir hola mundo.
	float mi_area=area(3);   // soy un comentario ...
	printf("Resultado: %f\n", mi_area);
	return 0;
	}