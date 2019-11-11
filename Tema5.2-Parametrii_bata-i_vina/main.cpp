#include <iostream>

using namespace std;

void Ameteala(int parSiVal, int&parTyRef, int*parTotPont)
{
parSiVal *=3;
parTyRef *=3;
*parTotPont *=2;
}

int main()
{
int druckenRat = 36;
Ameteala(druckenRat, druckenRat, &druckenRat);
cout<<druckenRat<<endl;

return 0;
}
