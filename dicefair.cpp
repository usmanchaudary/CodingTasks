//#include<iostream>
//#include<random>
//#include<time.h>
//#include <Bits.h>
//#include <unordered_map>
//using namespace std;
//
//int generateRandome(int min ,int max) {
//	int ran = rand() % (max - min + 1) + min;
//	
//	
//	return ran;
//}
//bool countFreq(int arr[], int n)
//{
//	unordered_map<int, int> mp;	
//	int count = 0;
//	for (int i = 0; i < n; i++)
//		mp[arr[i]]++;
//
//	for (auto x : mp) {
//
//		cout << x.first << " " << x.second << endl;
//		if (x.first)
//			count++;
//	}
//	if (count>=4)	
//		return true;
//	else
//		return false;
//	
//
//}
//void checkFair() {
//	srand(time(0));
//	int arr[10];
//	for (int i = 0; i<10; i++)
//	{
//		arr[i]=generateRandome(1, 6);
//	}
//
//	countFreq(arr, 10);
//
//}
//
//void main(){
//	checkFair();
//
//	if (countFreq)
//	{
//		cout << "Dice is Fair" << endl;
//	}
//	else {
//		cout << "dice is not fair" << endl;
//	}
//	getchar();
//}