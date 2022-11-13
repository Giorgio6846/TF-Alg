#pragma once
#include "Caracter.h"

class Jugador : public Caracter
{
public:
	Jugador() {

		x = 10;
		y = 50;

		opcionCaracterHeight = 3 * (rand() % 3);
		opcionCaracterWidth = 4 * (rand() % 2);

		EntidadAreaIzqSupX = 40;
		EntidadAreaIzqSupY = 30;
		EntidadAreaDerInfX = 915;
		EntidadAreaDerInfY = 135;
	};
	~Jugador(){}

   	virtual Rectangle getRectangle() { return Rectangle(x + 6, y, DimensionWidth - 12, DimensionHeight); }

	int getIndexWidth() { return this->indexWidth - opcionCaracterWidth; }

	int getMunicion() { return this->municion; }
	void setMunicion(int municion) { this->municion = municion; }

	void mostrarMunicion(Graphics ^ gr)
	{
		Font^ myFont = gcnew Font("Times new Roman", 15);
		gr->DrawString("Vacunas Restantes " + municion, myFont, Brushes::Black, 960,100);
	}

	void mostrarMensajeHabilidad(Graphics^ gr) {
		Font^ myFont = gcnew Font("Times new Roman", 15);

		gr->DrawString("Aliado 1: X", myFont, Brushes::Black, 960, 130);
		gr->DrawString("Aliado 2: Z", myFont, Brushes::Black, 960, 150);
	}


	/*
	void atShop(Graphics^ gr, SoundPlayer ^ player) {
		
		Font^ myFont = gcnew Font("Times new Roman", 15);
	
		
			gr->DrawString("Est�s en la tienda:", myFont, Brushes::Black, 670, 35);
			gr->DrawString("Pulse X para comprar munici�n", myFont, Brushes::Black, 600, 60);
			

			if (y >= 50 && x >= 830) y = 55;
			else if (x >= 820 && y <= 56) x = 819;
	
		
			if (jugadorAtStore == 0)
			{
				jugadorAtStore = 1;
				player->Load();
				player->PlaySync();
			}
			else jugadorAtStore == 0;
	}
	*/
	
private: 
	int municion;

};
