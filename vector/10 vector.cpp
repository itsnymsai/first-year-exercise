/*Write an algorithm that reads 10 integers from the user.*/

#include <iostream>
using namespace std;
int main()
{
 int vetor [10];
 for (int i = 0 ; i<10 ; i++){
 cout << "Enter the "<< i+1 <<"º number: ";
 cin >> vetor [i];
 }
 for (int i = 0 ; i<10 ; i++){
 cout << vetor [i] << " | ";
 }
 return 0;
}
