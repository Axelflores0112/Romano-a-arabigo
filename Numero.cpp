#include <iostream>
#include"Numero.h"
using namespace std;
int main() {

	Numero* n1[1];
	n1[0] = new Numero(0);
	n1[0]->convertidor();

	return 0;
}
