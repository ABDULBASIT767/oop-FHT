#include<iostream>
#include<fstream>
using namespace std;
struct data{
	int sapid;
	int semester;
	float cgpa;
	string name;
}imp;
void display()
{
	fstream studentdata;
	studentdata.open("Sample.txt",ios::out);
	studentdata<<imp.sapid<<endl;
	studentdata<<imp.semester<<endl;
	studentdata<<imp.cgpa<<endl;
	studentdata<<imp.name<<endl;
	studentdata.close();
	
	cout<<endl;
}
int main()
{
int data;
	while (true)
	{
	cout<<"Press 1 "<<endl;
	cout<<"Press 2 "<<endl;
	cout<<"Press 3 "<<endl; 
	cout<<"Enter a Number :";
	cin>>data;
	
	switch (data)
	{
	case 1:
	cout<<"Name: ";
	cin>>imp.name;
	cout<<"Semester: ";
	cin>>imp.semester;
	cout<<"CGPA: ";
	cin>>imp.cgpa;
	cout<<"Sap ID: ";
	cin>>imp.sapid;
	cout<<endl;
	break;
	case 2:
		cout<<imp.name<<endl;
		cout<<imp.semester<<endl;
		cout<<imp.cgpa<<endl;
		cout<<imp.sapid<<endl;
		break;
	case 3:
		imp.sapid=0;
		imp.semester=0;
		imp.cgpa=0.0;
		imp.name='0';
		break;
	}
}
	return 0;
}
