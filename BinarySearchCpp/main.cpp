//
//  main.cpp
//  BinarySearchCpp
//
//  Created by Nyi Htet on 3/18/23.
//
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int targetValue = 4;
    const int SIZE = sizeof(arr)/sizeof(arr[0]);
    
    bool found = false;
    int low = 0;
    int high = SIZE - 1;
    int pos = 0;
    while ( low <= high && !found )
    {
        pos = (low + high) / 2;
        if(arr[pos] == targetValue){
            found = true;
        }
        else if(arr[pos] < targetValue){
            low = pos + 1;
        }
        else{
            high = pos - 1;
        }
    }
    if(found){
        cout << targetValue << " is found at " << pos << endl;
    }
    else{
        cout << "Not found " << endl;
    }
    return 0;
}
