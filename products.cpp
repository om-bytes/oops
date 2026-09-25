#include<iostream>
#include<string>
using namespace std;

class product {
private:
int prid;
string name;
float price;
int monsale[12];
int totqty;
float bill;
public:
void enterdetails() {
  cout<<"\nEnter Product ID: ";
  cin>>prid;
  cin.ignore();
  cout<<"Enter Product Name: ";
  getline(cin,name);
  cout<<"Enter Price per unit: ";
  cin>>price;
  cout<<"Enter monthly sales for 12 months: ";
  totqty = 0;
  for(int i=0;i<12<i++) {
    cin>>monsale[12];
    totqty += monsale[i];
  }
    bill = totqty*price;
    cout<<"Total Bill"<<price*totqty;
}
void displaydetails() {
  cout<<"\n Product ID: "<<prid<<endl;
  cout<<"Product Name: "<<name<<endl;
  cout<<"Price: "<<price<<endl;
  cout<<"Total Quantity Sold: "<<totqty<<endl;
  cout<<"Total Bill: "<<bill<<endl;
}
float gettotalbill() {
  return bill;
}
};
int main() {
  int n;
  cout<<"Enter number of products: ";
  cin>>n;
  product products[100];
  float grandtotal = 0;

for (int i=0;i<n;i++) {
  cout<<"\n------Products"<<(i+1)<<"Details------"<<endl;
  products[i].enterdetails();
  grandtotal += products[i].gettotalbill();
}
  cout<<"\n------All Products Details------<<endl;
  for(int i = 0; i < n ; i++) {
    products[i].displaydetails();
  }
cout<<"\nGrand Total Bill: "<<grandtotal<<endl;
return 0;
}
