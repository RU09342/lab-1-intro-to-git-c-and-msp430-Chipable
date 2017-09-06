/*
Robert Page
Lab 1 Assignment 1
Calculator Functions
*/

#include "math.h"

//calculator functions
int math(int num1, int num2, char Operator){
	switch (Operator){
	case '+' : 
		return (num1 + num2);
		break;
	case '-' : 
		return (num1 - num2);
		break;
	case '*' : 
		return (num1 * num2);
		break;
	case '/' : 
		return (num1 / num2);
		break;
	case '%' : 
		return (num1 % num2);
		break;
	}

}