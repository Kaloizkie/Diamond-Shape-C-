#include <iostream>
using namespace std;

int main (){
    for (int i=1; i<=5; i++){ //no. of rows
        for (int j=i; j<5; j++){ //no. of space
            cout << " ";
        }
        for (int k=1; k<(i*2); k++){  //no. of stars
            cout << "*";
        }
    cout << endl;
    }
    int n=5;    //limit of rows
    for (int i=1; i<=5; i++){   //no. of rows
        for (int j=1; j<i; j++){    //no. of space
            cout << " ";
        }
        for (int k=i; k<=((n*2)-i); k++){ // or you can use: for (int k=10; k>=(i*2); k--)
            cout << "*";    //no. of stars
        }
        cout << endl;
    }
}
