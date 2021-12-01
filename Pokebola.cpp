#include <iostream>
#include "Pokebola.h"
#include <string>

Pokebola::Pokebola(){
    tipo = "Pokebola";
    pokemon = Pokemon();
}

Pokebola::Pokebola(std::string _tipo, Pokemon _pokemon){
    tipo = _tipo;
    pokemon = _pokemon;
}

std::string Pokebola::getTipo() const{
    return tipo;
}

Pokemon Pokebola::getPokemon() const{
    return pokemon;
}

void Pokebola::setTipo(std::string _tipo){
    tipo = _tipo;
}

//void Pokebola::setPokemon(Pokemon _pokemon){
 //   pokemon = _pokemon;
//}

int Pokebola::atrapar(Pokemon pok){
    if(ocupada == false){
        pokemon = pok;
        ocupada = true;
        return 1;
    }
    return 0;
}

int Pokebola::liberar(){
     if(ocupada == true){
        Pokemon p;
        pokemon = p;
        ocupada = false;
        return 1;
    }
    return 0;
}

void Pokebola::imprime(){
    Pokebola pokebola(tipo, pokemon);
    std::cout << "---------------------" << std::endl;
    std::cout << "-------POKEBOLA------" << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    if (ocupada == true){
        std::cout << "Contiene Pokemon: ";
        pokemon.imprime();
    } else {
        std::cout << "Pokebola vacia" << std::endl;
    }
    std::cout << "---------------------" << std::endl;
}




