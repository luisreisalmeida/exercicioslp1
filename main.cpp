#include "iostream"
#include "retangulo.h"

int main(){
	Retangulo* r = new Retangulo();

	r->setAltura(5);
	r->setLargura(5);

	std::cout << r->area() << std::endl;

	return 0;
}