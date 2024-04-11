# include<iostream>
#include<array>

using namespace std;
int main(){
    array<int,3>a1={10,20,30};
    array<int,4> a2;
    array<int,3> a3=a1;
    array<int,5>a4={22,33,30,40,60};//remaining values are all 0s//
try{
    for(int i=0;i<5;i++)
     cout<<a1.at(i)<<" ";
}
catch(out_of_range e){
    cout<<"Exception:"<<e.what();
}


    //cout<<a1[3];

   // cout<<a1.at(3);
    cout<<"Hello";
    cout<< endl;
}

