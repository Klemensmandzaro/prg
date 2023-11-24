#include <iostream>
using namespace std;
int main() {
    int a, suma;
    cin>>a;
    for (int i=a-1; i>0; i--)
    {
        if (a%i==0)
        {
            suma+=i;
        }
    }
    if (suma==a)
    {
        cout<<"Jest to liczba doskonala";
    }
    else
    {
        cout<<"Co to za gowno";
    }
    return 0;
}
