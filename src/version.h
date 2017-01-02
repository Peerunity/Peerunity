// Copyright (c) 2012 The Bitcoin developers
// Copyright (c) 2012-2013 The PPCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include <string>

//
// client versioning
//

// These need to be macro's, as version.cpp's voodoo requires it

// peerunity version - intended for display purpose only
#define PEERUNITY_VERSION_MAJOR       0
#define PEERUNITY_VERSION_MINOR       2
#define PEERUNITY_VERSION_REVISION    2
#define PEERUNITY_VERSION_BUILD       0

static const int PEERUNITY_VERSION =
                           1000000 * PEERUNITY_VERSION_MAJOR
                         +   10000 * PEERUNITY_VERSION_MINOR
                         +     100 * PEERUNITY_VERSION_REVISION
                         +       1 * PEERUNITY_VERSION_BUILD;

// ppcoin version - reference for code tracking
#define PPCOIN_VERSION_MAJOR       0
#define PPCOIN_VERSION_MINOR       5
#define PPCOIN_VERSION_REVISION    0
#define PPCOIN_VERSION_BUILD       0

static const int PPCOIN_VERSION =
                           1000000 * PPCOIN_VERSION_MAJOR
                         +   10000 * PPCOIN_VERSION_MINOR
                         +     100 * PPCOIN_VERSION_REVISION
                         +       1 * PPCOIN_VERSION_BUILD;

// bitcoin version - reference for code tracking
#define BITCOIN_VERSION_MAJOR       0
#define BITCOIN_VERSION_MINOR       6
#define BITCOIN_VERSION_REVISION    3
#define BITCOIN_VERSION_BUILD       0

static const int BITCOIN_VERSION =
                           1000000 * BITCOIN_VERSION_MAJOR
                         +   10000 * BITCOIN_VERSION_MINOR 
                         +     100 * BITCOIN_VERSION_REVISION
                         +       1 * BITCOIN_VERSION_BUILD;

static const int CLIENT_VERSION = BITCOIN_VERSION;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;


//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 60006;

// earlier versions not supported as of Feb 2012, and are disconnected
// NOTE: as of bitcoin v0.6 message serialization (vSend, vRecv) still
// uses MIN_PROTO_VERSION(209), where message format uses PROTOCOL_VERSION
static const int MIN_PROTO_VERSION = 60006;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

#endif
