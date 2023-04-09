#include <iostream>
using namespace std;

class Duration {
    
    	int days;
        int hours;
        int minutes;
        int seconds;
    public:
        Duration(int inputSeconds) {
        	days = inputSeconds/86400;
        	inputSeconds -= days*86400;
            hours = inputSeconds/3600;
            inputSeconds -= hours*3600;
            minutes = inputSeconds/60;
            inputSeconds -= minutes*60;
            seconds = inputSeconds;
        }
        void display() {
            cout << " Duration: "<<endl;
			cout << days << "days,"<<endl;
			cout<< hours << " hours, "<<endl;
			cout << minutes << " minutes, "<<endl;
			cout << seconds << " seconds" << endl;
        }
};

int main() {
    int inputSeconds;
    cout << "ENTER NUMBER  OF SECONDS: ";
    cin >> inputSeconds;
    Duration td(inputSeconds);
    td.display();
    return 0;
}
