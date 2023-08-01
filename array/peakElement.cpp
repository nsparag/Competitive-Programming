//Find a peak element which is not smaller than its neighbors

#include <iostream>
#define SIZE 5
using namespace std;

int main(){
    int arr[SIZE] = {1,2,3,7,9};
    bool flag = 0;
    for (int i = 1; i < SIZE-1; i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            cout << arr[i] << " is the peak" << endl;
            flag = 1;}
    }
    if(!flag)
        cout << "Peak element does not exist";
}
