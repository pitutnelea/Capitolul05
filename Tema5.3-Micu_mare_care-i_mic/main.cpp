#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    //În funcția main definiți un șir de 20 de caractere.
    char Sir[20];

    //Citiți de la tastatură un șir de litere mici și mari (fără spații !!)
    cout<<"Introduceti un sir de litere mici si mari fara spatii"<<endl;
    cin>>Sir;

    //Afisați șirul.
    cout<<"Sirul pe care l-ati introdus este: "<< Sir<<endl;

    //Parcurgeți șirul caracter cu caracter.
    //Dacă litera e mică înlocuiți-o cu echivalentul ei mare.
    //Dacă litera e mare înlocuiți-o cu echivalentul ei mic.

    int i= 0;
    while (Sir[i]!=0)
    {
        if(isupper(Sir[i]))
        {
            Sir[i] = tolower(Sir[i]);
        }
        else if(islower(Sir[i]))
        {
            Sir[i] = toupper(Sir[i]);
        }
    i++;
    }

    //Afișați din nou șirul.
    cout <<"Sirul modificat este: "<<Sir<<endl;

    /*Note:
    pentru a detecta dacă un caracter e mic sau mare folosiți funcțiile islower respectiv isupper
    pentru a schimba un caracter din mic în mare folosiți funcția toupper
    pentru a schimba un caracter din mare în mic folosiți funcția tolower
    pentru a putea folosi funcțiile de mai sus trebuie să includeți în main.cpp fișierul header care conține definițiile lor. Fișierul există deja printre fișierele instalate de mediul de programare. Numele acestui fișier este ... ușor de găsit pe internet dacă faceți o căutare*/

    return 0;
}
