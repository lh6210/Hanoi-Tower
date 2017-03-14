
// This program displays the process of moving every disk with their no.
// It also computes the total steps of the move. 

#include <iostream>
using namespace std;

int tower(int no, char src, char dest, char sp)
{
	int count = 0;

	// base case. It only takes one step. 
	// No #1 disk is the smallest disk.
	// It counts as one step.
	if (no == 1)
	{
		cout << "move disk 1 from " << src << " to " << dest << endl;
		return 1;
	}
	else  // It generally consists of three steps. Two of them are recursive ones.
	{
		// step 1
		count += tower(no - 1, src, sp, dest);
		// step 2
		cout << "move disk " << no << " from " << src << " to " << dest <<endl;
		count += 1;
		// step 3
		count += tower(no - 1, sp, dest, src);
	}
	return count;
}


int main()
{
	int num, count;
	cout << "enter the number of disks:";
	cin >> num;
	cout << endl;
	cout << "Given pegs A, B, C and " << num << " disks on peg A." << endl; 
	cout << "Let's see how to move these disks from peg A to peg C.";
	cout << endl;

	count = tower(num, 'A', 'C', 'B');
	cout << "We need " << count << " steps to complete the move!" << endl;
	return 0;

}
