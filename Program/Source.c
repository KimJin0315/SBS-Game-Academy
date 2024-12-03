#include <stdio.h>
#include <math.h>

struct GameObject
{
	char grade;
	int health;
	double attack;

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸���
	// ũ�Ⱑ �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ�
	// ���´� �⺻ �ڷ������θ� �����Ǿ� �ֽ��ϴ�.
};

struct Vector2
{
	float x;
	float y;
};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�
	
	// struct GameObject gameObject;
	// 
	// gameObject.grade = 'A';
	// gameObject.health = 75;
	// gameObject.attack = 5.5f;
	// 
	// printf("GameObject grade : %c\n", gameObject.grade);
	// printf("GameObject health : %d\n", gameObject.health);
	// printf("GameObject attack : %f\n", gameObject.attack);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.

#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ����
	// ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ�
	// ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// struct GameObject object = { 'C', 30, 3.25 };

	// printf("GameObject�� ũ�� : %d\n", sizeof(object));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿�
	// ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�
	
	printf("100�� ������ : %lf\n", sqrt(100));

	printf("10�� : %lf\n", pow(10, 2));

	struct Vector2 character = {0.0f ,0.0f};
	struct Vector2 slime = {5.0f, 5.0f };
	float distance = sqrt(pow((slime.x - character.x),2) + pow((slime.y - character.y),2));

	if (distance <= 3)
	{
		printf("���� ����");
	}
	else if (distance >= 3)
	{
		printf("�̵� ����");
	}
	
#pragma endregion



	return 0;
}