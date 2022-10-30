#include <iostream>
#include <math.h>
using namespace std;
void nhapmt(int **a,int rows,int collumn){
    for (int i = 0 ;i<rows ; i++){
        for (int j = 0;j<collumn; j++){
            cout<<"Nhap gt ["<<i<<"]["<<j<<"]:";
            cin>> a[i][j];
        }
    }
}
void xuatmt(int **a,int rows,int collumn){
    for (int i = 0 ;i<rows ; i++){
        for (int j = 0;j<collumn; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int **mt(int &rows, int &collumn){
    int **a;
    do{
        cout<<"Nhap so hang: ";cin >> rows;
        cout<<"Nhao so cot: ";cin >> collumn;
    }while(rows <=0 || collumn <=0);

    a = new int*[rows];
    for (int i = 0 ; i<rows ; i ++){
        a[i] = new int[rows];
    }
    nhapmt(a,rows,collumn);
    return a;
}
void nhan2mt(int **a,int **b , int ra, int rb, int ca, int cb){
    int **c;
    int result = 0 ;
    c = new int*[ra];
    for (int j = 0 ; j<ra; j++){
        c[j] = new int[cb];
    }
    for (int i = 0 ;i<ra ; i++){
        for (int j = 0 ;j<cb;j++){
            c[i][j]=0;
        }
    }
    for (int i =0; i < ra;i++){
        for (int j = 0;j<cb;j++){
            for(int k = 0; k < ra; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    xuatmt(c,ra,cb);
}

int main(){
    int ra,ca,rb,cb;
    int **a, **b ; 
    a = mt(ra,ca);

    b = mt(rb,cb);
    if (ca = rb){
        nhan2mt(a,b,ra,rb,ca,cb);
    }
    else{
        cout<<"Hai ma tran khong the nhan cho nhau!!";
    }
}