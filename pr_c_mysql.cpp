// pr_c_mysql.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Cliente.h"
#include <iostream>
using namespace  std;

int main()
{
	
	string nit,nombres, apellidos, direccion,fecha_nacimiento ;
	int telefono=0,id=0;
	Cliente c = Cliente();
	c.leer();
	cout << "Ingrese ID:";
	cin >> id;
	cin.ignore();
	cout << "Ingrese Nit:";
	getline(cin, nit);
	cout << "Ingrese Nombres:";
	getline(cin, nombres);
	cout << "Ingrese Apellidos:";
	getline(cin, apellidos);
	cout << "Ingrese Direccion:";
	getline(cin, direccion);
	cout << "Ingrese Telefono:";
	cin>>telefono;
	cin.ignore();
	cout << "Fecha Nacimiento:";
	cin>>fecha_nacimiento;
	c = Cliente(nombres, apellidos, direccion,telefono, fecha_nacimiento,nit,id);
	c.actualizar();
	c.leer(); 
	cout << "Ingrese ID:";
	cin >> id;
	c.setId(id);
	c.borrar();
	c.leer();

	system("pause");
	return 0;

}