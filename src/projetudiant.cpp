#include <vector>
#include <iostream>
#include <string>
#include <fstream>


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
	int val;
	cout << "Choisissez le nombre d'etudiant" << endl;
	cin >> val;

	ofstream f_notes;
	f_notes.open("notes.txt");
	for(int i=0;i<val;i++)
	{
		cout << "Entrer le nom de l'etudiant" << endl;
		cin >> aux_name;
		cout << "Entrer la note de l'etudiant" << endl;
                cin >> aux_note;
		tabetu.push_back(etudiant());
		tabetu[i].nom = aux_name;
		tabetu[i].note = aux_note;
		// Ecrire dans un fichier
		f_notes<<tabetu[i].nom << "\t" << tabetu[i].note <<endl;
	}
	f_notes.close();

	cout << "la liste es etudiants" << endl;
	for (int i = 0; i<tabetu.size(); i++)
	{
		cout << tabetu[i].nom << "      " << tabetu[i].note << endl;
	}

	string etu;
	cout << "Vous voulez voir les notes de quel etudiant ?" << endl;
	cin >> etu;


	for (int i=0; i<tabetu.size(); i++)
	{
		if (etu == tabetu[i].nom)
		{
			cout << "votre note est :" << tabetu[i].note << endl;
			break;
		}
	}

	// Gerer la persistence des notes

	ofstream fichier_notes;
	fichier_notes.open("file.txt");
	fichier_notes<<"EPSI";
	fichier_notes.close();
return 0;
}

