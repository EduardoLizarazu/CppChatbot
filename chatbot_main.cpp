 
#include<iostream>
#include<conio.h>
#include<string.h>
#include <vector>
using namespace std;
#define t 4

vector<string> separar(string str);
void tiendas();
void cines();
void comidas();

int main(){
    string chatU;
    vector<string> palabra;

    string tienda[t] = {"Tiendas", "tiendas","Tienda", "tienda"};
    string cine[t] = {"Cines", "cines","Cine", "cine"};
    string comida[t] = {"Comidas", "comidas","Comida", "comida"};
    cout<<"Hola, soy un bot que te indicara la ubicacion de tiendas, cines, patio de comidas"<<"\n"<<"¿En que puedo ayudarle?";
    getline(cin, chatU); // Entrada
    
    while((chatU != "salir") && (chatU != "Salir")){	
    	palabra = separar(chatU);
    	for(int i = 0; i < palabra.size(); i++){
        	for(int p=0; p < t; p++){
        		if(palabra[i] == tienda[p]){	
    				tiendas(); 
				} else if (palabra[i] == cine[p]){
					cines();				
				} else if(palabra[i] == comida[p]){
					comidas();
				}			
			} 	
    	}
    	// Salida
    	cout<<"\n\nEn que otra cosa puedo ayudarte? ";
    	getline(cin, chatU);
	}
	cout<<"Fin del programa!";
	getch();
	return 0;
}


// Separ las palabra y metarlas en un vector con push (inspirada en python)
vector<string> separar(string str) {
    char cortar = ' ';
    int posInicial = 0;
    int posEncontrada = 0;
    string separado;
    vector<string> palabras;
    
    while(posEncontrada >= 0){
    	// Es justo donde lo encuetra
        posEncontrada = str.find(cortar, posInicial); // 5
        // No altera la cadena introducida, CREA UNA NUEVA -1
        separado = str.substr(posInicial, posEncontrada - posInicial); // (0, 5-0 = 5); 
        posInicial = posEncontrada + 1;
        palabras.push_back(separado);
    }
    return palabras;
}

void tiendas(){
	string nombreTiendas[4][2] = {
		{"Tienda-1 =", " Ubicacion-1"},
		{"Tienda-2 =", " Ubicacion-2"},
		{"Tienda-3 =", " Ubicacion-3"},
		{"Tienda-4 =", " Ubicacion-4"}
	};
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++){
			cout<<nombreTiendas[i][j];
		}
		cout<<"\n";
	}
}

void cines(){
	string nombreCines[2][2] = {
		{"Cine-1 =", " Ubicacion-1"},
		{"Cine-2 =", " Ubicacion-2"}
	};
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<nombreCines[i][j];
		}
		cout<<"\n";
	}
}
void comidas(){
	string nombreComida[4][2] = {
		{"Patio-1 =", " Ubicacion-1"},
		{"Patio-2 =", " Ubicacion-2"},
		{"Patio-3 =", " Ubicacion-3"},
		{"Patio-4 =", " Ubicacion-4"}
	};
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++){
			cout<<nombreComida[i][j];
		}
		cout<<"\n";
	}
}







