// -*- mode: c++ -*-

#ifndef LED_H_INCLUIDO
#define LED_H_INCLUIDO

// ----------------------------------------------------------
// LED.h
// Leire Villarroya Martínez
// 18/10/2021
// ----------------------------------------------------------

// ----------------------------------------------------------
// ----------------------------------------------------------
void esperar (long tiempo) {
  delay (tiempo);
}

// ----------------------------------------------------------
// ----------------------------------------------------------
class LED {
private:
// Z, T/F -->constructor() -->
  int numeroLED;
  bool encendido;
public:

  // .........................................................
  // .........................................................
  LED (int numero)
	: numeroLED (numero), encendido(false)
  {
	pinMode(numeroLED, OUTPUT);
	apagar ();
  }

  // .........................................................
  // .........................................................
  // enciende el led
  // encender()-->
  void encender () {
	digitalWrite(numeroLED, HIGH); 
	encendido = true;
  }

  // .........................................................
  // .........................................................
  //apaga el led
  // apagar()-->
  void apagar () {
	  digitalWrite(numeroLED, LOW);
	  encendido = false;
  }

  // .........................................................
  // .........................................................
  // led intermitente
  //alternar()-->
  void alternar () {
	if (encendido) {
	  apagar();
	} else {
	  encender ();
	}
  } // ()

  // .........................................................
  // .........................................................
  // brilla el tiempo que le pases
  // N --> brillar() -->
  void brillar (long tiempo) {
	encender ();
	esperar(tiempo); 
	apagar ();
  }
}; // class

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
