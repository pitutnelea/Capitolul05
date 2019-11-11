#include <iostream>

using namespace std;

void Ameteala(int parSiVal, int&parTyRef, int*parTotPont)
{
parSiVal *=3;
parTyRef *=3;
*parTotPont *=2;
cout<<"In functie"<<parSiVal<<" "<<parTyRef<<" "<<&parTotPont<<endl;
}

int main()
{
int druckenRat = 3;
Ameteala(druckenRat, druckenRat, &druckenRat);
cout<<"Dupa functie"<<druckenRat<<" "<<druckenRat<<" "<<&druckenRat<<endl;
cout<<druckenRat<<endl;

return 0;
}
