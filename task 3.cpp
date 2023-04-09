#include<iostream>
using namespace std;
class student
{
	public:
	int sapid;
	int semester;
	string name;
	float gpa;
	bool ismale;
	student()
	{
		 sapid=0;
		semester=0;
		name="";
		gpa=0.0;
		ismale=true;		
	}
	student(int sapid,string name,int smester,float gpa,bool ismale)
	{
		this->sapid=sapid;
		this->name=name;
		this->semester=semester;
		this->gpa=gpa;
		this->ismale=ismale;
	}
	student(int sapid,string name)
	{
		this->sapid=sapid;
		this->name=name;
	}
	student(int sapid,string name,float gpa)
	{
		this->sapid=sapid;
		this->name=name;
		this->gpa=gpa;
	}
	student(int sapid,string name,bool ismale)
	{
		this->sapid=sapid;
		this->name=name;
		this->ismale=ismale;
	}
	student(student &std)
	{
		sapid=std.sapid;
		semester=std.semester;
		name=std.name;
		gpa=std.gpa;
		ismale=std.ismale;	
	}
	~student()
	{
		cout<<"DISTRUCTOR OF STUDENT IS RUNNING"<<endl;
	} 
};
int main()
{
	student s1(46658,"basit",2,3.48,true);
	student s2(45463,"umair",2,3.28,true);
	student s3(56789,"huma",2,2.48,false);
	student s4(43354,"fizza",2,2.98,false);
	student s5(s4);
	cout<<"Details of Student 1 : "<<endl<<s1.sapid<<endl<<s1.name<<endl<<s1.semester<<endl<<s1.gpa<<endl<<s1.ismale;
	cout<<"Details of Student 2 : "<<endl<<s1.sapid<<endl<<s1.name<<endl<<s1.semester<<endl<<s1.gpa<<endl<<s1.ismale;
	cout<<"Details of Student 3 : "<<endl<<s1.sapid<<endl<<s1.name<<endl<<s1.semester<<endl<<s1.gpa<<endl<<s1.ismale;
	cout<<"Details of Student 4 : "<<endl<<s1.sapid<<endl<<s1.name<<endl<<s1.semester<<endl<<s1.gpa<<endl<<s1.ismale;
	return 0;	
}
