// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2020 The MANTIS Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MANTISCoin_CORE_NEW_GUI_PRUNNABLE_H
#define MANTISCoin_CORE_NEW_GUI_PRUNNABLE_H

class Runnable {
public:
    virtual void run(int type) = 0;
    virtual void onError(QString error, int type) = 0;
};

#endif //MANTISCoin_CORE_NEW_GUI_PRUNNABLE_H
