#include <iostream>
using namespace std ;
int main ()
{
int d ;
double price ;
    cin >>d;
    if(d<=3)
    cout <<"0.50 jd";
    else if(d>3){
    d=d-3;
    price=0.5+(d*0.75);
    cout<<"enter price" <<price;
    }



}