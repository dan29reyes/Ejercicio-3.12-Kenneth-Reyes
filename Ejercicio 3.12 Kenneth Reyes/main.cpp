#include <conio.h>
#include "Cuenta.h"
#include <iostream>

using std::cout;

int main() {
	cout << "Movimientos de Dan\n";
	Cuenta dan(500);
	dan.obtenerSaldo();
	dan.abonar(200);
	dan.obtenerSaldo();
	dan.retirar(900);
	dan.obtenerSaldo();

	cout << "\nMovimientos de Juan\n";
	Cuenta juan(100);
	juan.obtenerSaldo();
	juan.retirar(25);
	juan.obtenerSaldo();
	juan.abonar(650);
	juan.obtenerSaldo();

	cout << "\nCuenta de Ana con valor negativo\n";
	Cuenta ana(-100);
	ana.obtenerSaldo();
	ana.abonar(365);
	ana.retirar(180);
	ana.obtenerSaldo();

	_getch();
}