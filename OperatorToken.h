#ifndef OPERATORTOKEN_H
#define OPERATORTOKEN_H

#include "Token.h"

enum class Priority
{
    Low,
    Middle,
    High
};

enum class Associativity
{
    Left,
    Right, 
    Both
};

class OperatorToken : public Token
{
public:
    TokenType type() override;
    Priority priority();
    Associativity associativity();
    bool opCount();
    
private:
    TokenType _type;
    Priority _priority;
    Associativity _associativity;
    bool _opCount; // 0 == 1 operand, 1 == 2 operands
};

TokenType OperatorToken::type()
{
    return _type;
}

Priority OperatorToken::priority()
{
    return _priority;
}

Associativity OperatorToken::associativity()
{
    return _associativity;
}

bool OperatorToken::opCount()
{
    return _opCount;
}

#endif // OPERATORTOKEN_H
