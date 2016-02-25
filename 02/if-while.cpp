/* Flow of control:
 * Boolean expressions; if and while statements.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int main()
{
		int num,max,min;
		double sum,count;
		count=1;
    cin>>num;
		max=min=num;
		sum+=num;
				while(cin>>num){
						if (num>=0){
								if (num<min)
									min=num;
								if (num>max)
									max=num;
						count++;
						sum+=num;
						}
        else{
				cout<<"max:"<<max<<"\n"<<"min:"<<min<<"\n"<<"average:"<<double(sum)/count<<"\n";
				cout << sum << "\n";
				cout << count << "\n";
				break;
			}
		}
	/*
	int n,k;
	cout << "enter 2 integers for gcd thing: ";
	cin >> n >> k;
	int gcd; //holds largest candidate gcd not yet tested.
	if (n < k) gcd = n;
	else       gcd = k;



	while (n%gcd!=0 && k%gcd!=0){
		gcd--;
	}

	cout << "gcd was " << gcd << "\n";
*/
	return 0;
}


/* TODO: compile this via the makefile instead of typing out the g++
 * commands yourself.  */

// vim:foldlevel=1
