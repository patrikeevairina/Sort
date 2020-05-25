#ifndef BRACKETTOKEN_H
#define BRACKETTOKEN_H

#include "Token.h"

enum class Orientation
{
    Left,
    Right
};

class BracketToken : public Token
{
public:
    TokenType type() override;
    Orientation orientation();
    
private:
    TokenType _type;
    Orientation _orientation;
};

TokenType BracketToken::type()
{
    return _type;
}

Orientation BracketToken::orientation()
{
    return _orientation;
}

#endif // BRACKETTOKEN_H
