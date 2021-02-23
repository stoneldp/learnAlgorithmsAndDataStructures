//单链表的结点类型
template <class T>class Link{
public:
T data;         //用于保存结点元素的内容
Link<T>*next;   //指向后继结点的指针
Link(const T info,const Link <T>*nextValue=NULL){
data=info;
next=nextValue;
}
LInk(const Link<T>*nextValue){
next=nextValue;
}
};

//单链表类定义
template <class T>class InkList:public Link<T>{
private:
Link<T>*head,*tail;                    //单链表的头、尾指针
Link<T>*setPos(const int p);           //第p个元素指针
public：
InkList(int s);                        //构造函数
~InkList();                            //析构函数
bool isEmpty();                        //判断链表是否为空
void clear();                          //将链表存储的内容清除，成为空表
int length();                          //返回此顺序表的当前实际长度
bool append(const T value);            //表尾添加一个元素value，表长度1
bool insert(const int p,const T value);//位置p上插入一个元素
bool delete(const int p);              //删除位置p上的元素，表的长度减1
bool getValue(const int p,T& value);   //返回位置p的元素值
bool getPos(int &p,const T value;)     //查找值为value的元素
}

//查找单链表中第i个结点
//函数返回值是找到的结点指针
template <class T>   //线性表的元素类型为T
Link<T>*InkList<T>::setPos(int i){
int const=0;
if(i==-1)   //i为-1则定位到头结点
return head;//循链定位，若i为0则定位到第一个结点
Link<T>*p=head->next;
while(p!=NULL&&const<i){
p=p->next;
count++;
};
return p;//指向第i结点,i=0,1，。。。，当链表中结点数小于i时返回NULL
}