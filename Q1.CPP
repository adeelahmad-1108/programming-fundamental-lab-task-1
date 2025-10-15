 #include <iostream>
 #include <iomanip>
 using namespace std;

 int main() {
    //declare and initilized the floating pionts
    float firstNumber,secondNumber;
    cout<<"enter the firstNumber"<<endl;
    cin>>firstNumber;
    cout<<"enter the num2"<<endl;
    cin>>secondNumber;
    
     //perform arithmetic operator with floating pionts
     float sum = firstNumber + secondNumber;
      float diff = firstNumber - secondNumber;
     float product = firstNumber * secondNumber;
     float qoutient = firstNumber / secondNumber;
     

     // now all output into 3 decimal piont so using fixed setprecision operator
     cout<< fixed << setprecision (3)<<endl;
     
        cout<<"the sum oftwo numberis "<<sum<<endl;
        cout<<"the diff oftwo numberis "<<diff<<endl;
        cout<<"the product oftwo numberis "<<product<<endl;
        cout<<"the qoutient oftwo numberis "<<qoutient<<endl;
        
       // now casting the float into int so  
               
        int firstint = static_cast<int>(firstNumber);
        int secondint = static_cast<int>(secondNumber);
     
          int   intsum = firstint + secondint;
     
         int  intdiff = firstint - secondint;
     
         int     intproduct = firstint * secondint;
    
          int  intqoutient = firstint / secondint;
     
    
     cout<<"the sum oftwo numberis "<<intsum<<endl;
     
     cout<<"the diff oftwo numberis "<<intdiff<<endl;

     cout<<"the product oftwo numberis "<<intproduct<<endl;
     
     cout<<"the qoutient oftwo numberis "<<intqoutient<<endl;
 return 0; 

     
 }  