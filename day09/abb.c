//
// Created by LEGION on 2022/11/26.
//
#include <stdio.h>

int main() {
    int a[2];   //声明一个一维数组，数组里的元素都是同一种类型

    //初始化
    int b[5] = {1,2,3,4,5};
    int c[4] = {1,2,3};   //初始化部分元素时，其他的默认为0
    int d[6] = {[3] = 5};   //给指定元素初始化
    int e[] = {1,2,3,4};   //[]里可以不写，但该情况下必须初始化，最终的数组元素个数由初始化的数据的个数决定

    //赋值（访问）
    /*数组名[下标]，下标从0开始，最大下标是元素个数-1*/
    printf("%d,%d,%d",b[4],d[2],e[3]);


    return 0;
}

//数组定义后长度一定
//变长数组是个数可以用变量代替，但定义数组的时候变量已有赋值
//[]里的是大于0的整型常数，[]里写浮点型时系统会进行转换，去掉小数