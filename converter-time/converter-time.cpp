//programm which convert second to hours, minutes, seconds

#include <iostream>

using namespace std;

void convertToHourMinuteSecond(int num, int* hour, int* min, int* sec);

int main(){
	int num;
	cout << "enter number to convert:";
	cin >> num;
	int hour, min, sec;
	convertToHourMinuteSecond(num, &hour, &min, &sec);
	cout << hour << " " << min << " " << sec;
	system("pause");
	return 0;
}
 void convertToHourMinuteSecond(int num, int* hour, int* min, int* sec){
	*hour = num / 3600;
	*min = (num - (3600 * *hour)) / 60;
	*sec = num - 3600 * *hour - 60 * *min;
}
