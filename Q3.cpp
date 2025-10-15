#include <iostream>
using namespace std;
int main(){

 int a,b,c;
 cout<< "enter the number1"<<endl;
 cin>>a;
cout<< "enter the number2"<<endl;
 cin>>b;
cout<< "enter the number3"<<endl;
cin>>c;


// now if all number are equal so 
if((a==b)&&(b==c)){
cout<<"all number are equal "<<endl;
}

// the largest number 
else
if((a>b)&&(a>c)){
cout<<"the largest number "<<a;
}
else if
 (b>c){
    cout<< " the largest number "<<b<<endl;
}
else cout<<" the largest number "<<c<< endl;

    // now input the smallest number so 
    
    if((a<b)&&(a<c)){
        cout<<"the smallest number "<<a<<endl;
    }
 else if((b<a)&&(b<c)){
   cout<<  "the smallest number "<<b<<endl;
   
 }
 else
 cout<<"the smalllest number "<<c<<endl;

    return 0;
}
