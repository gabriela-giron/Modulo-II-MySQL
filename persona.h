#pragma once
#include<iostream>
#include<string>

using namespace std;

class persona
{
protected: string nombres, apellidos, direccion, fecha_nacimiento;
		 int telefono = 0;
		 
protected:
	Persona() {
	}
	Persona(string nom, string ape, string dir, int tel, string fn) {
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
	}

};

