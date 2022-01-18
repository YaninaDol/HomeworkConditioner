#include <iostream>
#include "Pult.h"
using namespace std;

int main()
{
	float rt;
	cout << " Select temperature in room: ";
	cin >> rt;
	Room R(rt);

	Conditioner Sumsung(R,50,60);

	int on;
	cout << " Do you want turn on conditioner?\n "
		 << "1 - YES,\n 0 - NO \n Your choice: ";
	cin >> on;

    Pult p(on);
	p.setON(on,Sumsung);

	if (Sumsung.getON() != 0) cout << " ON \n\n";
	else cout << " OFF \n\n";

	float t;
	cout << " Select temperature: ";
	cin >> t;

	p.set_t(Sumsung,t,R);
	
	cout<<"Temperature on conditioner : " << Sumsung.getT()<<endl;
	cout << "Temperature in room :" << R.getT()<<endl;

	p.setON(0,Sumsung);

}

