#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>
#include <cstring> 

enum class TokenType
{
    Number,
    Operator,
    Function, 
    Bracket
};


class Token
{
public:
    virtual TokenType type() = 0;
    ~Token();
protected:
    TokenType _type;
};

#endif // TOKEN_H
