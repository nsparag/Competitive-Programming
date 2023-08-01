// Program to calculate get desired consecutive indeces to get required sum 

#include <iostream>
#define SIZE 10
using namespace std;

int main(){
    int arr[SIZE] = {1,2,3,7,5,4,2,5,1,7};
    int sum = 18, temp=0;

    int i=0,startIndex=0;
    while(temp<=sum){
        temp += arr[i];
        i++;
        if(temp==sum){
            break;
            }
        if((startIndex==SIZE-1)&&(temp!=sum))
            break;
        if(temp>sum){
            startIndex++;
            i=startIndex;
            temp = 0;
        }
    }
    if(sum==temp)
    cout << "Sum is possible from index " << startIndex << " till index " << i-1 << endl;
    else
    cout << "Not possible to obtain desired sum value.";
}
