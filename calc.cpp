#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ch;
    cin>>ch;
    switch(ch){
        case 1:
          cout<<"result: "<<(a+b);
            break;
        
         case 2:
        
            cout<<"result: "<<(a-b);
            break;
        
         case 3:
        
            cout<<"result: "<<(a*b);
            break;
        
        case 4:
        
            cout<<"result: "<<(a/b);
            break;
        
        case 5:
        
            cout<<"result: "<<(a%b);
            break;
        
        default:
        cout<<"invalid";
        

    }
    return 0;
}