class _Muenze {

	private:
		int _Anzahl;
		//akktuelle Anzahl der Münzen
		int _Schwierigkeit;
		//Schwierigkeitsgrad
		int _currSpieler;
		//akktueller Spieler

	public:
		void set_currSpieler(int);
		int get_currSpieler();
		//Prototyp fürs Setzen und Rufen des akktuellen Spielers

		void set_Schwierigkeit();
		int get_Schwierigkeit();
		//Prototyp fürs Setzen und Rufen des Schwierigkeitsgrades

		void set_Anzahl();
		int get_Anzahl();
		//Prototyp fürs Setzen und Rufen der akktuellen Anzahl der Münzen

		void _Abzug(int _Abzug);
		//Prototyp für den Abzug der gezogenen Münzen

		void _ZugMensch();
		////Prototyp für Zug des Spielers

		void _ZugMaschine_leicht();
		void _ZugMaschine_schwer();
		//Prototyp für den leichten und schweren Zug der Maschine

		void _Auswertung();
		//Prototyp für die Auswertung des Gewinners

		_Muenze();
		//Prototyp für Kunstruktor

		~_Muenze();
		//Prototyp für Dekonstruktor

};