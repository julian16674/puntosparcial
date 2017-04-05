/*
 * realizado por: Julian Rico Millan, Diego F Gonzales Rojas, Julian Ruiz
 * archivo: parcialEjercicio5.cpp parcial B
 * descripcion: funcion  que reciba  tres numeros  enteros, y retorna un valor.
 * fecha: 5 de abril 2017
*/

#include <iostream>
using namespace std;

int a;
int b;
int c;

int main(){
	
	cout << "ingrese a" << endl;
	cin >> a;
	cout << "ingrese b" <<endl;
	cin >> b; 
	cout << "ingrese c" <<endl;
	cin >> c;
	
	if(a > 0 and b > 0){
		cout << 2*c << endl;}
		
		else if( a < 0){
			
			if(b < -5 or b > 5){
				cout << c*3 << endl;}
					
					else if(a <= 5 and b > 5){
						cout<< c*5 <<endl;}
						
						else cout << 4*c <<endl;}
						
							else if ((b = 0) and (a > 0)){
								cout<< 5*c <<endl;}
									
									else cout<< c<< endl;}
