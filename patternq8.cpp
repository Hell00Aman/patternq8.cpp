#include<bits/stdc++.h>
using namespace std;

// Function to print an inverted pyramid pattern
void print8(int n){
    // Outer loop controls rows
    for(int i=0;i<n;i++){
        // Leading spaces
        for(int j=0;j<i;j++) cout << " ";
        // Stars decrease each row
        for(int j=0;j<2*n-(2*i+1);j++) cout << "*";
        // Trailing spaces
        for(int j=0;j<i;j++) cout << " ";
        cout << endl; // New line
    }
}

int main(){
    int n;
    cin >> n;       // Input number of rows
    print8(n);      // Print inverted pyramid
    return 0;
}
