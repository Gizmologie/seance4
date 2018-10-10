#include <vector>
#include <iostream>
#include <string>
using namespace std;

class etudiant {
	public :
	string nom;
	float note;
};

int main (void) {
	vector <etudiant> tabetu;
	string aux_name;
	float aux_note;
	for(int i=0;i<10;i++)
	{
		cout << "Entrer le nom de l'etudiant" << endl;
		cin >> aux_name;
		cout << "Entrer la note de l'etudiant" << endl;
                cin >> aux_note;
		tabetu.push_back(etudiant());
		tabetu[i].nom = aux_name;
		tabetu[i].note = aux_note;
	}

	cout << "la liste es etudiants" << endl;
	for (int i = 0; i<tabetu.size(); i++)
	{
		cout << tabetu[i].nom << "      " << tabetu[i].note << endl;
	}
return 0;
}

