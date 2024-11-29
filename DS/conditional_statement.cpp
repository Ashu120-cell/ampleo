#include<iostream>
using namespace std;
//int main(){
//	int num;
//	cout<<"num"<<endl;
//	cin>>num;
//	if(num%2==0){
//		cout<<"even"<<endl;
//	}
//	else{
//		cout<<"odd"<<endl;
//	}
//	return 0;
//}

int main(){
	int weight , height , bmi;
	cout<<"enter your weight in kg"<<endl;
	cin>>weight;
	cout<<"enter your height in m"<<endl;
	cin>>height;
	bmi = weight/(height*height);
	cout<<"your BMI is"<<weight<<endl;
	if(bmi<16){
		cout<<"evenly under weight"<<endl;
	}else if(bmi>16 && bmi<19){
		cout<<"you are under weight"<<endl;
	}else if(bmi>19 && bmi<<24){
		cout<<"Normal"<<endl;
	}else{
		cout<<"Overweight"<<endl;
	}
	return 0;
}




















