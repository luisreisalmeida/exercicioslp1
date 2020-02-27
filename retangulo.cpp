#include "retangulo.h"

int Retangulo::area(){
	return largura * altura;
}

int Retangulo::perimetro(){
	return (2 * largura + 2 * altura);
}

int Retangulo::getAltura(){

	return altura;
};

int Retangulo::getLargura(){
	return largura;
};

void Retangulo::setAltura(int a){
	altura = a;
};

void Retangulo::setLargura(int l){
	largura = l;
};