#include <iostream>
#include <math.h>
using namespace std;
void nt(int n){
    int count = 0;
    int count_nt = 0;
    for(int j = 1;j<=n;j++){
        for (int i =1;i <= j;i++){
            if (j%i == 0){
                count +=1;
            }
        }
        if (count == 2){
            count_nt +=1;
    }
    count = 0;
    }
    cout<<count_nt;
}
int main(){
    int n;
    cout<<"Nhap gia tri n:";cin>>n;
    nt(n);
}