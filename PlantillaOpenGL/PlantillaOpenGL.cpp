// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
/*#include <conio.h>*/

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <iostream>

using namespace std;



int main()
{
	/*Crear un contexto 

	°Un contexto es una ventana de un sistema operativo
	°OpenGL no gestiona el iso de ventanas*/

	//Declaramos un aputador de ventana.

	GLFWwindow *window;
	// Si no se pudo iniciar glfw terminamos ejecución
	if (!glfwInit()) {

	}

	
	return 0;
}

