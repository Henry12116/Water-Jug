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
