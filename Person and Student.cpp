/* Based on your knowledge set the records below. Create an algorithm that asks the user to enter student and person data and print them on the screen: */

#include <iostream>

using namespace std;

struct Person {
  
string name;
  
int age;
   
char gender;
   
float weight;
 
};

struct Student {
  
string registration;
   
string fisrtName;
   
string lastName;
   
string course;
   
string shift;
   
string year;
 
};

int main () {
  
cout << "Student" << endl;
  
Student c;
  
cout << "First Name: ";
  
cin >> c.fisrtName;
  
cout << "Last Name: ";
  
cin >> c.lastName;
  
cout << "Registration number: ";
  
cin >> c.registration;
  
cout << "Course: ";
  
cin >> c.course;
  
cout << "Year: ";
  
cin >> c.year;
  
cout << "Shift: ";
  
cin >> c.shift;
  
cout << c.fisrtName << " " << c.lastName << endl << "Registration number: " << c.registration << endl;
  
cout << c.year << " year of " << c.course << " " << c.shift << endl;

  
cout << endl << "Person" << endl;
  
Person e;
  
cout << "Name: ";
  
cin >> e.name;
  
cout << "Age: ";
  
cin >> e.age;
  
cout << "Gender (M/F): ";
  
cin >> e.gender;
  
cout << "Weight: ";
  
cin >> e.weight;
  
cout << "name: " << e.name << endl << "age: " << e.age << endl << "gender: " << e.gender << endl << "weight: " << e.weight;
  
return 0;

}
