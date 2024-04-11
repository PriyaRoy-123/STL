# include<iostream>


using namespace std;
class Functor
{
    public:
    bool operator()(int a,int b){
        if(a>b)
        return true;
        else 
        return false;

    }

    
};

int main(){
    Functor f;
    cout<<f(3,4);
    cout<< endl;

}
