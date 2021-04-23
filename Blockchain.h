#pragma once
#include <cstdint>
#include <vector>
#include "Block.h"

class Blockchain {

    uint32_t _nDifficulty;
    std::vector<Block> _vChain;

    Block _GetLastBlock() const;

public:
    Blockchain();

    void AddBlock(Block bNew);
};