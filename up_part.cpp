#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
setlocale (LC_ALL, "RUS");
int S, i, j, N, M, a[20][20];
cout<<"N="; cin>>N;
cout<<"M="; cin>>M;
cout<<"Введите матрицу А \n";
for (i=0; i<N; i++)
for (j=0; j<M; j++)
cin>>a[i][j];
for (S=i=0; i<N; i++)
for (j=0; j<M; j++)
//если элемент лежит выше главной диагонали, то наращиваем сумму
if (j>i) S+=a[i][j];
cout<<"S="<<S<<endl;
system("pause");
return 0;
}
