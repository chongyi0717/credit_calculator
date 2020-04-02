#include<bits/stdc++.h>
using namespace std;
class NCKU
{
	public:
		void set_compulsory(int number,string subject);	
		int get_compulsory();
		void set_elective(int number,string subject);
		int get_elective();
		void set_general(int number,string subject);
		int get_general();
		int get_credit_need();
		void set_compulsory_haven_learn(int number);
		void set_elective_haven_learn(int number);
		void set_general_haven_learn(int number);
		int get_compulsory_haven_learn();
		int get_elective_haven_learn();
		int get_general_haven_learn();
		void comparing(string);
		vector<string>subject_compulsory;
		vector<string>subject_elective;
		vector<string>subject_general;
		vector<string>subject_compulsory_haven_learn;
		vector<string>subject_elective_haven_learn;
		vector<string>subject_general_haven_learn;

	private:
		int compulsory;
		int elective;
		int general;
		int total;
		int compulsory_haven_learn;
		int elective_haven_learn;
		int general_haven_learn;
};
