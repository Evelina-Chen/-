void select(int a[], int N)
{
	for (int i = 0; i <= N-2; i++)
	{
		int mix = a[i];//���赱ǰֵΪ��Сֵ
		for (int j = i + 1; j < N; j++)
		{
			if (mix > a[j])//�ҵ����µ���Сֵ
			{
				swap(&mix, &a[j]);
			}
		}
		swap(&mix, &a[i]);
	}
}
