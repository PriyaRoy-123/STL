#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> a1={23,50,20,45,40};
    array<int,5> a2={34,26,18,39,60};
    

    cout<<a1.size()<<endl;
    cout<< a2.size()<< endl;
    a1.swap(a2);

}