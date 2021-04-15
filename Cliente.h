#pragma once
#include "persona.h"
#include "Persona.cpp"
#include<iostream>
#include<string>

using namespace std;

class Cliente :
    public persona
{
	/ atributos
private: string nit;
	//constructor
public:
	Cliente() {
	}
	Cliente(string nom, string ape, string dir, int tel, string fn, string n) : Persona(nom, ape, dir, tel, fn) {
		//envia las variables para ya no volver a nombrarlas
		nit = n;
	}
	//metodo set
	void setNit(string n) { nit = n; }
	void setNombres(string nom) { nombres = nom; }
	void setApellidos(string ape) { apellidos = ape; }
	void setDireccion(string dir) { direccion = dir; }
	void setTelefono(int tel) { telefono = tel; }
	//metodo get
	string getNit() { return nit; }
	string getNombres() { return nombres; }
	string getApellidos() { return apellidos; }
	string getDireccion() { return direccion; }
	int getTelefono() { return telefono; }
	//metodo
	void mostrar() {
		cout << "___________________________________________________________________________" << endl;
		cout << nit << "," << nombres << "," << apellidos << "," << direccion << "," << telefono << endl;
	}
};

