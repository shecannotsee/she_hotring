#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_

#include <string>
#include "hNode.h"

namespace she
{

template<class E>
class hashTable
{
    public:

    public:
        hashTable();
        ~hashTable();

    public:
        /*-------------增-------------*/
        /*置入元素*/
        int put(E);


        /*-------------删-------------*/
        /*移除元素*/
        int remove();


        /*-------------改-------------*/
        /*更新元素*/
        int update();


        /*-------------查-------------*/
        /*查找元素*/
        int view() const;

        

    private:
        const int m_hashTableLen = 16 ;

        hNode *m_pointHNode;

    private:
        unsigned int hashFunction(const std::string&);



};//class hashTable

};//namespace she

#endif//!_HASH_TABLE_H_

