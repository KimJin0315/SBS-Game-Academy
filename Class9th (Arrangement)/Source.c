#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	// int array[3];
	// 
	// array[0] = 10;
	// array[1] = 20;
	// array[2] = 30;

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	// ������ ������ �˴ϴ�.

	// int size = sizeof(array) / sizeof(int);
	// 
	// printf("array �迭�� ũ�� : %u\n", size);
	// 
	// 
	// 
	// for (int i = 0; i < 3 ; i++)
	// {
	// 	printf("array[%d] = %d\n", i, array[i]);
	// }

	// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.

	// float list[] = { 1.25f, 2.75f, 7.875f, 4.895f };
	// 
	// for (int i = 0; i < 4; i++)
	// {
	// 	printf("list[%d] = %f\n", i, list[i]);
	// }

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.

	// float * pointer = list;
	// 
	// pointer = pointer + 2;
	// 
	// *pointer = 7.875f;
	// 
	// printf("list[2] = %f\n", list[2]);
	// printf("pointer�� �� = %p\n", pointer);
	// printf("list[2]�� �ּ� = %p\n", &list[2]);

	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� ����ŵ�ϴ�.
#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������
	// �����Դϴ�.

	// const char* string = "Queue";
	// 
	// printf("string ������ �� : %s\n", string);
	// 
	// string = "Stack";
	// 
	// printf("string ������ �� : %s\n", string);

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������, 
	// ���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������ ���ڿ�
	// �� ���� ������ �� �����ϴ�.

	// char word [ ] = { "Darkness" };
	// char content [ ] = { "Github" };
	// 
	// printf("word ������ ũ�� : %u byte\n", sizeof(word));

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ
	// �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ� ����
	// ���ڰ� �߰��˴ϴ�.

	// word[4] = '\0';
	// 
	// printf("word �迭�� �� : %s\n", word);

	// word = content;

	// ���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ�
	// ������, ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ�
	// ��ȿ�� ���ڱ����� ����մϴ�.
#pragma endregion

#pragma region ASCII �ڵ�
	// �̱� ANSI���� ǥ��ȭ�� ���� ��ȯ�� 7 bit ��ȣ ü���Դϴ�.

	// char alphabet = 65;

	// printf("%c", alphabet);

	// A~Z ���

	//	for (char i = 0; i < 26  ; i++ )
	//	{
	//		printf("%c ", 'A' + i);
	//	}

#pragma endregion
}