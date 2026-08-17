#include<iostream>
using namespace std;

int main()
{
    int arr[5]= {23,45,78,98,79};
    int start=0, end=4;
    while(start<end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<5; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}