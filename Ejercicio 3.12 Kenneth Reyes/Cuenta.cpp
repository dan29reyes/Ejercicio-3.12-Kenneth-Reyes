#include "Cuenta.h"
#include <iostream>

using std::cout;

Cuenta::Cuenta(int _saldo) : saldo(_saldo) {
	if (_saldo < 0) {
		cout << "El monto inicial es invalido!\n";
		saldo = 0;
	}
}

Cuenta Cuenta::abonar(int monto){
	if (monto > 0) {
		cout << "Se ha abonado " << monto << " Lps.\n";
		return Cuenta(saldo += monto);
	}
	else {
		cout << "El monto debe ser mayor a 0 para abonar\n";
		return NULL;
	}
}

Cuenta Cuenta::retirar(int monto) {
	if (monto < saldo) {
		cout << "Se ha retirado " << monto << " Lps. de su cuenta\n";
		return Cuenta(saldo -= monto);
	}
	else {
		cout << "No tiene fondos suficientes!\n";
		return NULL;
	}
}

void Cuenta::obtenerSaldo() {
	cout << "Saldo disponible: " << saldo << " Lps.\n";
}
