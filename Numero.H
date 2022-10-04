#include<iostream>
#include<string.h>
#include <cstring>
using namespace std;
class Numero {
private:
	int digito=0;
public:
	Numero(int);
	~Numero();
	void convertidor();

};

Numero::Numero(int _digito) {
	digito = _digito;

};
Numero::~Numero(){}

int conversionxd(char xd) {
	int valor = 0;
	switch (xd) {
	case 'I':
		valor = 1;
		break;
	case 'V':
		valor = 5;
		break;
	case 'X':
		valor = 10;
		break;
	case 'L':
		valor = 50;
		break;
	case 'C':
		valor = 100;
		break;
	case 'D':
		valor = 500;
		break;
	case 'M':
		valor = 1000;
		break;
	}
	return valor;
}
void Numero::convertidor() {
	int i = 0,opc;
	char romanoxd[50];
	do {
		cout << "Escriba el numero a convertir: " << endl;
		cin >> romanoxd;
		//saber si el numero es valido
		while (romanoxd[i]) {
			if (conversionxd(romanoxd[i] < 0)) {
				cout << "numero invalido" << endl;
			}
			if ((strlen(romanoxd) - i) > 2) {
				if (conversionxd(romanoxd[i]) < conversionxd(romanoxd[i + 2])) {
					cout << "numero invalido" << endl;
				}
			}
			if (conversionxd(romanoxd[i]) >= conversionxd(romanoxd[i + 1])) {
				digito = digito + conversionxd(romanoxd[i]);
			}
			else {
				digito = digito + conversionxd(romanoxd[i + 1]) - conversionxd(romanoxd[i]);
				i++;
			}
			i++;

		}
		cout << "numero convertido: " << digito << endl;
		cout << "volver a convertir?" << endl;
		cout << "1.SI" << endl;
		cout << "0.NO" << endl;
		cin >> opc;
	} while (opc != 0);
	
	



}
