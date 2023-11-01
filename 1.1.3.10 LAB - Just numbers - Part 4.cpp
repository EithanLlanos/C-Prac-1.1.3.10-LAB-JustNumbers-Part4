//
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them.
//Your version of the program must print the same result as the expected output.
//Before you use the compiler, try to find the errors only by manual code analysis.
//Use octal(base 8) numbers.
//
/////////////////////////////////////////////////////////////////////
//
//#include <stdio.h>
//
//int main()
//{
//	printf("The value of nine is: %d \n", 01x);
//	printf("The value of ten is: %d \n", 0x2);
//	return 0;
//}
//
//Expected output
//The value of nine is : 9
//The value of ten is : 10
//


#include <stdio.h>

int main() {

	printf("The value of nine is: %d \n", 011);
	printf("The value of ten is: %d \n", 012);
	return 0;
}