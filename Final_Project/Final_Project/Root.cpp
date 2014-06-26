#include "Root.h"
#include <iostream>
#include <cmath>
using namespace std;

Root::Root(int new_a){
	a = new_a;
}

int Root::getA(){
	return a;
}

double Root::getRoot(){ // User will enter in perfect square to get desired result
	return sqrt(a);
}