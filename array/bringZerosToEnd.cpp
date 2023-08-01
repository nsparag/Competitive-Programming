// Program to bring zeros at the end of an array

#include <iostream>
using namespace std;

// input[12] = {1,2,3,0,4,5,6,0,7,8,0,9}
//expected output  = [1,2,3,4,5,6,7,8,9,0,0,0]

int main(){

int input[12] = {1,2,3,0,4,5,6,0,7,8,0,9},temp=0,i=0;

while(i<12){
    input[temp] = input[i];
	if(input[i] != 0) {
        temp++;
    }
    i++;
}
for(i=temp;i<12;i++)
    input[i]=0;

for(int i=0; i<12; i++){
    cout << input[i];
}

}
