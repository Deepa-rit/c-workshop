#include <iostream>
using namespace std;
void sum(){
    int a=45;
    int b=89;
    int c=a+b;
    cout<< c<<"\n";
}
int main() {
    sum();
    return 0;
}
#include <iostream>
using namespace std;
void sum(int a,int b){
    
    int c=a+b;
    cout<< c<<"\n";
}
int main() {
    sum(4,5);
    return 0;
}
#include <iostream>
using namespace std;
int sum(){ // function name act as a identifier 
    int a=4,b=8;
    int c=a+b;
    return c;
}
void main() {
    int d=sum();
    cout << d << endl;
    cout << sum();
    
}
#include <iostream>
using namespace std;
int sum(int a,int b){ // with return type and return argument 
    int c=a+b;
    return c;
}
int main() {
    int d=sum(4,89);
    cout << d ;
    
    
}
#include <iostream>
using namespace std;
int main(){
string txt="we are the so-called \"vikings\" from the north.";
// escape character or whitespace character 
cout<< txt;
}
#include <iostream>
using namespace std;
int main(){
int mynum[5]={1,3,5,7,9};
for (int i: mynum){
    cout<< i<<"\n";
}
string word ="hello";
for (char c:word){
    
    // only printing constant from the word and remove vowels
    if (c!='e' and c!='o'){
         cout<<c<<"\n";
    }
    
}
}
#include<iostream>
#include<string>
using namespace std;
int main(){
string cars[5]={"tesla","honda","bmw","yeu","pen"};
for (int i=0;i<5;i++){
    cout<<cars[i]<<"\n";
}
    }
