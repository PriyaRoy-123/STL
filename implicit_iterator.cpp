#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> a1={50,60,70,80,40};
    for (auto x: a1)
      cout<<" "<< x;
    cout<< endl;

}