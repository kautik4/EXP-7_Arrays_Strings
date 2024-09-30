//Kautik Verma
//PRN:23070123073
//EnTC A3
//Experiment 7
// Program to take elements as input of array and print it
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int x[size];
    cout << "Enter a set of  integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> x[i];
    }
    cout << "The array elements are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << x[i] << " ";
    }
}
/*
Enter the number of elements in the array: 3
Enter a set of  integers:
1
2
3
The array elements are:
1 2 3
*/
