#include<iostream>
#include<array>
 using namespace std;



 int main(){
    array<int,5> a1={50,70,60,30,40};
    Explicit iterator
     array<int,5>:: iterator it;
    // for(it=a1.begin();it!=a1.end();it++){
    //     cout<<*it<<" ";
    
    // it=a1.begin();
    *it=100;
     cout<< endl;
    }


    //implicit Iterator
    for(auto x:a1){
      cout<<" "<<x;
    cout<< endl;
    }
    // for reverse iterator
     
    
    array<int,5>::reverse_iterator it;
    for(it=a1.rbegin(); it!=a1.rend();it++)
    {
        cout<<*it<<" ";

    
    it=a1.rbegin();
    *it=100;
    cout<< endl;
    }


    //for const iterator
     
    // array<int,5>:: const_iterator it;
    // for(it=a1.cbegin();it!=a1.cend();it++){
    //  cout<<*it<<" ";
    // }
    // for constant reverse iterator
    array<int,5>:: const_reverse_iterator it;
    for(it=a1.crbegin();it!=a1.crend();it++){
        cout<<*it<<" ";
    }


    


 }
 

