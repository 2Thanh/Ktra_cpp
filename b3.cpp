#include <iostream>
using namespace std;

int main(){
    int n;
    int *a;
    a = new int[100];
    int count = 0;
    cout<<"Nhap n:";cin>>n;
    while (n != 0){
        a[count] = n%10;
        n = n/10;
        count +=1;
    }
    int max = a[0];
    for (int i =1;i<count;i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    cout<<"Gia tri lon nha la:"<<max;
    
}