#include <stdio.h>

int main()
{ 
    // +,-,*,/,%
	// L.V(������) = R.Value(����,���,�Լ�,���� ��) //����Ʈ ����Ʈ �޿�
	int num = 1;
	int sum = 0;
	sum += num; // sum = sum + num; ==> sum = 1
	sum += num; // sum = sum + num; ==> sum = 2
	sum -= num; // sum = sum - num;
	sum *- num; // sum = sum * num;
	sum /= num; // sum = sum / num;
	sum %= num; // sum = sum % num;

	// �� ������ : >, >=, <, <==, ==, !=
	// �� ������ ������ ����� �׻� ����(1,0) 1= ture 0=false
	int result;
	result = 1 > 5;
	printf("result = %d\n", result);

	result = 1 <= 5;
	printf("result = %d\n", result);

	result = 1 == 5; 
	printf("result = %d\n", result);

	result = 1 != 5;
	printf("result = %d\n", result);

	// �� ������ : &&(AND), ||(OR), !(NOT) / &&�� �ϳ��� �������� ���� ||�� �ϳ��� Ʈ�翩�� Ʈ��
	
	printf("=====================================\n"); 
	num = -5;
	sum = 0;
	result = num && sum; // T && F ===> F
	printf("result = %d\n", result);

	result = num || sum; // T || F ===> T
	printf("result = %d\n", result);

	result = !num; // -5�� True�̰� ===> False�� ����
	printf("result = %d\n", result);

	// ���� ������ : ++, --
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