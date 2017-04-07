/*
 * Autor: Julian Ruiz Lozano, Julian Rico Millan, Diego Gonzázlez Rojas
 * Descripción: 
 * Fecha: Abril 7 2017
 * 
 */
 
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	string c = "";
	
	cout << "Ingrese el numero a convertir" <<endl;
	cin >> n;
	
    a = n;
    
    while(a!=1 and a!=0){
		
		b = a%2;
		
		if(b == 1){
			c = "1" + c; 
			}
			
			else{
				 c = "0" + c;
				}
		a = a/2;
		
		}
		
	if( b == 1){
		
	  c = "1" + c; 
		 
		  }
		  
		  else{
			c = "0" + c;
				}
			
			cout << "se escribe: " << c << endl;
			
		return 0;
}
	 
	
	

