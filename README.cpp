#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,n1=0,n2=1,sig;
    cout<<"Ingresa el numero de terminos de Fibonacci que desee: ";
    cin>>n;
    cout<<"los numeros de Fibonacci son: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<n1;
        sig=n1+n2;
        n1=n2;
        n2=sig;
    }
    return 0;
}
