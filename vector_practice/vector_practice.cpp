#include <iostream>
#include <vector>
#include <iomanip>
int main()
{
	const int NUM_EMPLOYEES = 5;//sets a limit to the vector 
	std::vector<int>hours(NUM_EMPLOYEES); //creates the vector for the hours worked
	std::vector<double> payRate(NUM_EMPLOYEES); //creates a vector to store how much the employee's hourly pay rate
	std::vector<double> grosspay(NUM_EMPLOYEES); //creates a vector to store the gross pay
	std::cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees and their hourly rates \n";
	for (int count = 0; count < NUM_EMPLOYEES; count++)
	{
		std::cout << "enter the hours worked by employee # " << count + 1 << ": ";
		std::cin >> hours[count];
		std::cout << "Enter the hourly pay rate by employee #" << count + 1 << ": ";
		std::cin >> payRate[count];
		std::cout << "\n";
	}
	std::cout << "\n The total gross pay for the empoyees is: \n";
	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	for (int count = 0; count < NUM_EMPLOYEES; count++)
		grosspay[count] = hours[count] * payRate[count];
	for (int count = 0; count < NUM_EMPLOYEES; count++)
		std::cout << "employee #" << count + 1 << "earned:" << grosspay[count] << std::endl;
	system("pause");
	return 0;
}