#include <iostream>
#include <fstream>
#include "Entrenador.h"
#include "Pokebola.h"
#include <string>
using namespace std;

const int CANT = 15;
//Función para agregar a una lista los pokemones en el doc
void pokemonDisponible(Pokemon poke[],int &cantidad){
    string tipo, nombre;
    int nivel;
    cantidad = 0;
    ifstream archivo;
    archivo.open("Pokemon.txt");
    while(archivo >> nombre >> tipo >> nivel ){
        poke[cantidad].setNombre(nombre);
        poke[cantidad].setTipo(tipo);
        poke[cantidad].setNivel(nivel);
        cantidad++;
    }
    archivo.close();
}

Entrenador registrarEntrenador(){
    int opcion = 0;
    cout << "---------------------" << endl;
    cout << "------BIENVENIDO-----" << endl;
    do {
        cout << "Presiona 1) para registrarte como entrenador o  2) para entrar como invitado" << endl;
        cin >> opcion;
        if (opcion != 1 || opcion !=2){
            cout << "Opcion ingresada invalida" << endl;
        }
    } while (opcion != 1 || opcion !=2);
    if (opcion==1){
        string nombre;
        int experiencia, medallas;
        cout << "Ingresa tu nombre: ";
	    cin >> nombre;
	    cout << "Ingresa tus años de experiencia: ";
	    cin >> experiencia;
	    cout << "Ingresa la cantidad de medalas que posees: ";
	    cin >> medallas; 
    } else {
        Entrenador entrenador; 
    }  
}
int habilidades(){
    int validacionPokemon;
    int opcion;
    do{
        cout << "Do you want to use your pokemon?\n1) Yes :D\n2) No >:(";
        cin >> validacionPokemon;
        if (validacionPokemon != 1 && validacionPokemon!= 2){
            cout << "Please choose beetwen 1 and 2")
            }
        }
    while(validacionPokemon != 1 && validacionPokemon!= 2)
    if (validacionPokemon == 1){
        do {
        cout << "Wich hability you want to use:\n1)Punch\n2)Special Hability\n3)Acumulated Power\n4)Overkill";
        cin >> opcion; 
        if (opcion <= 0 && opcion > 4){
            cout << "There are only 4 habilities";
        }
        }
        while(opcion <= 0 && opcion > 4);
         return opcion;
}
int main() {
    string nombrePoke;
   
    Entrenador entrenador(nombre, experiencia, medallas,rango);
	entrenador.imprime();
    pokemonDisponible();
    Pokemon pokemon(nombrePoke, tipo, nivel,habilidades);
	pokemon.imprime();
}



