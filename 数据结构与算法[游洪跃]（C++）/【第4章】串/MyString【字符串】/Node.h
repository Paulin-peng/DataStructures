/********************************************************************************
CopyRight  : 2012-2013, HerBinUnversity, GatieMe
File Name  :【00】ACM模版
Description: 用于详细说明此程序文件完成的主要功能, 与其他模版或函数的接口、
             输出值、取值范围、含义及参数间的控制、顺序、独立或依赖等关系
Author     : Gatie_Me
Version    : 版本声明
Data_Time  : 20112-8-4 15:36:24
Content    : 哈工程Acm——Problem List【1005Beavergnaw】
History    : 详细信息如下
********************************************************************************/

/********************************************************************************
History    :修改历史记录列表, 每条修改记录应包括修改日期、修改者以及修改内容
********************************************************************************/

/********************************************************************************
Problem    :ACM题目信息的详细描述
********************************************************************************/


#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED





///结点类模版定义部分
template <class ElemType>
class Node
{
/*=========================【PUBLIC：公共接口】=========================*/
  public :
// 类的基本成员函数
    Node( );                   //默认构造函数模版

    Node(const ElemType elem, Node<ElemType> *link = NULL);     //待参数的构造函数模版

    virtual ~Node( );           //虚析构函数模版

// 数据成员:PUBLIC
    ElemType m_data;              // 数据域[结点存储的数据]
    Node<ElemType> *m_next;   // 指针域[指向下一个结点数据地址的指针]
/*=========================【PUBLIC：公共接口】=========================*/
};



///结点类模版实现部分
//函数名称：Node( );
//初始条件：Node对象未创建
//操作结果：创建一个无数据信息的Node对象
template <class ElemType>
Node<ElemType>::Node( )                   //默认构造函数模版
{
    this->m_next = NULL;
}

//函数名称：Node(ElemType item, Node<ElemType> *link = NULL);
//初始条件：Node对象未创建
//操作结果：创建一个带数据信息的Node对象
template <class ElemType>
Node<ElemType>::Node(const ElemType elem, Node<ElemType> *link/*= NULL*/)         //待参数的构造函数模版
{
    m_data = elem;
    m_next = link;
}

//函数名称：virtual ~Node( );
//初始条件：Node对象未创建
//操作结果：回收对象前, 销毁开辟的堆内存
template <class ElemType>
Node<ElemType>::~Node( )         //虚析构函数模版
{
    if(m_next != NULL)
    {
        delete m_next;
    }
}

#endif // SIMPLELINKLIST_H_INCLUDED
