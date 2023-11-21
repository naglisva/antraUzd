#include "my_lib.h"

#include <string>
#include <vector>


std::istream& Studentas::readStudent(std::istream& is) {
    std::string vardas;
    is >> vardas;
    setVardas(vardas);

    std::string pavarde;
    is >> pavarde;
    setPavarde(pavarde);

    std::vector<int> pazymiai;
    int pazymys;
    while (is >> pazymys) {
        pazymiai.push_back(pazymys);
    }
    setPazymiai(pazymiai);

    int egzaminas = pazymiai.back(); 
    pazymiai.pop_back(); 
    setEgzaminas(egzaminas);

    return is;
}



double Studentas::galBalas(double (*func)(std::vector<int>)) const {
    std::vector<int> values = paz_;
    double result = func(values)*0.4 + egz_ *0.6;
    return result;
}

bool PagalRez(const Studentas& a, const Studentas& b) {
	return a.galBalas() < b.galBalas();
}