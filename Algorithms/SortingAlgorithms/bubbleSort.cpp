#include <iostream>
using namespace std;

int main() {
    int array[] = {7,8,3,2,1,5};
    int size = sizeof(array)/sizeof(array[0]);

    //Algorithm for bubble sort.
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }   
    }
    
    // Code to print sorted list.

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    
}