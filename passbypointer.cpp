#include"bits/stdc++.h"
using  namespace std;
void func(string *ptr_str){
    ptr_str->pop_back();
    cout<<*ptr_str<<endl;
}
int main(){
    string c = "ABC133";
    func(&c);
    cout<<c<<endl;
    return 0;
}