#include<iostream>

using namespace std;
int main(){
	
int cantidadProducto = 0 , totalProducto = 0, codigoDeProducto = 0;
double subtotal = 0, total = 0 , precio = 0; 
const double iva = 0.16;

do 
{
	cout << "Ingresa el codigo del producto: ";
	cin >> codigoDeProducto;
	
	if (codigoDeProducto == 0){
		break;
	}
	
	cout << "Ingrese la cantidad de productos a comprar: ";
	cin >> cantidadProducto;
	
	cout << "Ingrese el precio del producto: ";
	cin >> precio;
	
	totalProducto += cantidadProducto;
	subtotal += precio * cantidadProducto;
} while (codigoDeProducto != 0);

total = subtotal + (subtotal * iva);

cout << "El subtotal de su cuenta es de: " << subtotal << endl;
cout << "El total de productos comprados es de: " << totalProducto << endl;
cout << "El total de la cuenta es de: " << total << endl;

}