#include <iostream>
# include <iomanip>
using namespace std;
int main(){
    int sub1,sub2,sub3,sub4,sub5;
     float percentage;
     int  totalmarks;
     string grade;
     string status;
     // first take the subjects marks 
     cout<<"enter the marks of subject1"<<endl;
     cin>>sub1;
     cout<<"enter the marks of subject2"<<endl;
     cin>>sub2;
     cout<<"enter the marks of subject3"<<endl;
     cin>>sub3;
     cout<<"enter the marks of subject4"<<endl;
     cin>>sub4;
     cout<<"enter the marks of subject5"<<endl;
     cin>>sub5;
       // calculate the percentage 
       totalmarks=sub1+sub2+sub3+sub4+sub5;
       percentage= totalmarks/5.0;
       cout<<"the totalmarks"<<totalmarks<<endl;
        cout<<"percentage"<<percentage<<endl;
        if(percentage>90){
    cout<<"grade"<<"A+" <<endl; }
        else if(percentage>80){
        cout<<"grade"<<'A'<<endl;}
        else if(percentage>70){
        cout<<"grade"<<'B'<<endl;}
       else  if(percentage>60){
        cout<<"grade"<<'C'<<endl;}
        else if  (percentage>50){
        cout<<"grade"<<'D'<<endl;}
        else if (percentage<50){
          cout<<"grade"<<'f'<<endl;
        }  
        // Determine pass/fail status
    status = (percentage >= 50) ? "PASS" : "FAIL";

    // Display Result Card
    cout << "----- Result Card -----" << endl;
    cout << left << setw(20) << "Total Marks:" << totalmarks << endl;
    cout << left << setw(20) << "Percentage:" << percentage << "%" << endl;
    cout << left << setw(20) << "Grade:" << grade << endl;
    cout << left << setw(20) << "Status:" << status << endl;
    return 0;
}



