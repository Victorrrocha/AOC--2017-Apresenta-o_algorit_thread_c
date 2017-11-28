#include <iostream>
#include <thread>
using namespace std;


void function_1(){
	std::cout << "mais outra" << std::endl;
}

void function_2(){
	std::cout << "outra parte da thread" << std::endl;
}

int main() 
{
	std::thread t1(function_1); 

	std::cout << "uma parte da thread" << std::endl;

	std::thread t2(function_2);

	t1.join();
	t2.join();

return 0;
}
