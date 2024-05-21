#include<iostream>

using namespace std;

class Usuarios {
	
	string nombre;
	int id;
	string contrasena;
	string areaDeTrabajo;
	
	
	
	public:
		
	void setNombre(string _nombre){
		this -> nombre = _nombre;
	}
	
	void setId(int _id){
		this -> id = _id;
	}
	
	void setContrasena(string _contrasena){
		this -> contrasena = _contrasena;
	}
	
	void setAreaDeTrabajo(string _areaDeTrabajo){
		this -> areaDeTrabajo = _areaDeTrabajo;
	}
	
	string getNombre(){
		return nombre;
	}
	
	int getId(){
		return id;
	}
	
	string getAreaDeTrabajo(){
		return areaDeTrabajo;
	}
	
	bool inicioDeSesion(string _contrasena){
		if (this -> contrasena == _contrasena) {
			return true;
		} else {
			return false;
		}
	}
	
};
	


int main(){
	Usuarios caja1;
	
	caja1.setNombre("Ernesto");
	caja1.setContrasena("neto2005");
	caja1.setAreaDeTrabajo("cajero");
	caja1.setId(1);
	
	cout << caja1.inicioDeSesion("neto2005");
	
}