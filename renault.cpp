#include <iostream>
#include <string>


/*
	Renault Radio Code Calculator
	By J Turner (c) 2013
*/

using namespace std;


char precode[3];
char red[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 };
char yellow[] = { 0x1b, '[', '1', ';', '3', '3', 'm', 0 };
char cyan[] = { 0x1b, '[', '1', ';', '3', '6', 'm', 0 };
char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };
int result;
int CheckInput();
int GetResult();
int main();


int CalculateResult()

{
	cout << "\nEnter Security Code or Ctrl-C to exit\n Code:- ";
	cin  >> precode;

	int i = '\005' * (toupper(precode[0]));

    	int j = precode[1] + (-698 + i * 2);

    	int k = precode[2];

    	int m = -528 + (precode[3] + (j + 2 * (k * 5)));


    	int n = ((m << 3) - m) % 100;
	cout << "code- " << n;
    for (result = (n / 10) + 2 * (5 * (n % 10)) + 4 * (5 * (5 * (259 % 			j % 100)));;)


 CheckInput();

 }



 int CheckInput()
 {
	if ((sizeof(precode) > 5 ) || (precode[0] < char(65)) ||  (precode[0] > char(122)) || (precode[1] > char(65)) || (precode[1] < char(48))) 
        { 
        cout << red << "\nError: Please enter correct code i.e T903\n" << normal;
        CalculateResult();
		} else {
        	if ((precode[2] > char(65)) || (precode[2] < char(48)) || 		    	(precode[3] > char(65)) || (precode[3] < char(48)))
        {

        cout << red << "\nError: Please enter correct code i.e T903\n" << normal;
        CalculateResult();
		} 
		GetResult();
			}
		}



int GetResult()
{

cout << "\nresult:= " << result;

 main();


}

int main()
{




	int CheckInput();
	int CalculateResult();

	CalculateResult();



return 0;
}
