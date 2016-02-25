#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

/* TODO: write a piece of code that reads integers from standard
	 * input until a negative integer is entered, and then computes
	 * the minimal value, the maximal value, and the average value
	 * of all the (non-negative) integers that were entered.
	 * (Hint: you don't have to store all those numbers at once... )*/
int main() {
    int num;
    int max, min;
    int count;
    cin>>num;
    sum=0;
    int test;
    if (num>=0) {
      max=num;
      min=num;
      sum+= num;
      count++;
      while(cin>>num){
        if (num>=0){
          if (num<min){
            num=min;
          }
          if (num>max){
            num=max;
          }
          count++;
        else
          break;
        }
      }

    }
    double average;
    average=sum/count;
    cout<<"max:"<<max<<"\n"<<"min: "<<min<<"average:"<<average;
      return 0;

  }



	/* TODO: write code that gets an integer n from the user and prints out
	 * the n-th term of the fibonacci sequence. */
  int nth;
	cout<<"enter n for fib sequence \n";
	cin>>nth;
	if (nth==0){
		cout<<0<<endl;
	}
	else if (nth==1){
		cout<<1<<endl;
	}
	else {
		int count2=2cd ..;
		int a0=0;
		int a1=1;
		while (count2<nth){
				int next=a0+a1;
				a0=a1;
				a1=next;
				count2++;
		}
		cout<<"The "<<nth<<"th term was "<<a1<<endl;
	}
	/* TODO: write a loop that prints the sum of the first n odd cubes. */

	int num;
	int count1=1;
	int add=0;
	cout<<"enter number:";
	cin>>num;
	while (count1<=num) {
		add+= count1*count1*count1;
		count1++;
	}
	cout<<"sum is "<<add<<endl;

