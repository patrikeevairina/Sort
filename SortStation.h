#ifndef SORTSTATION_H
#define SORTSTATION_H

#include "BracketToken.h"
#include "FunctionToken.h"
#include "NumberToken.h"
#include "OperatorToken.h"

#include "Token.h"

class SortStation
{
public:
    explicit SortStation(std::string& str);
    double getResult();
    
private:
    Token *_token;
};

#endif // SORTSTATION_H
