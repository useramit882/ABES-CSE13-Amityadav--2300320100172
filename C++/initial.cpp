 #include<iostream>
 #include<cmath>
using namespace std;
int main()
{
     int p,r,t,SI,CI;
     cout<<"Enter the principal amount: ";
     cin>>p;
     cout<<"Enter the rate of interest: ";
     cin>>r;
     cout<<"Enter the time in years: ";
     cin>>t;
     SI = (p*r*t)/100;
     cout<<"simple interest is: \n"<<SI;
        CI = p*(pow((1+r/100),t))-p;    
        cout<<"\ncompound interest is: \n"<<CI;
    return 0;
}