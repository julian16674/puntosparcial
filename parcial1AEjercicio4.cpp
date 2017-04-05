/*
 * Realizado por: Diego F Gonzalez Rojas, Julian Ruiz, Julian Rico Millan
 * Archivo: parcial1AEjercicio4.cpp
 * Descripcion: Funciones para agrgar-producto y venta
 * Fecha: 5 Abril 2017
*/

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

//FUNCION PARA AGREGAR UN PRODUCTO AL INVENTARIO Ó SUMARLE LA CANTIDAD A UNO EXISTENTE
void agregarProducto(string producto,double cantidad, map<string,double>&inventario)
{
	for (map <string,double>:: iterator it= inventario.begin(); it!= inventario.end(); ++it)
	{
		if(producto == it->first)
		{
			inventario[producto] = cantidad+it->second;
		}
		
		else
		{
			inventario[producto] = cantidad-cantidad;
		}
	}
}

//FUNCION PARA REALIZAR UNA VENTA, AGRAGANDOLA AL HISTORIAL Y RESTANDO ÉSTA A LA CANTIDAD DE DICHO PRODUCTO EN EL INVENTARIO
void venta(string producto,double cantidad, map<string,double>&inventario, map<string, double>&historialVentas)
{
	for (map <string,double>:: iterator it= inventario.begin(); it!= inventario.end(); ++it)
	{
		if(producto == it->first &&  cantidad <= it->second)
		{
			historialVentas[producto] = cantidad; 
			inventario[producto] = it->second-cantidad;
		}
		
		else
		{
			cout<< "Error!"<< endl;
		}
	}
}



int main()
{
	// VARIABLE USADA PARA ELEGIR ENTRE REALIZAR UNA VENTA Ó HACER UN REGISTRO (2 Ó 1)
	int eleccion = 0;
	
	//VARIABLES USARDAS PARA EL CODIGO DEL PRODUCTO Y CANTIDAD
	string productoX;
	double cantidadX;
	 
	//ESTRUCTURA DE DATOS DEL INVENTARIO CON UN EJEMPLO
	map<string,double>inventario;
	inventario["2A6B"] = 50;
	
	//ESTRUCTURA DE DATOS DEL HISTORIAL DE VENTAS CON UN EJEMPLO	
	map<string,double>historialVentas;
	historialVentas["3G0R"] = 100;
	
	
	cout<<"Ingrese 1 si es un REGISTRO DE PRODUCTO ó 2 si es una VENTA"<<endl;
	cin>> eleccion;
	
	//CONDICIÓN PARA ELEGIR ENTRE REGISTRO EN INVENTARIO O HISTORIAL DE VENTA
	if(eleccion == 1)
	{
				
		//Aqui se piden los datos para agregar un producto
		cout<< "Ingrese un producto: "<< endl;
		cin>>productoX;
		
		cout << "Ingrese la cantidad del producto: "<<endl;
		cin>>cantidadX;
	
		agregarProducto(productoX,cantidadX,inventario);
		
		for (map <string,double>:: iterator it= inventario.begin(); it!= inventario.end(); ++it)
		{
			cout<< "Codigo: "<< it -> first << " Cantidad: " << it -> second <<endl;  
		}
	}
	else if(eleccion == 2)
	{	
		
		//Aqui se piden los datos para realizar una venta
		cout<< "Ingrese un producto: "<< endl;
		cin>>productoX;
			
		cout << "Ingrese la cantidad del producto: "<<endl;
		cin>>cantidadX;
		
		venta(productoX,cantidadX,inventario, historialVentas);
	
		for (map <string,double>:: iterator it= historialVentas.begin(); it!= historialVentas.end(); ++it)
		{
			cout<< "Codigo: "<< it -> first << " Cantidad: " << it -> second <<endl;  
		}
		
		for (map <string,double>:: iterator it= inventario.begin(); it!= inventario.end(); ++it)
		{
			cout<<"inventario \nCodigo: "<< it -> first << " Cantidad: " << it -> second <<endl;  
		}
	}
	else
	{
		cout<<"El numero es incorrecto"<<endl;
	}
	
	
}


