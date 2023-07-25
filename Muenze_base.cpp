#include<iostream>
#include"Muenze.h"
//ermöglicht Zugriff auf Klasse mit ein
#include <cstdlib>
#include <stdlib.h>
//Einbindung rand und srand
using namespace std;

	void _Muenze::set_currSpieler(int _Spieler)
	{
		_currSpieler = _Spieler;
	}
	//setzt aktuellen Spieler

	int _Muenze::get_currSpieler()
	{
		return _currSpieler;
	}
	//liest aktuellen Spieler

	void _Muenze::set_Schwierigkeit()
	{
		int _Eingabe = 0;
		cout << "Klicken Sie 1, um gegen den leichten Gegner zu Spielen und 2, um gegen den Schwierigen anzutreten.\n";
		do
		{
			cin >> _Eingabe;
		} while (_Eingabe != 1 and _Eingabe != 2);
		//Prüft auf gültige Eingaben

		_Schwierigkeit = _Eingabe;
	};
	//setzt Schwierigkeitsgrad

	int _Muenze::get_Schwierigkeit()
	{
		return _Schwierigkeit;
	};
	//liest aktuellen Schwierigkeitsgrad 

	void _Muenze::set_Anzahl()
	{
		int _Eingabe = 0;
		cout << "Bitte geben sie die Anzahl der Münzen an.\n";
		cin >> _Eingabe;
		_Anzahl = _Eingabe;
	}
	//setzt die Anzahl der Münzen, nur bei Beginn des Spiels

	void _Muenze::_Abzug(int _Abzug)
	{
		_Anzahl = _Anzahl - _Abzug;
	}
	//zieht gezogene Münzen von der Anzahl ab

	int _Muenze::get_Anzahl()
	{
		return _Anzahl;
	}
	//liest aktuelle Anzahl der Münzen aus

	void _Muenze::_ZugMensch()
	{
		int _Eingabe = 0;
		cout << "Sie sind am Zug.\n";
		do
		{ 
			cin >> _Eingabe;
		} while (_Eingabe != 1 and _Eingabe != 2 and _Eingabe != 3 or get_Anzahl()-_Eingabe<0);
		//Prüft auf gültige Eingaben

		_Abzug(_Eingabe);
		//Übermittelt gültige Eingabe an Abzug-Funktion

	}
	//Zug des Spielers

	void _Muenze::_Auswertung()
	{
		if (get_currSpieler() == 1)
			cout << "Sie haben gewonnen!";
		else
			cout << "Sie haben verloren!";
	}
	//Bestimmung des Gewinners

	void _Muenze::_ZugMaschine_leicht()
	{
		int _Zug = 0;
		//Deklarierung und Initialisierung der gezogenen Münzen
		do
		{
			_Zug = rand() % 3 + 1;
			//Auslosung Zufallszahl zwischen 1 und 3
		} while (get_Anzahl() - _Zug < 0);
		//Prüfung das nicht mehr Münzen gezogen werden als da sind

		cout << "Maschine zieht " << _Zug << " Münzen ab.\n";
		//Ausgabe, dass Maschine dran ist
		_Abzug(_Zug);
		//Aufruf des Abzugs der gezogenen Münzen
	}
	//leichter Maschinen-Zug

	void _Muenze::_ZugMaschine_schwer()
	{
		int _Zug = 0;
		//Deklarierung und Initialisierung der gezogenen Münzen
		do
		{
			_Zug = get_Anzahl() % 4;
			//Auslosung Zufallszahl zwischen 1 und 3
		} while (get_Anzahl() - _Zug < 0);
		//Prüfung das nicht mehr Münzen gezogen werden als da sind
		if (_Zug == 0)
			_Zug++;
		//falls das Spiel verloren ist, zieht die Maschiene immer eine Münze

		cout << "Maschine zieht " << _Zug << " Münzen ab.\n";
		//Ausgabe, dass Maschine dran ist
		_Abzug(_Zug);
		//Aufruf des Abzugs der gezogenen Münzen
	}
	//leichter Maschinen-Zug

	_Muenze::_Muenze()
	{
		_Anzahl = 0;
		_Schwierigkeit = 0;
		_currSpieler = 0;
	};
	//Konstruktor

	_Muenze::~_Muenze()
	{

	};
	//Dekonstruktor
