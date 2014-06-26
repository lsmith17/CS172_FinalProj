#include "Pythagorean.h"
#include <iostream>
#include <cmath>
using namespace std;

Pythagorean::Pythagorean(int new_a, int new_b){
	a = new_a;
	b = new_b;
}

int Pythagorean::getA(){
	return a;
}

int Pythagorean::getB(){
	return b;
}

double Pythagorean::getHypotenuse(){ // Returns the hypotenuse of any right triangle with both shorter sides given
	return sqrt((a*a) + (b*b));
}