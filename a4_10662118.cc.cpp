#include <iostream>
#include <math.h>

using namespace std;

int GCD(int a, int k)
//The GCD of any two numbers is the largest number that can divide them without a remainder
{
    int rem =a%k;
    while(rem != 0)
    {
        a=k;
        k=rem;
        rem= a%k;

    }
    return k;
}
int main( )
{
    cout<< "Please key in two numbers to find their GDP"<<endl;
    int a,k;
    cin>>a;
    cin>>k;
    cout<< "The GCD of "<<a<<" and "<<k<<" is "<<GCD(a,k);

    return 0;
}
