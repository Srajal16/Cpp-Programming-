#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {


    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}


int main(){
  int n = 10;
int result = fibonacci(n);
cout << "The " << n << "th Fibonacci number is: " << result << endl;


}