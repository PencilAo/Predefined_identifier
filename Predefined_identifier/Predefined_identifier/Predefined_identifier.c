#define _CRT_SECURE_NO_WARNINGS
//Ԥ�������
//__FILE__   //���б����Դ�ļ�
//__LINE__   //�ļ���ǰ���к�
//__DATE__   //�ļ������������
//__TIME__   //�ļ��������ʱ��
//__STDC__   //�����������ѭANSI C,��ֵΪ1������δ����
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("file:%s line=%d date:%d i=%d\n", __FILE__, __LINE__, __DATE__, i);
    }

    return 0;
}