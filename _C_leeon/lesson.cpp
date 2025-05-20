#include <stdio.h>

int main()
{ 
    // +,-,*,/,%
	// L.V(변수만) = R.Value(변수,상수,함수,연산 등) //레프트 라이트 왼오
	int num = 1;
	int sum = 0;
	sum += num; // sum = sum + num; ==> sum = 1
	sum += num; // sum = sum + num; ==> sum = 2
	sum -= num; // sum = sum - num;
	sum *- num; // sum = sum * num;
	sum /= num; // sum = sum / num;
	sum %= num; // sum = sum % num;

	// 비교 연산자 : >, >=, <, <==, ==, !=
	// 비교 연산을 수행한 결과는 항상 논리값(1,0) 1= ture 0=false
	int result;
	result = 1 > 5;
	printf("result = %d\n", result);

	result = 1 <= 5;
	printf("result = %d\n", result);

	result = 1 == 5; 
	printf("result = %d\n", result);

	result = 1 != 5;
	printf("result = %d\n", result);

	// 논리 연산자 : &&(AND), ||(OR), !(NOT) / &&는 하나만 폴스여도 폴스 ||는 하나만 트루여도 트루
	
	printf("=====================================\n"); 
	num = -5;
	sum = 0;
	result = num && sum; // T && F ===> F
	printf("result = %d\n", result);

	result = num || sum; // T || F ===> T
	printf("result = %d\n", result);

	result = !num; // -5는 True이고 ===> False로 반전
	printf("result = %d\n", result);

	// 증감 연산자 : ++, --
	printf("=====================================\n");
	num = 0;
	num++; // num = num + 1;
	printf("num = %d\n", num); //1

	++num; // num = num + 1;
	printf("num = %d\n", num); //2

	printf("num = %d\n", num++);
	printf("num = %d\n", ++num);






	return 0;
}