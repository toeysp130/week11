#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void check_val(int x);
void print_arr(int a[4]);
void find_max(int vals[5]);
float average(float num[10]);
void edit_arr(int a[4]);
void display(string *name,int *num,int,int);
int main()
{
	int stu;
	float total = 0.0;
	cout << "Enter number of student" << endl;
	cin >> stu;
	string *name = new string[stu];
	int *num = new int[stu];
	for (int i = 0; i < stu ;i++)
	{
		cout << "Enter name [ " << i+1 << " ]: "<< name[i] ;
		cin >> name[i];
		cout << "Enter num  [ " << i+1 << " ]: ";
		cin >> num[i];
		total += num[i];
	}
	display(name,num,stu,total);
	system("pause");
	return(0);
}

void display(string name[1],int num[1],int stu,int total){
		cout << setfill('-') << fixed << setw(50) << "\n";
		cout << "Name" << "\t\t" << "score" << "\n";
		cout << setfill('-') << setw(50) << "\n";
		for (int i = 0 ; i < stu ; i++)
		{
			cout << name[i]  << "\t\t" << num[i] << endl;
		}
	cout << setfill('-') << setw(50) << "\n";
	cout << "Average score = " << fixed << setprecision(2) << total/stu << endl;
}

/*{
	int a[4]={-1,6,9,2};
	int max = a[0];
	for (int i = 1;i < 4;i++)
	{
		if (a[i]>max)
			max = a[i];
	}
	cout << "Maximum value is " << max << endl;
	system("pause");
	return(0);
}*/

/*#define SIZE 4
{
	int num[SIZE] = {1,4,5,7};
	int total = 0;
	for(int i = 0; i<SIZE;i++)
		total += num[i];
	cout << "Sum of all elements = " << total << endl;
	system("pause");
	return(0);
}*/

/*{
	int a[3] = {2,-1,5};
	check_val(a[0]);
	system("pause");
	return(0);
}*/
void check_val(int x)
{
	if (x >= 0)
		cout << x << " : Positive\n";
	else
		cout << x << " : Negative\n";
}
/*int main()
{
	int a[3] = {2,-1,5};
	for(int i = 0;i < 3;i++)
		check_val(a[i]);
	system("pause");
	return(0);
}*/

/*int main()
{
	int num[4] = {5,2,-1,8};
	print_arr(num);
	system("pause");
	return(0);
}*/

void print_arr(int a[4])
{
	for(int i = 0;i < 4;i++)
		cout << a[i] << endl;
}

/*void main()
{
	int nums[5] = {2,18,1,27,16};
	find_max(nums);
	system("pause");
}*/

void find_max(int vals[5])
{
	int max = vals[0];
	for (int i = 1;i < 5;i++)
		if (max<vals[i])
			max = vals[i];
	cout << "The maximum value is " << max << endl;
}

/*float average(float num[10])
{
	float total = 0.0,avg = 0.0;
	for(int i = 0;i < 10 ;i++)
		total += num[i];

	avg = total/10.0;
	return avg;
}*/

/*int main()
{
	int i ;float score[10],avg_score;
	for(int i = 0;i < 10;i++)
	{
		cout << "Enter score " << i+1 << " : ";
		cin >> score[i];
	}
	avg_score = average(score);
	cout << "Average score is " << avg_score << endl;
	system("pause");
	return(0);
}*/

void edit_arr(int a[4])
{
	for(int i= 0;i < 4;i++)
		a[i] = a[i]*a[i];
}
/*int main()
{
	int num[4] = {2,5};
	edit_arr(num);
	for(int i = 0;i<4;i++)
		cout << num[i] << endl;
	system("pause");
	return(0);
}*/

/*int main()
{
	int price[5];
	cin >> price[4];
	return(0);
}*/