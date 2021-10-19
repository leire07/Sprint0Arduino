// -*- mode: c++ -*-

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// ------------------------------------------------------
// Medidor.h
// Leire Villarroya Martínez
// 18/10/2021
// ------------------------------------------------------
class Medidor {

  // .....................................................
  // .....................................................
private:

public:

  // .....................................................
  // constructor
  // .....................................................
  Medidor(  ) {
  } // ()

  // .....................................................
  // .....................................................
  // inicia el medidor
  // iniciarMedidor() -->
  void iniciarMedidor() {
	// las cosas que no se puedan hacer en el constructor, if any
  } // ()

  // .....................................................
  // .....................................................
  // te devuelve el CO2 medido
  // medirCO2()--> N
  int medirCO2() {
	return 235;
  } // ()

  // .....................................................
  // .....................................................
  // te devuelve la temperatura medida
  // medirTemperatura() --> N
  int medirTemperatura() {
	return -12; // qué frío !
  } // ()
	
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
