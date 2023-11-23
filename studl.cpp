#include "my_lib.h"

void list1(string pavadinimas, string naujas1, string naujas2) {
    ifstream inputfile(pavadinimas);
    ofstream outputfile1(naujas1);
    ofstream outputfile2(naujas2);
    list<studentas2> mokiniai;

    outputfile2 << "Vardas  Pavarde  Rezultatas" <<endl;
    outputfile1 << "Vardas  Pavarde  Rezultatas" <<endl;
    
    string dummyLine;
	getline(inputfile, dummyLine);

    string line;

    auto start_total = high_resolution_clock::now(); 
    microseconds read_duration(0);
    microseconds calc_duration(0);
    microseconds write_duration(0);

    while (getline(inputfile, line)) {
    auto start_line_read = high_resolution_clock::now(); 
    istringstream iss(line);
    studentas2 Laik;
    iss >> Laik.pav >> Laik.vard;
    int nd;
    list<int> temp;
    while (iss >> nd) {
        temp.push_back(nd);
    }
    for (auto it = temp.begin(); it != prev(temp.end()); ++it) {
        Laik.paz.push_back(*it);
    }
    Laik.egz = temp.back();
    auto end_line_read = high_resolution_clock::now(); 

    auto start_calc = high_resolution_clock::now(); 
    Laik.mgrez = mediana2(Laik.paz) * 0.4 + Laik.egz * 0.6;
    auto end_calc = high_resolution_clock::now(); 

    mokiniai.push_back(move(Laik));

    read_duration += duration_cast<microseconds>(end_line_read - start_line_read);
    calc_duration += duration_cast<microseconds>(end_calc - start_calc);
}


    
    mokiniai.sort(pagalrez2);

    for (const auto& Laik : mokiniai) {
        auto start_write = high_resolution_clock::now(); 
        if (Laik.mgrez < 5) {
            outputfile2 << Laik.pav << " " << Laik.vard << "   " << Laik.mgrez << endl;
        }
        else {
            outputfile1 << Laik.pav << " " << Laik.vard << "   " << Laik.mgrez << endl;
        }
        auto end_write = high_resolution_clock::now(); 
        write_duration += duration_cast<microseconds>(end_write - start_write);
    }

    auto end_total = high_resolution_clock::now(); 

    cout << "Visas eilutes nuskaityt uztruko: "
        << double(read_duration.count())/1000000
        << " sek."
        << endl;
    cout << "Visus rezultatus suskaiciuot uztruko: "
        << double(calc_duration.count())/1000000
        << " sek."
        << endl;
    cout << "Informacija i failus isskirstyt uztruko: "
        << double(write_duration.count())/1000000
        << " sek."
        << endl;
    cout << "Visas procesas uztruko: "
        << double(duration_cast<std::chrono::microseconds>(end_total - start_total).count())/1000000
        << " sek."
        << endl;
}

void list2(string pavadinimas, string naujas1) {
    ifstream inputfile(pavadinimas);
    ofstream outputfile1(naujas1);
    list<studentas2> mokiniai;

    outputfile1 << "Vardas  Pavarde  Rezultatas" <<endl;
    
    string dummyLine;
	getline(inputfile, dummyLine);

    string line;

    auto start_total = high_resolution_clock::now(); 
    microseconds read_duration(0);
    microseconds calc_duration(0);
    microseconds write_duration(0);

    while (getline(inputfile, line)) {
        auto start_line_read = high_resolution_clock::now(); 
        istringstream iss(line);
        studentas2 Laik;
        iss >> Laik.pav >> Laik.vard;
        int nd;
        list<int> temp;
        while (iss >> nd) {
            temp.push_back(nd);
        }
        for (auto it = temp.begin(); it != prev(temp.end()); ++it) {
            Laik.paz.push_back(*it);
        }
        Laik.egz = temp.back();
        auto end_line_read = high_resolution_clock::now(); 

        auto start_calc = high_resolution_clock::now(); 
        Laik.mgrez = mediana2(Laik.paz) * 0.4 + Laik.egz * 0.6;
        auto end_calc = high_resolution_clock::now(); 

        mokiniai.push_back(move(Laik));

        read_duration += duration_cast<microseconds>(end_line_read - start_line_read);
        calc_duration += duration_cast<microseconds>(end_calc - start_calc);
    }

    mokiniai.sort(pagalrez2);

    ofstream outputfile(pavadinimas); 
    outputfile << "Vardas  Pavarde  Rezultatas" <<endl;

    for (const auto& Laik : mokiniai) {
        auto start_write = high_resolution_clock::now(); 
        if (Laik.mgrez < 5) {
            outputfile1 << Laik.pav << " " << Laik.vard << "   " << Laik.mgrez << endl;
        }
        else {
            outputfile << Laik.pav << " " << Laik.vard << "   " << Laik.mgrez << endl;
        }
        auto end_write = high_resolution_clock::now(); 
        write_duration += duration_cast<microseconds>(end_write - start_write);
    }

    auto end_total = high_resolution_clock::now(); 

    cout << "Visas eilutes nuskaityt uztruko: "
         << double(read_duration.count())/1000000
         << " sek."
         << endl;
    cout << "Visus rezultatus suskaiciuot uztruko: "
         << double(calc_duration.count())/1000000
         << " sek."
         << endl;
    cout << "Informacija i failus isskirstyt uztruko: "
         << double(write_duration.count())/1000000
         << " sek."
         << endl;
    cout << "Visas procesas uztruko: "
         << double(duration_cast<std::chrono::microseconds>(end_total - start_total).count())/1000000
         << " sek."
         << endl;
}

std::ostream& operator<<(std::ostream& os, const studentas4& s) {
    os << s.pav << " " << s.vard << "   " << s.mgrez;
    return os;
}

void list3(string pavadinimas, string naujas1, string naujas2) {
    ifstream inputfile(pavadinimas);
    ofstream outputfile1(naujas1);
    ofstream outputfile2(naujas2);
    list<studentas4> mokiniai;

    outputfile2 << "Vardas  Pavarde  Rezultatas" <<endl;
    outputfile1 << "Vardas  Pavarde  Rezultatas" <<endl;
    
    string dummyLine;
	getline(inputfile, dummyLine);

    string line;

    auto start_total = high_resolution_clock::now(); 
    microseconds read_duration(0);
    microseconds calc_duration(0);
    microseconds write_duration(0);

    while (getline(inputfile, line)) {
        auto start_line_read = high_resolution_clock::now(); 
        istringstream iss(line);
        studentas4 Laik;
        iss >> Laik.pav >> Laik.vard;
        int nd;
        list<int> temp;
        while (iss >> nd) {
            temp.push_back(nd);
        }
        for (auto it = temp.begin(); it != prev(temp.end()); ++it) {
            Laik.paz.push_back(*it);
        }
        Laik.egz = temp.back();
        auto end_line_read = high_resolution_clock::now(); 

        auto start_calc = high_resolution_clock::now(); 
        Laik.mgrez = mediana2(Laik.paz) * 0.4 + Laik.egz * 0.6;
        auto end_calc = high_resolution_clock::now(); 

        mokiniai.push_back(move(Laik));

        read_duration += duration_cast<microseconds>(end_line_read - start_line_read);
        calc_duration += duration_cast<microseconds>(end_calc - start_calc);
    }

    mokiniai.sort(pagalrez4);

    auto partition_point = stable_partition(mokiniai.begin(), mokiniai.end(),  rezultatas4);

    auto start_write = high_resolution_clock::now(); 
    copy(mokiniai.begin(), partition_point, ostream_iterator<studentas4>(outputfile1, "\n"));
    copy(partition_point, mokiniai.end(), ostream_iterator<studentas4>(outputfile2, "\n"));
    auto end_write = high_resolution_clock::now(); 
    write_duration += duration_cast<microseconds>(end_write - start_write);

    auto end_total = high_resolution_clock::now(); 

    cout << "Visas eilutes nuskaityt uztruko: "
        << double(read_duration.count())/1000000
        << " sek."
        << endl;
    cout << "Visus rezultatus suskaiciuot uztruko: "
        << double(calc_duration.count())/1000000
        << " sek."
        << endl;
    cout << "Informacija i failus isskirstyt uztruko: "
        << double(write_duration.count())/1000000
        << " sek."
        << endl;
    cout << "Visas procesas uztruko: "
        << double(duration_cast<std::chrono::microseconds>(end_total - start_total).count())/1000000
        << " sek."
        << endl;
}