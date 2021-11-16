
// using switch case to show tametable

#include <iostream>
using namespace std;

int main (){
	int opt;
	
	cout << "Hello. This is the timetable you will be using.";
	cout << "\n1. Mon\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday"<<endl<<endl; 
	cout<< " Select the day of choice (e.g. 1, 2, 3, 4, 5.)"<<endl;
	cin>>opt;
	
	switch (opt){
		
		case 1:{
			cout<<"Monday Classes\n...................."<<endl;
			cout<<"\t1. DBIT 1106: Mathematics for Business."<<endl;
			cout<<"\t2. DBIT 1104: Ethics"<<endl;
			break;
		}
				
			
		case 2:{
			cout<<"Tuesday Classes\n..................."<<endl;
			cout<<"\t2. DBIT 1102: Intro to Programming"<<endl;
			break;
		}
		
	 
		case 3:{
			cout<<"Wednesday Classes\n..................."<<endl;
			cout<<"\t1. DBIT 1206: Business Finance"<<endl;
			break;
		}
			
		
		case 4:{
			cout<<"Thursday Classes\n..................."<<endl;
		    cout<<"\t1. DBIT 1106: Object Orriented Programing"<<endl;
			break;
		}
		    
		    
		case 5:{
			cout<<"Friday Classes\n..................."<<endl;
			cout<<"\t1. DBIT 1106: Business Comunication"<<endl;
			break;
		}
			
		
		default:
		    cout<<"Invalid Input";	    
	}
	return 0;
}
