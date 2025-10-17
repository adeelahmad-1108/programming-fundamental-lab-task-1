#include <iostream>
using namespace std ;
int main(){
    int choice ;
    cout<<"press 1 to calculate the area of circle  "<< endl;
    cout<<"press 2 to calculate the area of rectangle   "<< endl;
    cout<<"press 3 to calculate the area of triangle   "<< endl;
    cout<<"enter your choice "<<endl;
    cin>>choice;
    switch(choice){
    case 1 :
    int radius;
    float (3.14159);
     cout<<"enter the radius of the circle"<<endl;
     cin>> radius ;
     cout<<"area of the circle "<< 3.14159*(radius)*(radius )<<endl;
    break;


    case 2: 
    int length ,width ;
    cout<<"enter the length of the rectangle "<<endl;
    cin>> length;
    cout<<"enter the width of the rectangle "<<endl;
    cin>> width;
    cout<<"area of rectangle "<< length*width << endl;
    break;



    case 3:
    int base, height;
 cout<<"enter the base of the rectangle "<<endl;
    cin>> base;
    cout<<"enter the height of the rectangle "<<endl;
    cin>> height ;
    cout<<" area of triangle "<<0.5*base* height<<endl;
    break;
}
return 0;
}