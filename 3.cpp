#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while (a>1 and b>1)
        {
            if(a>b)
            {
                a = a % b;
            }
            if(b>a)
            {
                b = b % a;
            }
            if (a==b)
            {
                a = 0;
            }
        }
    if(a>b){
        cout<<a;
    }
    else {
        cout<<b;
    }
}
