#include <iostream>
#include<string>
using namespace std;
int main(){
    string greeting="good morning";
    cout<< greeting<<"\n";
//scope variable operator 
auto a=6;//storage class (not data type is declared)
//4types of storage class
auto word="good";
auto letter='A';
auto fl=45.89;
auto mystring=string("hello");
cout<<a<<word<<letter<<fl<<mystring<<"\n";
//static variable persistent 
string firstName="Deepa";
string lastName="Shree";
string Fullname= firstName.append(lastName);
cout<<Fullname<<"\n";
string text="goodnightitspleasedtomeetyou";
cout<<"length of text:"<<text.length();
cout<<"size of the text"<<text.size()<<;
string subb="hello";
cout<< subb[subb.length()-1];

}
