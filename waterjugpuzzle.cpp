/*******************************************************************************
 * Name        : waterjugpuzzle.cpp
 * Author      : Kevin Furlong, Jonathan Scrivan, and Henry Thomas
 * Date        : June 12th 2015
 * Description : Determining the most efficient way to solve the classic water
 * 				 jug problem. Given a goal and jug capacities.
 * Pledge      : We pledge our honor that we have abided by the Stevens Honor System
 * 				 Kevin Furlong, Henry Thomas, Jonathan Scrivan
 ******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <queue>
#include "State.cpp"

using namespace std;

State cap, goal, initial;
queue q;
bool visited[][];

void start_bfs(){
	//Create a new initial state
	//Create a goal state.
	//Create a capacities state
}

void bfs(State curr){
	int a=curr.a(),b = curr.b(), c= curr.c();
	//C->A
	if( c!=0 && a!=cap.a()){
		int amtMoved = min(c, (cap.a()-a);
		if(!visited[a+amtMoved][b]){
			new State(a+amtMoved,b,c-amtMoved, curr);
		}
	}
		createState();
}

int main(int argc, char * const argv[]){
	//Error check for correct number of arguments
	if (argc != 6){
		cout << "Usage: ./waterjugpuzzle <cap A> <cap B> <cap C> <goal A> <goal B> <goal C>" << endl;
	}

	//argv from 1 to 3 should contain capacitys for a, b, and c
	//argv from 4 to 6 should contain goals for a, b, and c
	int input = {atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6])};

	//Error check that all inputs are integers
	for (int i = 0; i <= input.length(); i++){
		if ((input[i] != int) or input[i] <= 0){
				cerr << "Error: Invalid capacity '" << input[i] << "' for jug A." << endl;
			}

		//Check that capacity isnt less than the goal
		//TODO: This wont work exactly
		if (input[i] < input[i+2]){
			cerr << "Error: Goal cannot exceed capacity of jug A, B, or C."
		}
	}

	//Check that sum of goal state is equal to capacity of C
	if (input[3] < (input[4] + input[5] + input[6])){
		cerr << "Error: Total gallons in goal state must be equal to the capacity of jug C."
	}

	return 1;
}
