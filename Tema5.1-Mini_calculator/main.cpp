#include <iostream>
#include "Operatii.h"
using namespace std;

void FctMeniu()
{
cout<<"1 Adunare"<<endl;
cout<<"2 Scadere"<<endl;
cout<<"3 Inmultire"<<endl;
cout<<"4 Impartire"<<endl;
cout<<"5 Modulo"<<endl;
}


int main()
{
    cout<<"Introdu aplicatia pe care vrei sa o aplici (1,2,3,4 sau 5):"<<endl;
    int varmeniu;
    FctMeniu();
    cin>>varmeniu;
    int nr1, nr2;
    cout<<"Introdu numarul 1: ";
    cin>>nr1;
    cout<<"Introdu numarul 2: ";
    cin>>nr2;
    switch(varmeniu)
    {
        case 1: cout<<nr1<<" + "<<nr2<<" = "<<FctAdunare(nr1,nr2);break;
        case 2: cout<<nr1<<" - "<<nr2<<" = "<<FctScadere(nr1, nr2);break;
        case 3: cout<<nr1<<" * "<<nr2<<" = "<<FctInmultire(nr1, nr2);break;
        case 4: cout<<nr1<<" / "<<nr2<<" = "<<FctImpartire(nr1, nr2);break;
        case 5: cout<<nr1<<" % "<<nr2<<" = "<<FctModulo(nr1, nr2); break;
        default: cout<<"Atentie, optiunea incorecta!"<<endl;
    }
    return 0;
}

/*//Scrieți un program care să efectueze operațiile matematice de bază asupra a două numere.
//Programul trebuie să conțină

//o funcție, definită în main.cpp, care să afișeze meniul opțiunilor pentru utilizator, funcție pe care o veți apela la începutul funcției main.

//un fișier Operatii.cpp și un fișier Operatii.h.
//În fișierul Operatii.cpp definiți câte o funcție pentru operațiile adunare, scadere, inmultire, impartire, modulo. Fiecare functie primeste in intrare doi parametri de tip intreg si returneaza rezultatul operatiei matematice respective
//în fișierul Operații.h puneți declarațiile tuturor funcțiilor definite în Operatii.cpp
//în main.cpp includeți fișierul Operații.h
//in functia main scrieti logica programului adica
//apelați funcția care afișează meniul (și care nu face nimic altceva)
//citiți de la consolă opțiunea utilizatorului
//afișați mesajul "Introdu doua numere intregi:"
//citiți de la tastatură cele două numere
//folosind un switch apelați funcția care corespunde opțiunii utilizatorului și afișați rezultatul returnat de funcție. Respectiv  afișați un mesaj de eroare dacă opțiunea e incorectă
//Finalul ar trebui să arate similar cu:

//Sfat: Fiind un program mai mare, abordați-l pe bucăți. Scrieți funcția pentru meniu, adăugați în main instrucțiunile care permit citirea datelor de la tastatură și adăugați o singură operație matematică (de ex adunarea). Odată ce partea aceasta merge treceți la extindere și adăugați celelalte funcții.
*/

