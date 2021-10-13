#include <iostream>

using namespace std;

int main()
{
    int a, i;
    //i az osztot jeloli
    cout<< "a=";
    cin>>a;
    bool prim=true;
    for(i=2; i<a/2+1; i++){
        if(a%i==0){
            prim=false;
        }
    }
    if(prim){
        cout<< "A szam prim."<<endl;
    }else{
        cout<< "A szam nem prim."<<endl;
    }
    return 0;
}
