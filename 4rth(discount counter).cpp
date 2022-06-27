#include<iostream>
using namespace std;
int main()
{   
	int pc,oa,dis,amt;
	cout<<"Enter product code ";
	cin>>pc;
	cout<<"Order of ------in Rs ";
	cin>>oa;
	switch(pc){
		case 1: if(1000<=oa){
			dis=oa*15/100;
			amt=oa-dis;
		}
			else{
				dis=0;
				amt=oa;
			}
			break;
		case 2: if(500<=oa){
			dis=oa*10/100;
			amt=oa-dis;
		}
			else{
				dis=0;
				amt=oa;
			}
			break;
		case 3:  if(100<=oa){
			dis=oa*15/100;
			amt=oa-dis;
		}
			else{
				dis=0;
				amt=oa;
			}
			break;
		default:dis=0;
				amt=oa;
	}
	cout<<"You got "<<dis<<"Rs discount and you have to pay "<<amt<<"rs";
}
