 void bubble(int a[], int N) 
 { 
     for (int i = 0; i < N-1; i++)//��i=N-1ʱ��a[N-1]�Ѿ�����������һ��Ԫ���ˣ�û������Ԫ�أ�Ҳ����Ҫ�����Ƚϡ���Ҳ����˼�������ᵽ��N=1����� 
     { 
         for (int j = i + 1; j < N; j++) 
         { 
             if (a[i] > a[j]) 
             { 
                 int t; 
                 t = a[i]; 
                 a[i] = a[j]; 
                 a[j] = t; 
             } 
         } 
     } 
 } 
