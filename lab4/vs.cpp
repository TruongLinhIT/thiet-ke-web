#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;

    if ( a==b && b==c ){
        cout<<"day la tam giac can";
    }else if(a==b || b==c || c==a){
        cout<<"day la tam giac deu";
    }else{
        cout<<"day la tam giac bth";
    }
}