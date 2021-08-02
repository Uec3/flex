#include <iostream>
#include <cmath>
using namespace std;
bool existance(float a,float b,float c)
{
    if(a + b >= c and a + c >= b and b + c >= a)
        {
            return 1;
        }
    return 0;
}
int main()
{
    float x1,y1,x2,y2,x3,y3,a,b,c;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    c = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    if(existance(a,b,c))
        {
            float p = (a+b+c)/2;
            cout<<sqrt(p*(p-a)*(p-b)*(p-c));
        }
}
