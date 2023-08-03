#include <iostream>
using namespace std;

void printTotal (int x) {
    cout << x << endl;
}

int multiplyTwo (int x) {
    int total = x * 2;
    printTotal(total);
    return total;
}



int main () {
    int num = 2;
    int newNum = multiplyTwo(num);
    int newerNum = addTwo(newNum);
    return 0;
}