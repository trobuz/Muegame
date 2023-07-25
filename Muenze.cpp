#include<iostream>
#include"Muenze.h"
//ermöglicht Zugriff auf Klasse mit ein
using namespace std;

int main()
{
	system("chcp 1252>nul");
	system("echo off");
	system("color 0A");
	system("cls");

	_Muenze _Spiel1;
	//Instanzierung der Klasse

	_Spiel1.set_Anzahl();
	//Aufruf der Münzzahl-Setzung

	_Spiel1.set_Schwierigkeit();
	//Aufruf der Schwierigkeitsgrads-Auswahl

	do
	{
		_Spiel1.set_currSpieler(1);
		//Aufruf der Änderung des aktuellen Spielers
		_Spiel1._ZugMensch();
		//Aufruf des Spieler-Zugs
		if (_Spiel1.get_Anzahl() > 0)
		{
			_Spiel1.set_currSpieler(2);
			//Aufruf der Änderung des aktuellen Spielers
			if (_Spiel1.get_Schwierigkeit() == 1)
				_Spiel1._ZugMaschine_leicht();
				//Aufruf des leichten Maschinen-Zugs
			else
				_Spiel1._ZugMaschine_schwer();
				//Aufruf des schweren Maschinen-Zugs

			//Abfrage des Schwierigkeitsgrades
		}
		//Abfrage nach Gewinn vor Schleifenende

		cout << _Spiel1.get_Anzahl() << " verbleibende Münzen.\n";
		//Ausgabe der verbleibenden Münzen

	} while (_Spiel1.get_Anzahl() > 0);
	//Wiederholung des Spielvorganges bis Sieg erzielt wurde

	_Spiel1._Auswertung();
	//Ausgabe des Gewinners

}