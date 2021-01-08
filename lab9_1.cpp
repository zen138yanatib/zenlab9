#include<iostream>
#include<string>
using namespace std;

int main(){
    char grade;
    int num = 1;
	int count[5] = {0,0,0,0,0}; 
    int A = 0, B = 1,C = 2,D = 3,F = 4;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student " << "["<< num << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){
			count[A]++;
            num++;
		}else if(grade == 'B'){ 
			count[B]++;
            num++;
        }else if(grade == 'C'){
            count[C]++;
            num++;
        }else if(grade == 'D'){
            count[D]++;
            num++;
        }else if(grade == 'F'){
            count[F]++;
            num++;
        }else if(grade == '0'){
            break;
		}else{ 
            cout << "Wrong input. Please input again.\n";
		}
    }while(true);
	
	
	
	cout << "In total " << num-1 << " students.\n";
	cout << "A = " << count[A] <<", ";
	cout << "B = " << count[B] <<", ";	
	cout << "C = " << count[C] <<", ";
    cout << "D = " << count[D] <<", ";
    cout << "F = " << count[F];
	return 0;
}


