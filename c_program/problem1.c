//Program Name: Problem 1: Football Score Possibilities
//Brief Description: This program produces all possible combinations of scoring plays given by a NFL score from the user. The program keeps going until the player puts in a input of 0 or 1.
//Input: The input is a valid intger value from the user.
//Ouput: The ouput will be all possible combinations of scorinh plays as long as the NFL score input is not 0 or 1. If the input is 0 or 1, the progrma will ends as result.
//All collaborators: None
//Other Sources:Github Copilot and ChatGPT BroCode from Youtube, Stack Overflow, and GeekforGeeks
//Author: Ryan Antony Pereira
//Creation Date: 3/20/2025
//Last Modified Date: 3/23/2025

//GitHub Copilot was used to help code in the sense, when I was writing my code, it woudl help finsish or complete it. A lot of the comments were initally done by Github Copilot. I went back and rewrote all comments for every single line in the program.
//ChaTtGPT was used in code error resolve, if I had any error in the coding process, I upload my code to see what was wrong and would correct it myself.

//Included the header file library that enables input and output functionality
#include <stdio.h>

//Brocode helped me in helping me try to define structures. Specifically getting the attributes to work.https://www.youtube.com/watch?v=oKXP1HZ8xIs
//ChatGPT helped in removing locating errors in making the structure.

//Defineng a structure called score_combination to hold all the information of the score combination of the scoring plays
struct score_combination {
    //Declares the size of the score_combination to that stores the number of scoring plays in the score combination
	int size;
    //Declares the list of the score_combination to store all individual socrig palys.
	int list[100];
    //Declares the total scores of the entire score combiantion
	int total_score;
    //Declares the touchdown amount of the score combination to keep track of the amount of touchdown points are in the score combination
	int touchdown_point_amount;
    //Declares the field goal amount of the score combination to keep track of the amount of field goal points are in the score combination
	int field_goal_point_amount;
    //Declares the safety amount of the score combination to keep track of the amount of safety points are in the score combination
	int safety_point_amount;
    //Declares the touchdown plus two conversion amount of the score combination to keep track of the amount of touchdwon plus two two conversion points are in the score combination
	int touchdown_plus_two_conversion_point_amount;
    //Declares the touchdown plus point field goal amount of the score combination to keep track of the amount of touchdown plus point field goal points are in the score combination
	int touchdown_plus_point_field_goal_point_amount;
};


//Brocode helped me in helping me try to define structures. Specifically getting the attributes to work.https://www.youtube.com/watch?v=oKXP1HZ8xIs
//ChatGPT helped in removing locating errors in making the structure.

//Defineng a structure called nfl point system  to hold all the information of the the point system of the NFL scoring plays
struct nfl_point_system {
    //Declares the size of the nfl point systems that stores all point information
	int size;
    //Declared the touchdown point
	int touchdown_point;
    //Declared the field goal point
	int field_goal_point;
    //Declared the safety point
	int safety_point;
    //Declared the touchdown plus two conversion point
	int touchdown_plus_two_conversion_point;
    //Declared the touchdown plus point field goal point
	int touchdown_plus_point_field_goal_point;
    //Declared the point list to store all the point in th NFL point system.
	int point_list[20];

};

//ChatGPT and this article from GeeksforGeeks: https://www.geeksforgeeks.org/combinations-with-repetitions/, helped in creating an algorithm for finding all possible combination that make up a specifc sum form a distinct set of numbers.
//The alogirhtm structure below in this function is based on the article form GeeksforGeeks and Chatgpt, I did it my way using structures and switch statements.
//Chatgpt also helped me with catchign duplicated combination such as getting combination like 3 2 2 and 2 2 3 or even 2 3 2. WIth the last point check suggestion

//A void function that returns nothing. Finds possible combinations with the integer nfl score, structure nfl_point_system as current point system, structure score combination as current combo, and integer last point as arguments.
void find_combination(int nfl_score,struct nfl_point_system current_point_system,struct score_combination current_combo, int last_point) {

    //ChatGPT and GeeksforGeeks suggested this check
	//If the current combo total score is equal to nfl score, then its a valid combination to be printed out
	if(current_combo.total_score == nfl_score) {
        //Prints the combination of the NFL scoring plays
		printf("Combination: ");
        //For in loop to go through eaach scoring play point in the current combo, as as long as it does not exceed the size of the current combo, iterating throughe ahc point.
		for(int i = 0; i< current_combo.size; i++) {
            //Switch staement to check the current combo list at i index, to see which nfl distinct point it mathces to increment the amount of that specific point in the current combo
			switch(current_combo.list[i]) {
            //If the value at index i of the list in the current combo is 6, then it is a touchdown point, so it increments the touchdown amount of the current combo
			case 6:
                //Increments the current combo's touchdown amount
				current_combo.touchdown_point_amount++;
                //Breaks out of the switch statement
				break;
            //If the value at index i of the list in the current combo is 3, then it is a field goal point, so it increments the field goal amount of the current combo
			case 3:
                //Increments the current combo's field goal amount
				current_combo.field_goal_point_amount++;
                //Breaks out of the switch statement
				break;
            //If the value at index i of the list in the current combo is 2, then it is a safety point, so it increments the safety amount of the current combo
			case 2:
                //Increments the current combo's safety amount
				current_combo.safety_point_amount++;
                //Breaks out of the switch statement
				break;
            //If the value at index i of the list in the current combo is 8, then it is a touchdown plus two conversion point, so it increments the touchdown plus two conversion amount of the current combo
			case 8:
                //Increments the current combo's touchdown plus two conversion amount
				current_combo.touchdown_plus_two_conversion_point_amount++;
                //Breaks out of the switch statement
				break;
            //If the value at index i of the list in the current combo is 7, then it is a touchdown plus point field goal point, so it increments the touchdown plus point field goal amount of the current combo
			case 7:
                //Increments the current combo's touchdown plus point field goal amount
				current_combo.touchdown_plus_point_field_goal_point_amount++;
                //Breaks out of the switch statement
				break;
			}
		}
        //Prints the current combo score of the scorinh plays to the user
		printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety \n",current_combo.touchdown_plus_two_conversion_point_amount,current_combo.touchdown_plus_point_field_goal_point_amount,current_combo.touchdown_point_amount,current_combo.field_goal_point_amount,current_combo.safety_point_amount);
		//Returns out of the function
		return;

	}
    //ChatGPt and GeeksforGeeks suggested this check to make sure the score did not exceed the nfl score
    //If the current combo score is greater than the NFL score, then it returns as it execessd the nfl score.
	if(current_combo.total_score > nfl_score) {
        //Returns out of the function
		return;
	}
    //ChatGPt and GeeksforGeeks suggested this check to set the current combo list array to the curretn point system point list array, and for utilizing recurse function to look for all possible functions.
    //ChatGPT helped me in removing any duplicated combination by suggestin the last point paramaeter and check to make sure this does not happend

    //If the current combo score is greater than the NFL score, then it returns as it execessd the nfl score.

	//Iterates through each point in the in the current point system size
	for(int point = 0; point < current_point_system.size; point++) {
	    //Checks to see if the curretn point system point index at the point list is greater than or equal to last point value, to maake sure duplicat combination wont make it in. Such as 3 2 2. Is the same a 2 2 3 or 2 3 2.
		if(current_point_system.point_list[point] >= last_point) {
		    //Sets the current combo list at the index of the curretn combo size to the value of the current point system at point index of the point list
			current_combo.list[current_combo.size] = current_point_system.point_list[point];
			//The current combo size is incremented as the sizr is icnreased of the additon of a scoring play
			current_combo.size++;
			//The current combo total score adds the value of the point at the index of the current point system point list to the total score
			current_combo.total_score = current_combo.total_score + current_point_system.point_list[point];
			//Recursively calls the find combination function with nfl score, curretn point system and current combo and the value of the point index at point list of the curretn point sytemt as last point as arguements for the function.
			find_combination(nfl_score,current_point_system,current_combo,current_point_system.point_list[point]);
			//The current combo size is decremented as the sizr is decreased of the subtaction of a scoring play, in order to chekc the next combination
			current_combo.size--;
			//The current combo total score subtracts the value of the point at the index of the current point system point list from the total score
			current_combo.total_score = current_combo.total_score - current_point_system.point_list[point];
		}
	}
}


//The main function is the entyr point into the whole program itself.
int main() {


    //ChatGPt helped me in initalizing the structures and the varibales, as it was producing errors as I was making it, so it helped in debugging.

    //Declares and initalizes a nfl_point_system structure called nfl point system to store all the nfl point system information
	struct nfl_point_system nfl_point_system;
    //Initializes the size of the nfl point system to 5 as there only 5 distinct point values in the NFL point system structure
	nfl_point_system.size = 5;
    //Initializes the touchdown point to 6
	nfl_point_system.touchdown_point = 6;
    //Initializes the field goal point to 3
	nfl_point_system.field_goal_point = 3;
    //Initializes the safety point to 2
	nfl_point_system.safety_point = 2;
    //Initializes the touchdown plus two conversion point to 8
	nfl_point_system.touchdown_plus_two_conversion_point = 8;
    //Initializes the touchdown plus point field goal point to 7
	nfl_point_system.touchdown_plus_point_field_goal_point = 7;
    //Initializes the point list at index 0 to the touchdown point
	nfl_point_system.point_list[0] = nfl_point_system.touchdown_point;
    //Initializes the point list at index 1 to the field goal point
	nfl_point_system.point_list[1] = nfl_point_system.field_goal_point;
    //Initializes the point list at index 2 to the safety point
	nfl_point_system.point_list[2] = nfl_point_system.safety_point;
    //Initializes the point list at index 3 to the touchdown plus point field goal point
	nfl_point_system.point_list[3] = nfl_point_system.touchdown_plus_point_field_goal_point;
    //Initializes the point list at index 4 to the touchdown plus two conversion point
	nfl_point_system.point_list[4] = nfl_point_system.touchdown_plus_two_conversion_point;

    //ChatGPt helped me in initalizing the structures and the varibales, as it was producing errors as I was making it, so it helped in debugging.

    //Declares and inializes a score combination strucutre named current score combo to hold all information regarding to the current score cobination based on the NFl score playings
	struct score_combination current_score_combo;
    //Initializes the size of the current score combination to 0
	current_score_combo.size = 0;
    //Initializes the total of the current score combination to 0
	current_score_combo.total_score = 0;
    //Initializes the touchdown point amount of the current score combination to 0
	current_score_combo.touchdown_point_amount = 0;
    //Initializes the field goal point amount of the current score combination to 0
	current_score_combo.field_goal_point_amount = 0;
    //Initializes the safety point amount of the current score combination to 0
	current_score_combo.safety_point_amount = 0;
    //Initializes the touchdown plus point field goal point amount of the current score combination to 0
	current_score_combo.touchdown_plus_point_field_goal_point_amount = 0;
    //Initializes the touchdown plus two conversion point amount of the current score combination to 0
	current_score_combo.touchdown_plus_two_conversion_point_amount = 0;
    //Declares a integer user nfl score to store the NFL score from the user
	int user_nfl_score;
    //Prints the the user that inputting 0 or 1 will stop the program
    printf("Enter 0 or 1 to STOP\n");
    //Prints the user to the enter the NFL score
	printf("Enter your NFL score: ");
    //Scans the user input and stores in the user nfl score
	scanf("%d",&user_nfl_score);
    //While loop to to continue as long as the user nfl score is not equal to 1 or 0
	while(user_nfl_score != 0 && user_nfl_score != 1) {

        //Exeucutes the find combination function that takes in a user nfl score,nfl point sytem, and current score combo argumenyt, and last point set to 0
		find_combination(user_nfl_score,nfl_point_system,current_score_combo,0);
        //Prints the the user that inputting 0 or 1 will stop the program
		printf("Enter 0 or 1 to STOP\n");
        //Prints the user to the enter the NFL score
		printf("Enter your NFL score: ");
        //Scans the user input and stores in the user nfl score
		scanf("%d",&user_nfl_score);
	}
    //Returns 0 to indicate the program ran smoothly
	return 0;
}