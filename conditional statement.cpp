#include <iostream>
using namespace std;
int main() {
    /*  if statement */
    int a,b;
    cout<<"Enter the value of A"<<endl;
    cin>>a;
    cout<<"Enter the value of B"<<endl;
    cin>>b;
    if(a>b)
    {
        cout<<"Answer is A"<<endl;
    }
    if(a<b)
    {
        cout<<"Answer is B"<<endl;
    }
   /* if-else statement*/ 
    int c;
    cout<<"Enter the value of C"<<endl;
    cin>>c;
    if(c>0)
    {
       cout<<"C is positive "<<endl;
     
    }
    else
    {
        if(c<0)
        {
             cout<<"C is negative"<<endl;
        }
        else
        {
             cout<<"C is Numeric"<<endl;
        }
     
    }
    /* if-else-if statement */
    int d;
    cout<<"Enter the value of D"<<endl;
    cin>>d;
    if(d>0)
    {
        cout<<"D is positive"<<endl;
    }
    else if(d<0)
    {
        cout<<"D is negative"<<endl;
    }
    else {
        cout<<"D is numeric"<<endl;
    }
}
