#include<iostream>
using namespace std;

string task[10];
int t;
bool status[10];
	void addtasks(){
	
	cout<<"How many tasks do you want to enter?"<<endl;
	cin>>t;
	cout<<"Enter Tasks Below..."<<endl;
	for(int i=0;i<t;i++){
		cin>>task[i];
	}
}
	void removetasks(){
		int d;
		cout<<"Enter Task Number "<<endl;
		cin>>d;
		for(int i=0;i<t;i++){
			if(i==d-1){
				task[i]="";
				cout<<"Task Deleted..."<<endl;
			}
		}
	}
	void ViewTasks(){
		
		for(int i=0;i<t;i++){
			if(status[i]==0){
				cout<<"Not Completed"<<endl;
			}
			else if(status[i]==1){
				cout<<"Completed"<<endl;
			}
			cout<<i+1<<" "<<task[i]<<endl;
			
		}
	}
	void mark(){
		int c;
		cout<<"Enter Task Number "<<endl;
		cin>>c;
		for(int i=0;i<t;i++){
			if(i==c-1){
				status[i]==1;
				//1 means completed
				cout<<"Marked as Completed..."<<endl;
			}
			else{
				status[i]=0;
			}
		}
	}
int main(){
	addtasks();
	ViewTasks();
    mark();
    removetasks();
    ViewTasks();
	return 0;
}
