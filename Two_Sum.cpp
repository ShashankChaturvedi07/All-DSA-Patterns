
            //BRUTE 

// #include <iostream>
// using namespace std;

// int main(){

//     int arr[5]= {2,5,6,8,9};
//     int tar=70;

//     for(int i=0; i<5; i++){
//         for(int j=0; j<5; j++){
//             if(arr[i]+arr[j] == tar){
//                 cout<<arr[i]<<","<<arr[j];
//             }
//         }
//     }

//     cout<<"Not found";


//     return 0;
// }
        //BETTER (use hashmap)

        //Optimal  (TC-O(N)  SC-O(1))

#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,5,7,9};
    int n=5;
    int tar=12;
    int i=0;
    int j=n-1;

    while(i<j){
        int sum = arr[i]+arr[j];
        if(sum==tar){
            cout<<arr[i]<<","<<arr[j];
            return 0;
        }
        else if(sum>tar){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"not found";
}