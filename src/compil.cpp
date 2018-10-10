#include <vector>
#include <iostream>
#include "etudiant.h"

using namespace std;

int main (void) {
	vector <int> tab (4);
	int i;
	char aux_nom;
	float aux_note;
	for(i=0;i<4;i++=
	{
		cout << "Entrer le nom de l'etudiant" << i << endl;
		cin >> aux_nom;
		tab(i)= etudiant.nom (aux_nom);

		cout << "Entrer la note de l'etudiant" << i << endl;
		cin >> aux_note;
		tab(i)= etudiant.note (aux_note);
	}
return 0;
}

