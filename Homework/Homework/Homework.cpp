/* Write a program that prints the distinct words in its input sorted
into decreasing order of frequency of occurrence.
Precede each word by its count. */

/*
homework assignment
procedural programming
Friederike Weilbeer, 20220630
*/ 

#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

// Comparator function to sort pairs
// according to second value
bool compare(pair<string, int>& a,
	pair<string, int>& b)
{
	return a.second > b.second;
}

// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<string, int>& M)
{

	// Declare vector of pairs
	vector<pair<string, int>> A;

	// Copy key-value pair from Map
	// to vector of pairs
	for (auto& it : M) {
		A.push_back(it);
	}

	// Sort using comparator function
	sort(A.begin(), A.end(), compare);

	// Print the sorted value
	for (auto& it : A) {

		cout << it.second << ' '
			<< it.first << endl;
	}
}

// calculate frequency and store in map
void frequency(string str) {

	map<string, int> map;
	string word = "";

	for (int i = 0; i < str.length(); i++) {
		// look for " " to devide words
		if (str[i] == ' ') {
			// new word
			if (map.find(word) == map.end()) {
				map.insert(make_pair(word, 1));
				word = "";
			}
			else {
				map[word]++;
				word = "";
			}
		}
		else {
			word += str[i];
		}
	}
	sort(map);	
}

int main()
{

	string input;

	// read in user input
	cout << "Please enter yout text: " << endl;
	getline(cin, input);
	// insert " " at the end of the string to make sure we get the last word too
	input += " ";
	frequency(input);
}
