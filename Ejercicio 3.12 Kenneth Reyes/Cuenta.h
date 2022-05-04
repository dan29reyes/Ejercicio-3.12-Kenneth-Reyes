#pragma once

#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>

class Cuenta{
private:
	int saldo;
	
public:
	Cuenta(int _saldo);
	
	Cuenta abonar(int);
	Cuenta retirar(int);
	void obtenerSaldo();

};

#endif

