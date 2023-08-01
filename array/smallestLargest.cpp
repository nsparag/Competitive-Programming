#include <iostream>
#define SIZE 10
using namespace std;

int main(){
    int arr[SIZE] = {1,2,3,7,5,4,2,5,0,7};
    int largest, smallest;

    smallest = arr[0];
    for(int i=1;i<SIZE-1;i++)
        if (smallest>arr[i])
        {
            smallest = arr[i];
        }
    cout << "Smallest is " << smallest << endl;

    largest = arr[0];
    for(int i=1;i<SIZE-1;i++)
        if (largest<arr[i])
        {
            largest = arr[i];
        }
    cout << "largest is " << largest << endl;

}
