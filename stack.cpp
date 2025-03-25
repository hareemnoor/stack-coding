#include<iostream>
using namespace std;
class stack{
	private:
		int top;
		int stk[5];
		public:
			
			stack(){
			
				top=-1;
				
			}
			void push(int x){
				if(top==4){
					cout<<"stack overflow";
					return ;
				}
			top=top+1;
			stk[top]=x;
			}
			void pop(void){
				int var;
				if(top==-1){
					cout<<"stack is empty";
					return;
					
				}
				var=stk[top];
				stk[top]=NULL;
				top=top-1;
				cout<<"value"<<var<<"is remove";
				
			}
			void display(void){
				if(top==-1){
					cout<<"stack is empty";
					return;
					
				}
				for(int x=top;x>=0;x--){
					cout<<stk[x]<<endl;
				}
				
			}
			
};

int main(){
stack stk;
int n,opt,loop=1;
while(loop){
	cout<<"press 1 for push"<<endl;
		cout<<"press 2 for pop"<<endl;
			cout<<"press 3 for display"<<endl;
				cout<<"press 4 for exit"<<endl;
				cin>>opt;
				switch(opt){
					case 1:
						cout<<"1 value in stack";
						cin>>n;
						stk.push(n);
						break;
						
							case 2:
						cout<<"2 value in stack";
						
						stk.pop();
						break;
							case 3:
						cout<<"3 value in stack";
						
						stk.display();
						break;
							case 4:
						cout<<"4 value in stack";
						
						loop=0;
						break;
				}
}



return 0;
}
