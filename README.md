# 数据结构

## 写在前头

这个大概算是自学数据结构的笔记，会（努力）将所有的东西尝试实现之后上传，希望不要咕咕咕。

能力有限，估计会有很多的疏漏和错误，仅供参考，大家一起进步。

用到的网站：[VisuAlgo-通过动画可视化数据结构和算法](https://visualgo.net/en)，强烈推荐。出于版权考虑，笔记和代码会自己写一遍，但是核心思想都来自这个网站。

## 目录

### <a href='#1'>排序</a>

#### <a href='#1.1'>冒泡排序(bubble sort)</a>

## <a name='1'>排序</a>

### <a name='1.1'>冒泡排序(bubble sort)</a>

- 时间复杂度O(n²)

- 思想：

  对于拥有N个元素的数组，冒泡排序将进行以下操作：

  ①如果元素大小关系不正确（比如将数组从大到小排列时，位于数组左侧（编号较小者）的数字大于右侧），交换这两个数，

  ②比较一对相邻元素，

  ③重复步骤1和2，直到到达数组的末尾（第（N-2）和（N-1）项）

  ④完成一遍上述操作后，最大的元素将在最后的位置。 然后我们将N减少1，并重复上述步骤，直到N = 1。

- 代码实现：（将数组从大到小排序）

    `void bubble(int a[], int N)`
    `{`
        `for (int i = 0; i < N-1; i++)//当i=N-1时，a[N-1]已经是数组的最后一个元素了，没有相邻元素，也不需要继续比较。这也就是思想中所提到的N=1的情况`
        `{`
            `for (int j = i + 1; j < N; j++)`
            `{`
                `if (a[i] > a[j])`
                `{`
                    `int t;`
                    `t = a[i];`
                    `a[i] = a[j];`
                    `a[j] = t;`
                `}`
            `}`
        `}`
    `}`

- 总迭代次数： N ×（N-1）/ 2

  



