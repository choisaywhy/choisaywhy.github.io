/*
2019 �˰����������ȸ lv3

�����̴� �� �� ���ǽð��� �����ؼ� ���� �������� ������ �ϳ� �ٿ�ε� �޾ҽ��ϴ�. ������
������ ������ ȭ���� �� ���� �������� �������� �ְ�, �� �ʸ��� ������ �簢���� 4���� ����
�� �ϳ����� ���ɴϴ�. �̶� ������ �簢���� ������ ������ ��ġ�ϸ� �Ǵµ�, �� �������� �Ҹ���
�� Į�θ��� �ֽ��ϴ�. �����̰� ������ ������ �� �Ҹ��ϴ� Į�θ��� ����ϼ���.
�Է�
ù ��° �ٿ��� �� �������� �Ҹ��ϴ� Į�θ� a1, a2, a3, a4(0 �� a1, a2, a3, a4 �� 104)
�� ��° �ٿ��� ������ �簢���� ������ ������ ���ϴ� ���ڵ��� ���ڿ� s (1 �� |s| �� 105), ���� ��
�� ���ڿ� ��121431���� �ԷµǾ��� ��, 1��, 2��, 1��, 4��, 3��, 1�� ������ ������ ������ �簢����
����
���
�����̰� �Ҹ��ϴ� Į�θ�


*/


#include <iostream>
#include <string>

using namespace std;

int main() {


	int cal[4];
	int ans[4] = {0,};
	int count;
	int answer=0;

	for(int i=0;i<4;i++)
		cin >> cal[i];

	cin >> count;

	//for (size_t i = 0; i < length; i++)
	//{

	//}


	for (int i = 0; count != 0; i++)
	{
		ans[count % 10-1]++;

		count /= 10;
	}



	for (int i = 0; i < 4; i++)
	{
		answer += cal[i] * ans[i];
	}

	cout << answer;

	return 0;

}