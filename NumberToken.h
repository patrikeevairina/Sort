#ifndef NUMBERTOKEN_H
#define NUMBERTOKEN_H

#include "Token.h"

class NumberToken : public Token
{
public:
    TokenType type() override;
    double value();
private:
    TokenType _type;
    double _value;
};

TokenType NumberToken::type()
{
    return _type;
}

double NumberToken::value()
{
    return _value;
}

#endif // NUMBERTOKEN_H
