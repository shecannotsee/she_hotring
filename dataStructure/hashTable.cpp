#include "hashTable.h"


template<class E>
she::hashTable<E>::hashTable()
{
    m_pointHNode = nullptr;
    m_pointHNode = new int[m_hashTableLen];

};

template<class E>
int she::hashTable<E>::put(E element)
{
    int t_insertPosition = 0;//插入位置


}


template<class E>
she::hashTable<E>::~hashTable()
{
    delete[] m_pointHNode;
    m_pointHNode = nullptr ;
};

template<class E>
unsigned int she::hashTable<E>::hashFunction(const std::string & key)
{
    unsigned int hash = 5381;

    for(char c:key)
    {
        hash += (hash << 5) + c;
    }
    //return key[0] << 7;
    return (hash & 0x7FFFFFFF);
}


