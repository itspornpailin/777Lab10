#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	char grade;
	int numStu = 0;
	int i = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i++ << "]: ";
		cin >> grade;
		if(grade == 'A'){
			count[0]++;
			numStu++;
		}else if(grade == 'B'){
			count[1]++;
			numStu++;
		}else if(grade == 'C'){
			count[2]++;
			numStu++;
		}else if(grade == 'D'){
			count[3]++;
			numStu++;
	    }else if(grade == 'F'){
			count[4]++;
			numStu++;
		}else if(grade != '0'){
			cout << "Wrong input. Please input again.\n";
			i = i - 1;
		}
	}while(grade != '0');

	cout << "In total " << numStu << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
