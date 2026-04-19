#include<iostream>
#include<ctime>
using namespace std;

void func(long long n){
    for(long long i = 0; i < n; i++);
}

int main(){
    long long n;
    cout << "Enter number: ";
    cin >> n;

    clock_t start, end;

    start = clock();
    func(n);
    end = clock();

    double time_taken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Time: " << time_taken << " seconds" << endl;

    return 0;
}