#include "my_lib.h"


int main() {
	//generatorius(1000,"pirmas.txt");
	//generatorius(10000,"antras.txt");
	//generatorius(100000,"trecias.txt");
	//generatorius(1000000,"ketvirtas.txt");
	//generatorius(10000000,"penktas.txt");
	
	
	cout << "Naudojant sarasa " << endl;
	list1c("pirmas.txt","geri1.txt", "blogi1.txt");
	list1c("antras.txt", "geri2.txt", "blogi2.txt");
	list1c("trecias.txt", "geri3.txt", "blogi3.txt");
	//list1c("ketvirtas.txt", "geri4.txt", "blogi4.txt");
	//list1c("penktas.txt", "geri5.txt", "blogi5.txt");
	cout << endl;

	cout << "Naudojant sarasa, 2 strategija " << endl;
	list2c("pirmas3.txt", "nblogi1l.txt");
	list2c("antras3.txt", "nblogi2l.txt");
	list2c("trecias3.txt", "nblogi3l.txt");
	//list2c("ketvirtas3.txt", "nblogi4l.txt");
	//list2c("penktas3.txt", "nblogi5l.txt");
	cout << endl;

	cout << "Naudojant vektoriu " << endl;
	vector1c("pirmas.txt","geri1v.txt", "blogi1v.txt");
	vector1c("antras.txt", "geri2v.txt", "blogi2v.txt");
	vector1c("trecias.txt", "geri3v.txt", "blogi3v.txt");
	//vector1c("ketvirtas.txt", "geri4v.txt", "blogi4v.txt");
	//vector1c("penktas.txt", "geri5v.txt", "blogi5v.txt");
	cout << endl;

	cout << "Naudojant vektoriu, 2 strategija " << endl;
	vector2c("pirmas2.txt", "nblogi1v.txt");
	vector2c("antras2.txt", "nblogi2v.txt");
	vector2c("trecias2.txt", "nblogi3v.txt");
	//vector2c("ketvirtas2.txt", "nblogi4v.txt");
	//vector2c("penktas2.txt", "nblogi5v.txt");
	cout << endl;

	cout << "Naudojant vektoriu, 3 strategija " << endl;
	vector3c("pirmas4.txt", "nngeri1v.txt");
	vector3c("antras4.txt", "nngeri2v.txt");
	vector3c("trecias4.txt", "nngeri3v.txt");
	//vector3c("ketvirtas4.txt", "nnblogi4v.txt");
	//vector3c("penktas4.txt", "nnblogi5v.txt");
	cout << endl;
/*	
	cout << "Naudojant sarasa, 3 strategija " << endl;
	list3("pirmas.txt","geri1l.txt", "blogi1l.txt");
	list3("antras.txt", "geri2l.txt", "blogi2l.txt");
	list3("trecias.txt", "geri3l.txt", "blogi3l.txt");
	//list3("ketvirtas.txt", "geri4l.txt", "blogi4l.txt");
	//list3("penktas.txt", "geri5l.txt", "blogi5l.txt");

	*/
}