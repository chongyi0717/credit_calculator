#include<bits/stdc++.h>
#include "ncku_credit.h"
using namespace std;

void NCKU::set_compulsory(int number,string subject)
{
	this->compulsory+=number;
	subject_compulsory.push_back(subject);	
}

int NCKU::get_compulsory()
{
	return this->compulsory;
}
void NCKU::set_elective(int number,string subject)
{
	this->elective+=number;
	subject_elective.push_back(subject);	
}

int NCKU::get_elective()
{
	return this->elective;
}

void NCKU::set_general(int number,string subject)
{
	this->general+=number;
	subject_general.push_back(subject);	
}

int NCKU::get_general()
{
	return this->general;
}


int NCKU::get_credit_need()
{
	this->total=this->compulsory+this->elective+this->general;
	return this->total;
}
void NCKU::set_compulsory_haven_learn(int number)
{
	this->compulsory_haven_learn+=number;
}
void NCKU::set_elective_haven_learn(int number)
{
	this->elective_haven_learn+=number;
}
void NCKU::set_general_haven_learn(int number)
{
	this->general_haven_learn+=number;
}
int NCKU::get_compulsory_haven_learn()
{
	return this->compulsory_haven_learn;
}
int NCKU::get_elective_haven_learn()
{
	return this->elective_haven_learn;
}
int NCKU::get_general_haven_learn()
{
	return this->general_haven_learn;
}

void NCKU::comparing(string subject_get)
{
	for(int i=0;i<subject_compulsory_haven_learn.size();i++)
		if(subject_get==subject_compulsory_haven_learn.at(i))
			subject_compulsory_haven_learn.erase(subject_compulsory_haven_learn.begin()+i);
	for(int i=0;i<subject_elective_haven_learn.size();i++)
		if(subject_get==subject_elective_haven_learn.at(i))
			subject_elective_haven_learn.erase(subject_elective_haven_learn.begin()+i);
	for(int i=0;i<subject_general_haven_learn.size();i++)
		if(subject_get==subject_general_haven_learn.at(i))
			subject_general_haven_learn.erase(subject_general_haven_learn.begin()+i);
}
