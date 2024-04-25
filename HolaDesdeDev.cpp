#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int nFuerzas;
	double x = 0 , y = 0 , magnitud = 0 , direccionGrados = 0 , fx = 0, fy = 0, direccionRad = 0 , magnitudResultado = 0;
	
	
	cout << "Ingresa el numero de fuerzas" << endl;
	cin >> nFuerzas;
	for (int i = 0; i < nFuerzas; i++){
		cout << "Ingresa la magnitud de la fuerza " << i+1 << " " << endl;
		cin >> magnitud;
		cout << "Ingresa la direccion de la fuerza " << i+1 << " " << endl;
		cin >> direccionGrados;
		
		direccionRad = direccionGrados * (M_PI / 180);
		
		fx += magnitud * cos(direccionRad);
		fy += magnitud * sin(direccionRad);
		
	}
	
	magnitudResultado = sqrt((fx*fx) + (fy*fy));
	
	
	cout << "Suma de las " << nFuerzas << "fuerzas es de: " << magnitudResultado;
}