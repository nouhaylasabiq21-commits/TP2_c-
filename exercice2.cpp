#include <iostream>
#include <string>
using namespace std;
class Etudiant {
private:
    string nom;
    string cin;
    float note;

public:
    Etudiant() {
        nom = "";
        cin = "";
        note = 0;
    }

    void setNom(string n) { nom = n; }
    void setCin(string c) { cin = c; }
    void setNote(float n) { note = n; }

    string getNom() const { return nom; }
    string getCin() const { return cin; }
    float getNote() const { return note; }
    void afficher() const {
        cout << nom << " (CIN: " << cin << ") - Note : " << note;
    }
};
class Filiere {
private:
    string nomFiliere;
    Etudiant etudiant;

public:
    Filiere() {
        nomFiliere = "";
    }
    void setNomFiliere(string nf) { nomFiliere = nf; }
    void setEtudiant(const Etudiant& e) { etudiant = e; }
    string getNomFiliere() const { return nomFiliere; }
    Etudiant getEtudiant() const { return etudiant; }
    void afficher() const {
        cout << "Filiere : " << nomFiliere << endl;
        cout << "Etudiant : ";
        etudiant.afficher();
        cout << endl;
    }
};
int main() {
    Etudiant e;
    e.setNom("Yassine");
    e.setCin("C78912");
    e.setNote(15.5);

    Filiere f;
    f.setNomFiliere("Genie informatique");
    f.setEtudiant(e);

    f.afficher();

    return 0;
}
