#include <iostream>
using namespace std;

int main()
{
int n;
cout << "PLEASE ENTER A NUMBER: ";
cin >> n;

while (n != 1){
    cout << n<<" ";
if (n%2 ==1){
n = 3*n+1;}
else n = n/2; }
return 0;}

