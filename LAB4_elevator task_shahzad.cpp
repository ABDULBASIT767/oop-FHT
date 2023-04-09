#include<iostream>
using namespace std;
class elevator{
	private:
		string companyname;
		int maxload;
		string currentlocation;
		string color;
		int model;
		int ID;
	//null constructor
		public:
		elevator(){
			this->companyname = " ";
			this->maxload = 0;
			this->currentlocation = " ";
			this->color=" "; 
			this->model=0;
			this->ID=0;
			cout<<"null constructor is called:"<<endl;
		}	
    elevator(string companyname,int maxload,string currentlocation,string color,int model,
		int ID){
			this->companyname = companyname;
			this->maxload = maxload;
			this->currentlocation = currentlocation;
			this->color = color;
			this->model = model;
			this->ID = ID;
			cout<<"parametric constructor is called:"<<endl;
		}	
		~elevator(){
			cout<<"destructor is called:"<<endl;
		}
		void getcompanyname(string companyname){
			this->companyname = companyname;
		}			
		string setcompanyname(){
			return companyname;
		}
		void getmaxload(int maxload){
			this->maxload = maxload;
		}			
		int setmaxload(){
			return maxload;
		}
			void getcurrentlocation(string currentlocation){
			this->currentlocation = currentlocation;
		}			
		string setcurrentlocation(){
			return currentlocation;
		}
			void getcolor(string color){
			this->color = color;
		}			
		string setcolor(){
			return color;
		}
			void getmodel(int model){
			this->model = model;
		}			
		int setmodel(){
			return model;
		}	
		void getID(int ID){
			this->ID = ID;
		}			
		int setID(){
			return ID;
		}
		void display(){
			cout<<"companyname:"<<companyname<<endl;
			cout<<"maxload:"<<maxload<<endl;
			cout<<"current location:"<<currentlocation<<endl;
			cout<<"color:"<<color<<endl;
			cout<<"model:"<<model<<endl;
			cout<<"ID:"<<ID<<endl;
		}
	};
		int main(){
	string companyname;
		int maxload;
		string currentlocation;
		string color;
		int model;
		int ID;
		cout<<"companyname:"<<endl;
		cin>>companyname;
		cout<<"maxload:"<<endl;
		cin>>maxload;
	    cout<<"currentlocation:"<<endl;
		cin>>currentlocation;
		cout<<"color:"<<endl;
		cin>>color;
		cout<<"model:"<<endl;
		cin>>model;
		cout<<"ID:"<<endl;
		cin>>ID;
		elevator s1;
		s1.getcompanyname(companyname);
		s1.getmaxload(maxload);
		s1.getcurrentlocation(currentlocation);
		s1.getcolor(color);
		s1.getmodel(model);
		s1.getID(ID);
		return 0;
}
