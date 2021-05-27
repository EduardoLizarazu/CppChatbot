
#include<iostream>
#include<conio.h>
#include<string.h>
#include <vector>
using namespace std;
#define t 4

vector<string> separar(string str);
void tiendas();
void cines();

int main(){
    string chatU;
    vector<string> palabra;

    string tienda[t] = {"Tiendas", "tiendas","Tienda", "tienda"};
    string cine[t] = {"Cines", "cines","Ciene", "Cine"};
    
    cout<<"Hola, en que puedo ayudarte? ";
    getline(cin, chatU); // Entrada
    
    while((chatU != "salir") && (chatU != "Salir")){
    	
    	palabra = separar(chatU);
    
    	for(int i = 0; i < palabra.size(); i++){
        	for(int p=0; p < t; p++){
        		if(palabra[i] == tienda[p]){	
    				tiendas(); 
				} else if (palabra[i] == cine[p]){
					cines();
					
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


// Separ las palabra y metarlas en un vector
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
	string nombreTiendas[3][2] = {
		{"Tienda-1 =", " Ubicacion-1"},
		{"Tienda-2 =", " Ubicacion-2"},
		{"Tienda-3 =", " Ubicacion-3"}
	};
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout<<nombreTiendas[i][j];f
		}
		cout<<"\n";
	}
}
void cines(){
	cout<<"Informacion sobre cines"<<endl;
}






