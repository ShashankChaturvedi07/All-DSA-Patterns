
            //BRUTE 

#include <iostream>
using namespace std;

int main(){

    int arr[5]= {2,5,6,8,9};
    int tar=70;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i]+arr[j] == tar){
                cout<<arr[i]<<","<<arr[j];
            }
        }
    }

    cout<<"Not found";


    return 0;
}