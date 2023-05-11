#include <iostream>
using namespace std;
int main()
{
    int a,x,k,z.;
    cout << "Enter number \n";
    cin >>a;
    if (a <=100) 
    {
        x =a%10;
        k =(a/10)%10;
        z =a/100;
if(z==0)
{
    cout<<"\n";
    cout<<" "<<k<<" "<<x<<endl;
    cout<<"sum ="<<x+k+z<<endl;
}
  if(((a>=10)&&(a<100)) ||((a>=-100) &&(a<-10)))
    cout << "Enter number \n";
    cin >>a;
    if (a <=100) 
    {
        x =a%10;
        k =(a/10)%10;
        z =a/100;
if(z==0)
{
    cout<<"\n";
    cout<<" "<<k<<" "<<x<<endl;
    cout<<"sum ="<<x+k+z<<endl;
}
    }
    else
    {
        cout << "The number is odd\n";
    }
    return 0;
}
}