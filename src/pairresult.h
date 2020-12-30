// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2020 The MANTIS Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MANTISCoin_PAIRRESULT_H
#define MANTISCoin_PAIRRESULT_H


class PairResult {

public:
    PairResult(bool res):result(res){}
    PairResult(bool res, std::string* statusStr):result(res), status(statusStr){}

    bool result;
    std::string* status = nullptr;
};


#endif //MANTISCoin_PAIRRESULT_H
