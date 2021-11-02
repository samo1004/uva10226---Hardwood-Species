#include<iostream>
#include<iomanip>
#include<string>
#include<map>
using namespace std;
int main()
{
	int num = 0;
	string tree = "";
	map<string, double>forest;
	cin >> num;
	getline(cin, tree);
	cin.ignore();
	while (num--)
	{
		int count = 0;
		while (getline(cin, tree) && tree != "")
		{
			forest[tree]++;
			count++;
		}
		for (map<string, double>::iterator it = forest.begin(); it != forest.end(); it++)
		{
			cout << (*it).first << " " << fixed << setprecision(4) << (*it).second / count * 100 << endl;
		}
		//cout << endl;
		forest.clear();

		if (num != 0)//最後一組測資不用換行 
		{
			cout << endl;
		}
	}
	return 0;
}


