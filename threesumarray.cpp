#include"bits/stdc++.h"
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];

}
int target;
cin>>target;
for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
        for(int k = j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==target){
                cout<<i<<" "<<j<<" "<<k;
                return 0;
            }
        }
    }
}
cout<<"No pair found";
return 0;
}
