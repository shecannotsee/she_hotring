#ifndef _H_NODE_H_
#define _H_NODE_H_

#include <string>

namespace she
{

template<class E>
class hNode
{
    public:
        hNode();
        ~hNode();

    
    private:
        std::string key;        //键
        std::string value;      //值

        unsigned int tag;       //
        unsigned int occupied;  //
        unsigned int rehash;    //

        hNode *next;//指向下个节点的指针



};//class hNode

};//namespace she

#endif//!_H_NODE_H_

