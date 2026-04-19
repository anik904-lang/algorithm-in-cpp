#include<bits/stdc++.h>
using namespace std;

typedef long long int LL;
void func(LL n){
    LL k=0;
    while(k<=n) k++;
}


int main(){
    
time_t startTime,endTime;
LL inp;
printf(" enter the number of instructions: ");
scanf("%lld",&inp);
time(&startTime);
func(inp);
time(&endTime);

printf("time in seconds: %.20lf\n", (double) (endTime)-(startTime) );

    return 0;
}