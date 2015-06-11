/*
 * waterjugpuzzle.cpp
 *
 *  Created on: Jun 10, 2015
 *      Author: JScrivan
 */
#include <iostream>
#include <cctype>
#include <sstream>
#include <vector>
#include <queue>
#include <cmath>
#include <iomanip>

using namespace std;

class Jugs
{
public:
	Jugs(int cap_A, int cap_B, int cap_C, int goal_A, int goal_B, int goal_C)
	{
		capacities_.push_back(cap_A);
		capacities_.push_back(cap_B);
		capacities_.push_back(cap_C);
		goals_.push_back(goal_A);
		goals_.push_back(goal_B);
		goals_.push_back(goal_C);//these six lines of code push the inputs into their respective vectors
		initial_.push_back(0);
		initial_.push_back(0);
		initial_.push_back(cap_C);


	}

private:
	vector<unsigned int> capacities_,goals_,initial_;//make private vectors each with the their 3 respective inputs
	queue <int> q;

	vector< vector<unsigned int> > test(vector<unsigned int> curr)
	{
		vector<unsigned int> temp_storage;
		vector< vector<unsigned int> > rtrn;
		if (curr.at(0) < capacities_.at(0) && curr.at(2) > 0)//if jug a is not full and jug b has something in it
		{
			if (curr.at(2) - capacities_.at(0) > 0)//if Jug 3 has a greater amount than the capacity of Jug 1
			{
				temp_storage.push_back(capacities_.at(0));//set Jug a to full capacity
				temp_storage.push_back(curr.at(1));//keep Jug B the same
				temp_storage.push_back(curr.at(2) - (capacities_.at(0) - curr.at(0)));//subtract what Jug C gave away
				//but also keeping in mind there could have been some liquid in Jug A prior to pouring
			}
			else//if Jug 3 has less liquid than Jug 1
			{
				if (curr.at(0) + curr.at(2) <= capacities_.at(0))//if Jug C + Jug A do not have enough to fill
					//Jug A to capacity:
				{
					temp_storage.push_back(curr.at(0) + curr.at(2));//set Jug A to Jug A + Jug C
					temp_storage.push_back(curr.at(1));//keep Jug B the same
					temp_storage.push_back(curr.at(2) - (capacities_.at(0) - curr.at(0)));//subtract what Jug C gave away
									//but also keeping in mind there could have been some liquid in Jug A prior to pouring
				}
				else//if Jug C + Jug A is bigger than Jug A's capacity
				{
					temp_storage.push_back(capacities_.at(0));//set Jug A to Full Capacity
					temp_storage.push_back(curr.at(1));//Keep Jug B the same
					temp_storage.push_back(curr.at(2) - curr.at(0));//Subtract what was given to A
				}
			}
			rtrn.push_back(temp_storage);
			temp_storage.clear();
		}
	}
	return rtrn;
};


int main(int argc, char * const argv[])
{
	Jugs l(7, 8, 9, 4, 5, 6);

	/*if (argc != 7)
	{
		cerr << "Usage: ./unique <string>" << endl;
		return 1;
	}*/

}
