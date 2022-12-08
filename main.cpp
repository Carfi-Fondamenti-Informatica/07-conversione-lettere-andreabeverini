#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char l=0;
    cin>>l;
    if (conversione(l)==true){
        cout<<l<<endl;
    }
    else{
        cout<<"errore"<<endl;
    }
    return 0;
}
