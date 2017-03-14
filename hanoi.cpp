// There is no disk number in this program.
// But just follow the step of what this program tells you, you can move the disks successully.

#include <iostream>
using namespace std;

void tower(int num, char src, char dest, char sp)
{
	if (num == 1)
	{
		cout << "move disk from " << src << " to disk " << dest << endl;
	}
	else
	{
		tower(num - 1, src, sp, dest);
		tower(1, src, dest, sp);
		tower(num - 1, sp, dest, src);
	}
}

int main()
{
	int num;
	cout << "enter the number of disks:";
	cin >> num;
	cout << endl;

	tower(num, 'A', 'C', 'B');
	return 0;

}
