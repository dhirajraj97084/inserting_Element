#include <iostream>
using namespace std;

int main() {
    int arr[5]={2,4,6,8};
    int pos=2;
    int newElement=25;
    cout<<"original array is:"<<endl;
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // right sift all the elements from the last index
    for(int i=4;i>pos;i--){
        arr[i]=arr[i-1];
    }
    
    arr[pos]=newElement;
    
    cout<<"after the interting newElement in the array is:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}