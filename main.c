#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�۰��������
/*���۰���ҳ�Ԫ�ش�����λ�ã���ͳһ�ƶ�������λ��֮�������Ԫ�أ�
������λ���ڳ��ռ䣬��������Ԫ�طŵ����еĲ���λ��*/
typedef int elem_type;
void Binary_InsertSort(elem_type a[],int n){
    int i,j,low,mid,high;
    for(i = 2;i < n;i++){             //���ν���a[2]~a[n]���뵽ǰ������������
        a[0] = a[i];                  //��a[i]�ݴ浽��a[0]�У�Ҫ�����Ԫ����i�ţ�1~i-1��������ģ�
        low = 1;
        high = i - 1;                 //�����۰���ҷ�Χ
        while(low <= high){           //�۰����
            mid = (low + high)/2;
            if(a[mid] > a[0])
                high = mid - 1;
            else
                low = mid + 1;
        }
        for(j = i - 1;j >= high + 1;j--)
            a[j + 1] = a[j];          //ͳһ����
        a[high + 1] = a[0];
    }
}
int main()
{
    elem_type a[] = {0,899,565,68,78,12,9,3,848,925,802,94,454,6465,756,
    5165,87,325,148,699,789,122,784,124,34,588,7,54,697,101,130};
    int len = sizeof(a)/sizeof(elem_type);
    Binary_InsertSort(a,len);
    for(int i = 1;i < len;i++)
        printf("%d ",a[i]);
    return 0;
}
