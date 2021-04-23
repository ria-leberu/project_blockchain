#pragma once
#include <cstdint>
#include <iostream>
#include <sstream>
#include <time.h>

class Block {

    uint32_t _nIndex;
    int64_t _nNonce;
    std::string _sData;
    time_t _tTime;

    std::string _CalculateHash() const; //const at end of a function declararion makes it a comiler error for this class to change a member variable of the class


public:
    std::string sHash;
    std::string sPrevHash;
    Block(uint32_t nIndexIn, const std::string& sDataIn);
    void MineBlock(uint32_t nDifficulty);



};