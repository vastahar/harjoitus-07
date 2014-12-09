// HARJOITUS 7
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

void main()
{
	char nimi[20];
	cout << "Anna nimesi: ";
	//cin.get();
	cin.getline(nimi, 20);
	char osoite[30];
	cout << "Anna osoitteesi: ";
	//cin.get();
	cin.getline(osoite, 30);
	int pituus;
	cout << "Anna pituutesi sentteinä: ";
	cin >> pituus;
	int paino;
	cout << "Anna painosi kiloina: ";
	cin >> paino;
	int ihanne;
	ihanne = pituus - 100;
	int erotus;
	erotus = paino - ihanne;

	cout << "Ihannepaino\n\n";
	cout << "Ohjelma laskee ihannepainosi\n";
	cout << "pituutesi perusteella\n\n";
	cout << "Arvoisa " << nimi << endl;
	cout << "Osoitteesi on " << osoite << endl;
	cout << "Nykyinen painosi on " << paino << endl;
	cout << "Ihannepainosi on " << ihanne << endl;
	cout << "Erotus " << erotus << endl;
}