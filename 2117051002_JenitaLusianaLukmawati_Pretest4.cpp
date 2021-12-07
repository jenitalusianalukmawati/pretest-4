#include <iostream>
using namespace std;
int main (){

int i, n;
cin >> i;
cout << "Masukkan bilangan awal (i) = " << i << endl;
cout << endl;
cin >> n;
cout << "Masukkan bilangan akhir (n) = " << n << endl;
cout << endl;
for (i; i<=n; i++)
{
	 if (i%3==0)
 	cout << i << " ";
}

}
