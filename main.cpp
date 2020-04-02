#include <bits/stdc++.h>
#include "ncku_credit.h"
using namespace std;

NCKU ncku;
int main()
{
	int credit,number;
	string subject;
	string subject_get;
	ifstream inFile("credit_need",ios::in);
	if(!inFile)
	{
		cerr<<"failed to open!"<<endl;
		exit(0);
	}	
	while(inFile>>number>>credit)
	{
		getline(inFile,subject);
		if(number==1)
			ncku.set_compulsory(credit,subject);
		else if(number==2)
			ncku.set_elective(credit,subject);
		else if(number==3)
			ncku.set_general(credit,subject);	
	}	
	ifstream Filein("already_learn",ios::in);
	ncku.subject_compulsory_haven_learn=ncku.subject_compulsory;
	if(!Filein)
	{
		cerr<<"failed to open!"<<endl;
		exit(0);
	}
	while(Filein>>number>>credit)
	{
		getline(Filein,subject_get);
		if(number==1)
			ncku.set_compulsory_haven_learn(credit);
		else if(number==2)
			ncku.set_elective_haven_learn(credit);
		else if(number==3)
			ncku.set_general_haven_learn(credit);	
		ncku.comparing(subject_get);
	}
	int input;
	while(1)
	{
		cout<<"You can input : "<<endl;
		cout<<"1.compulsory need to learn"<<endl;
		cout<<"2.elective need to learn"<<endl;
		cout<<"3.general need to learn"<<endl;
		cout<<"4.credit of compulsory need to learn"<<endl;
		cout<<"5.credit of elective need to learn"<<endl;
		cout<<"6.credit of general need to learn"<<endl;
		cout<<"7.total credit need to learn"<<endl;
		cout<<"8.compulsory haven't learn"<<endl;
		cout<<"9.elective haven't learn"<<endl;
		cout<<"10.general haven't learn"<<endl;
		cout<<"11.credit of compulsory haven't learn"<<endl;
		cout<<"12.credit of elective haven't learn"<<endl;
		cout<<"13.credit of general haven't learn"<<endl;
		cout<<"14.exit"<<endl<<"Input:";
		cin>>input;
		if(input==1)
			for(int i=0;i<ncku.subject_compulsory.size();i++)
				cout<<i<<":"<<ncku.subject_compulsory.at(i)<<endl;
		else if(input==2)
			for(int i=0;i<ncku.subject_elective.size();i++)
				cout<<ncku.subject_elective.at(i)<<endl;
		else if(input==3)
			for(int i=0;i<ncku.subject_general.size();i++)
				cout<<ncku.subject_general.at(i)<<endl;
		else if(input==4)
			cout<<ncku.get_compulsory()<<endl;
		else if(input==5)
			cout<<ncku.get_elective()<<endl;
		else if(input==6)
			cout<<ncku.get_general()<<endl;
		else if(input==7)
			cout<<ncku.get_credit_need()<<endl;
		else if(input==8)
			for(int i=0;i<ncku.subject_compulsory_haven_learn.size();i++)
				cout<<i<<":"<<ncku.subject_compulsory_haven_learn.at(i)<<endl;
		else if(input==9)
			for(int i=0;i<ncku.subject_elective_haven_learn.size();i++)
				cout<<i<<":"<<ncku.subject_elective_haven_learn.at(i)<<endl;
		else if(input==10)
			for(int i=0;i<ncku.subject_general_haven_learn.size();i++)
				cout<<i<<":"<<ncku.subject_general_haven_learn.at(i)<<endl;
		else if(input==11)
			cout<<ncku.get_compulsory()-ncku.get_compulsory_haven_learn()<<endl;
		else if(input==12)
			cout<<ncku.get_elective()-ncku.get_elective_haven_learn()<<endl;
		else if(input==13)
			cout<<ncku.get_general()-ncku.get_general_haven_learn()<<endl;
		else if(input==14)
			return 0;
	}
	
}



	//cout<<"compulsory="<<ncku.get_compulsory()<<endl<<"elective="<<ncku.get_elective()<<endl<<"general="<<ncku.get_general()<<endl<<"total="<<ncku.get_credit_need()<<endl;
