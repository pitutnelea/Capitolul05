#include <iostream>

int FctAdunare (int a, int b)
{
return a+b;
}

int FctScadere (int a, int b)
{
return a-b;
}

int FctInmultire (int a, int b)
{
return a*b;
}

int FctImpartire (int a, int b)
{
if (b==0) std::cout<<"Nu se poate imparti la 0";
return a/b;
}

int FctModulo (int a, int b)
{
return a%b;
}
