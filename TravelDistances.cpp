// This is a sample program caculating the speed and the hours that was travelded with your distances 
/*Emmanuel Isidahomen*/


#include <iostream> 
using namespace std;
int main()

{

	int speed, time , distance;

	const int MIN_time = 1;

		  int MAX_time = 3;

		  int num = MIN_time;

	

			  cout << "what is the speed of the vehicle in mph? " << endl;
			  cin >> speed;

			  cout << "How many hours has it traveled " << endl;
			  cin >> time;

	cout << "  Hours   Distance Traveled  " << endl;
	cout << "________________________________" << endl;

	for (int num = 1  ; num <= MAX_time; num++)
	{

		distance = speed  * num;

		cout << num << "\t\t" << distance << endl;

     }

	system ("pause");

	return 0;
}