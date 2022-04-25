/* Write an algorithm that reads two vectors of 10 positions and makes the multiplication of the elements of the same index, putting the result in a third vector. Show the resulting vector. */

#include <iostream>
using namespace std;
int main()
{
 int a[10];
 int b[10];
 int c[10];
 cout << "For the first vector" << endl;
 for (int i = 0; i < 10; i++){
 cout << "Enter the " << i+1 << "º number: ";
 cin >> a[i];
 }
 cout << "For the second vector" << endl;
 for (int i = 0; i < 10; i++){
 cout << "Enter the " << i+1 << "º number:" ;
 cin >> b[i];
 }
 for (int i = 0; i < 10; i++){
 c[i] = a[i] * b[i];
 cout << c[i] << " | ";
 }
 return 0;
}
