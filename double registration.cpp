using namespace std;
 struct Register{
 string name;
 string address;
 float phone;
 };
 int main()
{
 Register e[2];
 for(int i=0;i<2;i++){
 cout << "Customer name: ";
 cin >> e[i].name;
 cout << "Customer address: ";
 cin >> e[i].address;
 cout << "Customer phone: ";
 cin >> e[i].phone;
 cout << "It's done!" << endl;
 }
 for(int i=0;i<2;i++){
 cout << "name: " << e[i].name << endl;
 cout << "address: " << e[i].address << endl;
 cout << "phone: " << e[i].phone << endl;
 }