*#include <iostream>
 using namespace std;
 int main(){
     int a= 10;
     double g= 4.56;
     char letter = 'A';
     //null string 
     string word ="develop";
     bool ag =true;
     cout << "deepa \t";
     // /t or /n is used 
     cout <<2+5 <<endl ;
     cout << a << endl;
     // no format specifier like %d
     //replace with stream*
     cout<< word <<"\n";
     int b=24;
     cout<< b<<"\n";
     int x,y,z;
     x=y=z=78;
     cout << x+y+z <<"\n";
     const int c=45;
    /*error will come  c=34;(const canot be modified)
     cout<<c;*/
     int h;
     cout<<"type a number:";
     cin >> h;
     cout << "vlaue of h is "<< h<<"\n";
     // scientific notation e=10th power 
     //data representation and how data is stored *(computer achiture )
     float ac= 35e2;
     double ad = 12E4;
     cout<<ac<<"\n";
     cout << ad <<"\n";
    char j= 'Y';
     cout<< j;
     char A=65,B=68,C=69;
     cout<< A<<B<<C ;
     
     return 0;
 }*
