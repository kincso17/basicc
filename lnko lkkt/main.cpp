

    #include <iostream>
using namespace std;
int main()
{
int a, b,c,d;
int lnko = 0, lkkt = 0;

cout << "a="; cin >> a;
cout << "b= "; cin >> b;

c = a;
d = b;

if( a < b )
{
    int p = a;
    a = b;
    b = p;
}

while( b != 0 )
{
    int m = a % b;
    a = b;
     b = m;
}

lnko = a;
lkkt = c*d / lnko;

cout << "LNKO = " << lnko << endl;
cout << "LKKT = " << lkkt;


    return 0;
}
