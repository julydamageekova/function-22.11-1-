
#include <iostream>
using namespace std;
/*�������� ��������� ��������� ����������� ����� ���� ��������� ������� ��������� ���� �� �����
�� ����� ��� �� 4 ��������(������ � ����� ������� ����� ���������, � ������ � ������ - ���).
������������� � ������ ��������� �� �����������. */

int main(){
int n,min1;
cin>>n;
int a[n];
for (int i=0; i<n;i++){
cin>>a[i];
}
if (n<5) cout<<"error";
else{
min1=a[0]+a[4];
for(int i=0; i<=(n-5);i++ ){
for (int g=i+4;g<=n-1;g++){
if (min1>a[i]+a[g]) min1=a[i]+a[g];
}
}
cout<<min1;
}
return 0;
}
