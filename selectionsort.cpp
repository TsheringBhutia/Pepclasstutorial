#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for(int j = i+1; j < n;j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if(min_index!=i){
            swap(arr[i],arr[min_index]);
        }
    }
    cout<<"sorted array: ";
    for(int x : arr ){
        cout<<x<<endl;
    }
    return 0;

}