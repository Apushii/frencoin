

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *fren_strings[] = {
QT_TRANSLATE_NOOP("fren-core", "Fren Core"),
QT_TRANSLATE_NOOP("fren-core", "The %s developers"),
QT_TRANSLATE_NOOP("fren-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("fren-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("fren-core", ""
"A fee rate (in %s/kB) that will be used when fee estimation has insufficient "
"data (default: %s)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Accept relayed transactions received from whitelisted peers even when not "
"relaying transactions (default: %d)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Add a node to connect to and attempt to keep the connection open (see the "
"`addnode` RPC command help for more info)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("fren-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("fren-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("fren-core", ""
"Bind to given address to listen for JSON-RPC connections. This option is "
"ignored unless -rpcallowip is also passed. Port is optional and overrides -"
"rpcport. Use [host]:port notation for IPv6. This option can be specified "
"multiple times (default: 127.0.0.1 and ::1 i.e., localhost, or if -"
"rpcallowip has been specified, 0.0.0.0 and :: i.e., all addresses)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("fren-core", ""
"Cannot provide specific connections and have addrman find outgoing "
"connections at the same."),
QT_TRANSLATE_NOOP("fren-core", ""
"Change address can not be sent to because it doesn't have the correct "
"qualifier tags "),
QT_TRANSLATE_NOOP("fren-core", ""
"Connect only to the specified node(s); -connect=0 disables automatic "
"connections (the rules for this peer are the same as for -addnode)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("fren-core", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Distributed under the MIT software license, see the accompanying file %s or "
"%s"),
QT_TRANSLATE_NOOP("fren-core", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Equivalent bytes per sigop in transactions for relay and mining (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Error loading %s: You can't enable HD on an already existing non-HD wallet"),
QT_TRANSLATE_NOOP("fren-core", ""
"Error loading wallet %s. -wallet parameter must only specify a filename (not "
"a path)."),
QT_TRANSLATE_NOOP("fren-core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("fren-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Exclude debugging information for a category. Can be used in conjunction "
"with -debug=1 to output debug logs for all categories except one or more "
"specified categories."),
QT_TRANSLATE_NOOP("fren-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Extra transactions to keep in memory for compact block reconstructions "
"(default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Force relay of transactions from whitelisted peers even if they violate "
"local relay policy (default: %d)"),
QT_TRANSLATE_NOOP("fren-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"If <category> is not supplied or if <category> = 1, output all debugging "
"information."),
QT_TRANSLATE_NOOP("fren-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"If this block is in the chain assume that it and its ancestors are valid and "
"potentially skip their script verification (0 to verify all, default: %s, "
"testnet: %s)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Invalid parameter: amount must be divisible by the smaller unit assigned to "
"the asset"),
QT_TRANSLATE_NOOP("fren-core", ""
"Invalid parameter: asset_name must only consist of valid characters and have "
"a size between 3 and 30 characters. See help for more details."),
QT_TRANSLATE_NOOP("fren-core", ""
"Invalid parameter: ipfs_hash is not valid, or txid hash is not the right "
"length"),
QT_TRANSLATE_NOOP("fren-core", ""
"Invalid parameter: ipfs_hash must be 46 characters. Txid must be valid 64 "
"character hash"),
QT_TRANSLATE_NOOP("fren-core", ""
"Invalid parameters: asset_name can't have a '!' at the end of it. See help "
"for more details."),
QT_TRANSLATE_NOOP("fren-core", ""
"Keep an index of assets, used by the requestsnapshot rpc call. Requires a -"
"reindex."),
QT_TRANSLATE_NOOP("fren-core", ""
"Maintain a full address index, used to query for the balance, txids and "
"unspent outputs for addresses (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Maintain a full spent index, used to query the spending txid and input index "
"for an outpoint (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Maintain a timestamp index for block hashes, used to query blocks hashes by "
"a range of timestamps (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Maximum allowed median peer time offset adjustment. Local perspective of "
"time may be influenced by peers forward or backward by this amount. "
"(default: %u seconds)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Maximum total fees (in %s) to use in a single wallet transaction or raw "
"transaction; setting this too low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("fren-core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("fren-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("fren-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect used)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Reduce storage requirements by enabling pruning (deleting) of old blocks. "
"This allows the pruneblockchain RPC to be called to delete specific blocks, "
"and enables automatic pruning of old blocks if a target size in MiB is "
"provided. This mode is incompatible with -txindex and -rescan. Warning: "
"Reverting this setting requires re-downloading the entire blockchain. "
"(default: 0 = disable pruning blocks, 1 = allow manual pruning via RPC, >%u "
"= automatically prune block files to stay under the specified target size in "
"MiB)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("fren-core", ""
"Set lowest fee rate (in %s/kB) for transactions to be included in block "
"creation. (default: %s)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Set maximum BIP141 block weight to this * 4. Deprecated, use blockmaxweight"),
QT_TRANSLATE_NOOP("fren-core", ""
"Set the Minimum amount of peers required to disallow reorg of chains of "
"depth >= maxreorg. Peers must be greater than. (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Set the Minimum tip age (in seconds) required to allow reorg of a chain of "
"depth >= maxreorg on a node with more than minreorgpeers peers. (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Sets the serialization of raw transaction or block hex returned in non-"
"verbose mode, non-segwit(0) or segwit(1) (default: %d)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Sets the wallet to use/not use bip44 12-words, non-bip44=0 or bip44=1 "
"(default: 1). Note: By default 12-words will automatically be generated for "
"you (random word selection). See -mnemonic and -mnemonicpassphrase below to "
"create a wallet using a specific word list (use an existing bip-44 wallet "
"word-list), or use the RPC/CLI getmywords or dumpwallet to retrieve the auto-"
"generated word-list. This flag is ignored if there is already an existing "
"non-bip44 wallet."),
QT_TRANSLATE_NOOP("fren-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("fren-core", ""
"The default height that is required before rewards are allowed to be sent out"),
QT_TRANSLATE_NOOP("fren-core", ""
"The fee rate (in %s/kB) that indicates your tolerance for discarding change "
"by adding it to the fee (default: %s). Note: An output is discarded if it is "
"dust at this rate, but we will always discard up to the dust relay fee and a "
"discard fee above that is limited by the fee estimate for the longest target"),
QT_TRANSLATE_NOOP("fren-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("fren-core", ""
"This address doesn't contain the correct tags to pass the verifier string "
"check: "),
QT_TRANSLATE_NOOP("fren-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("fren-core", ""
"This is the transaction fee you may discard if change is smaller than dust "
"at this level"),
QT_TRANSLATE_NOOP("fren-core", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("fren-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit %s and cryptographic software written by Eric Young and "
"UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("fren-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("fren-core", ""
"Tries to keep outbound traffic under the given target (in MiB per 24h), 0 = "
"no limit (default: %d)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Unable to get restricted assets verifier string. Database out of sync. "
"Reindex required"),
QT_TRANSLATE_NOOP("fren-core", ""
"Unable to reissue asset: amount must be divisible by the smaller unit "
"assigned to the asset"),
QT_TRANSLATE_NOOP("fren-core", ""
"Unable to reissue asset: unit must be larger than current unit selection"),
QT_TRANSLATE_NOOP("fren-core", ""
"Unable to replay blocks. You will need to rebuild the database using -"
"reindex-chainstate."),
QT_TRANSLATE_NOOP("fren-core", ""
"Unable to rewind the database to a pre-fork state. You will need to "
"redownload the blockchain"),
QT_TRANSLATE_NOOP("fren-core", ""
"Unable to transfer restricted asset, this restricted asset has been globally "
"frozen"),
QT_TRANSLATE_NOOP("fren-core", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("fren-core", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("fren-core", ""
"Use UPnP to map the listening port (default: 1 when listening and no -proxy)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Username and hashed password for JSON-RPC connections. The field <userpw> "
"comes in the format: <USERNAME>:<SALT>$<HASH>. A canonical python script is "
"included in share/rpcuser. The client then connects normally using the "
"rpcuser=<USERNAME>/rpcpassword=<PASSWORD> pair of arguments. This option can "
"be specified multiple times"),
QT_TRANSLATE_NOOP("fren-core", ""
"Verifier string has length greater than 80 after whitespaces and '#' are "
"removed"),
QT_TRANSLATE_NOOP("fren-core", ""
"Wallet will not create transactions that violate mempool chain limits "
"(default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("fren-core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("fren-core", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("fren-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("fren-core", ""
"When getblocktemplate is called. It will create the coinbase transaction "
"using this address(default: empty string)"),
QT_TRANSLATE_NOOP("fren-core", ""
"When set, if the CreateNewBlock fails because of a transaction. The mempool "
"will be cleared. (default: %d)"),
QT_TRANSLATE_NOOP("fren-core", ""
"When set, if the chain is in initialblockdownload the getblocktemplate rpc "
"call will still return block data (default: %d)"),
QT_TRANSLATE_NOOP("fren-core", ""
"When transferring an 'Ownership Asset' the amount must always be 1. Please "
"try again with the amount of 1"),
QT_TRANSLATE_NOOP("fren-core", ""
"Whether to save the mempool on shutdown and load on restart (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", ""
"Whitelist peers connecting from the given IP address (e.g. 1.2.3.4) or CIDR "
"notated network (e.g. 1.2.3.0/24). Can be specified multiple times."),
QT_TRANSLATE_NOOP("fren-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("fren-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("fren-core", ""
"You need to rebuild the database using -reindex-chainstate to change -"
"addressindex"),
QT_TRANSLATE_NOOP("fren-core", ""
"You need to rebuild the database using -reindex-chainstate to change -"
"spentindex"),
QT_TRANSLATE_NOOP("fren-core", ""
"You need to rebuild the database using -reindex-chainstate to change -"
"timestampindex"),
QT_TRANSLATE_NOOP("fren-core", "%d of last 100 blocks have unexpected version"),
QT_TRANSLATE_NOOP("fren-core", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("fren-core", "%s is set very high!"),
QT_TRANSLATE_NOOP("fren-core", "' doesn't exist in the database"),
QT_TRANSLATE_NOOP("fren-core", "' has already been used"),
QT_TRANSLATE_NOOP("fren-core", "' is not a valid character in the expression: "),
QT_TRANSLATE_NOOP("fren-core", "' the amount trying to reissue is to large"),
QT_TRANSLATE_NOOP("fren-core", "(default: %s)"),
QT_TRANSLATE_NOOP("fren-core", "(default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("fren-core", "<category> can be:"),
QT_TRANSLATE_NOOP("fren-core", "A space separated list of 12-words used to import a bip44 wallet"),
QT_TRANSLATE_NOOP("fren-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("fren-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("fren-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("fren-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("fren-core", "Asset Transfer amounts must be greater than 0"),
QT_TRANSLATE_NOOP("fren-core", "Asset doesn't exist: "),
QT_TRANSLATE_NOOP("fren-core", "Asset must be a qualifier, sub qualifier, or a restricted asset"),
QT_TRANSLATE_NOOP("fren-core", "Asset name is not valid"),
QT_TRANSLATE_NOOP("fren-core", "Asset with this name is already in the mempool"),
QT_TRANSLATE_NOOP("fren-core", "Attempt to recover private keys from a corrupt wallet on startup"),
QT_TRANSLATE_NOOP("fren-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("fren-core", "Block creation options:"),
QT_TRANSLATE_NOOP("fren-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("fren-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("fren-core", "Chain selection options:"),
QT_TRANSLATE_NOOP("fren-core", "Change index out of range"),
QT_TRANSLATE_NOOP("fren-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("fren-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("fren-core", "Connection options:"),
QT_TRANSLATE_NOOP("fren-core", "Copyright (C) %i-%i"),
QT_TRANSLATE_NOOP("fren-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("fren-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("fren-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("fren-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("fren-core", "Done Loading"),
QT_TRANSLATE_NOOP("fren-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("fren-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("fren-core", "Enable publish raw asset messages in <address>"),
QT_TRANSLATE_NOOP("fren-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("fren-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("fren-core", "Enable transaction replacement in the memory pool (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Error creating %s: You can't create non-HD wallets with this version."),
QT_TRANSLATE_NOOP("fren-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("fren-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("fren-core", "Error loading %s"),
QT_TRANSLATE_NOOP("fren-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("fren-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("fren-core", "Error loading %s: You can't disable HD on an already existing HD wallet"),
QT_TRANSLATE_NOOP("fren-core", "Error loading block database"),
QT_TRANSLATE_NOOP("fren-core", "Error loading wallet %s. -wallet filename must be a regular file."),
QT_TRANSLATE_NOOP("fren-core", "Error loading wallet %s. Duplicate -wallet filename specified."),
QT_TRANSLATE_NOOP("fren-core", "Error loading wallet %s. Invalid characters in -wallet filename."),
QT_TRANSLATE_NOOP("fren-core", "Error not set"),
QT_TRANSLATE_NOOP("fren-core", "Error opening block database"),
QT_TRANSLATE_NOOP("fren-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("fren-core", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("fren-core", "Error writing bip 39 passphrase to database"),
QT_TRANSLATE_NOOP("fren-core", "Error writing bip 39 vchseed to database"),
QT_TRANSLATE_NOOP("fren-core", "Error writing bip 39 words to database"),
QT_TRANSLATE_NOOP("fren-core", "Error"),
QT_TRANSLATE_NOOP("fren-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("fren-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("fren-core", "Every '(' must have a corresponding ')' in the expression: "),
QT_TRANSLATE_NOOP("fren-core", "Failed to extract destination from change script"),
QT_TRANSLATE_NOOP("fren-core", "Failed to find restricted asset change address from inputs"),
QT_TRANSLATE_NOOP("fren-core", "Failed to get asset data from script"),
QT_TRANSLATE_NOOP("fren-core", "Failed to get verifier string from output: "),
QT_TRANSLATE_NOOP("fren-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("fren-core", "Failed to load Assets Database"),
QT_TRANSLATE_NOOP("fren-core", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("fren-core", "Flag must be 1 or 0"),
QT_TRANSLATE_NOOP("fren-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("fren-core", "Importing..."),
QT_TRANSLATE_NOOP("fren-core", "Imports blocks from external blk000??.dat file on startup"),
QT_TRANSLATE_NOOP("fren-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("fren-core", "Information"),
QT_TRANSLATE_NOOP("fren-core", "Init Message Channels - Scanning Asset Transactions"),
QT_TRANSLATE_NOOP("fren-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("fren-core", "Insufficient asset funds"),
QT_TRANSLATE_NOOP("fren-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("fren-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("fren-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("fren-core", "Invalid Qualifier Name: "),
QT_TRANSLATE_NOOP("fren-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("fren-core", "Invalid amount for -discardfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("fren-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("fren-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("fren-core", "Invalid expressions in verifier string: "),
QT_TRANSLATE_NOOP("fren-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: amount must be "),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: amount must be between "),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: asset amount can't be equal to or less than zero."),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: asset amount greater than max money: "),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: asset_name '"),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: has_ipfs must be 0 or 1."),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: ipfs_hash must be 34 bytes, Txid must be 32 bytes"),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: reissuable must be 0 or 1"),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: reissuable must be 0"),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: units must be "),
QT_TRANSLATE_NOOP("fren-core", "Invalid parameter: units must be between 0-8."),
QT_TRANSLATE_NOOP("fren-core", "Invalid syntax: "),
QT_TRANSLATE_NOOP("fren-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("fren-core", "Length is to large. Please use a smaller length"),
QT_TRANSLATE_NOOP("fren-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Loading P2P addresses..."),
QT_TRANSLATE_NOOP("fren-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("fren-core", "Loading block index..."),
QT_TRANSLATE_NOOP("fren-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("fren-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("fren-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("fren-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Mempool cleared"),
QT_TRANSLATE_NOOP("fren-core", "Multiple verifier strings found in transaction"),
QT_TRANSLATE_NOOP("fren-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("fren-core", "Node relay options:"),
QT_TRANSLATE_NOOP("fren-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("fren-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("fren-core", "Options:"),
QT_TRANSLATE_NOOP("fren-core", "Passphrase securing your 12-word mnemonic word-list"),
QT_TRANSLATE_NOOP("fren-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("fren-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Print this help message and exit"),
QT_TRANSLATE_NOOP("fren-core", "Print version and exit"),
QT_TRANSLATE_NOOP("fren-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("fren-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("fren-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("fren-core", "RPC server options:"),
QT_TRANSLATE_NOOP("fren-core", "Rebuild chain state and block index from the blk*.dat files on disk"),
QT_TRANSLATE_NOOP("fren-core", "Rebuild chain state from the currently indexed blocks"),
QT_TRANSLATE_NOOP("fren-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("fren-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Replaying blocks..."),
QT_TRANSLATE_NOOP("fren-core", "Rescan the block chain for missing wallet transactions on startup"),
QT_TRANSLATE_NOOP("fren-core", "Rescanning..."),
QT_TRANSLATE_NOOP("fren-core", "Restricted asset transfer from address that has been frozen"),
QT_TRANSLATE_NOOP("fren-core", "Rewinding blocks..."),
QT_TRANSLATE_NOOP("fren-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("fren-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("fren-core", "Send transactions with full-RBF opt-in enabled (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("fren-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Set maximum BIP141 block weight (default: %d)"),
QT_TRANSLATE_NOOP("fren-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("fren-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("fren-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("fren-core", "Signing asset transaction failed"),
QT_TRANSLATE_NOOP("fren-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("fren-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("fren-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("fren-core", "Specify data directory"),
QT_TRANSLATE_NOOP("fren-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("fren-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("fren-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("fren-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Starting network threads..."),
QT_TRANSLATE_NOOP("fren-core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("fren-core", "The symbol: '"),
QT_TRANSLATE_NOOP("fren-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("fren-core", "The verifier string has two operators without a tag between them"),
QT_TRANSLATE_NOOP("fren-core", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("fren-core", "This is experimental software."),
QT_TRANSLATE_NOOP("fren-core", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("fren-core", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("fren-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("fren-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("fren-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("fren-core", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("fren-core", "Transaction fee and change calculation failed"),
QT_TRANSLATE_NOOP("fren-core", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("fren-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("fren-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("fren-core", "Transaction too large"),
QT_TRANSLATE_NOOP("fren-core", "Turn off the databasing the messages sent with assets (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("fren-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("fren-core", "Unable to generate initial keys"),
QT_TRANSLATE_NOOP("fren-core", "Unable to get coin to verify restricted asset transfer from address"),
QT_TRANSLATE_NOOP("fren-core", "Unable to reissue asset: amount must be 0 or larger"),
QT_TRANSLATE_NOOP("fren-core", "Unable to reissue asset: asset_name '"),
QT_TRANSLATE_NOOP("fren-core", "Unable to reissue asset: reissuable is set to false"),
QT_TRANSLATE_NOOP("fren-core", "Unable to reissue asset: reissuable must be 0 or 1"),
QT_TRANSLATE_NOOP("fren-core", "Unable to reissue asset: unit must be between 8 and -1"),
QT_TRANSLATE_NOOP("fren-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("fren-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("fren-core", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("fren-core", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("fren-core", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("fren-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("fren-core", "Upgrade wallet to latest format on startup"),
QT_TRANSLATE_NOOP("fren-core", "Upgrading UTXO database"),
QT_TRANSLATE_NOOP("fren-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "Use the test chain"),
QT_TRANSLATE_NOOP("fren-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("fren-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("fren-core", "Valid Verifier"),
QT_TRANSLATE_NOOP("fren-core", "Variable is not allow in the expression: '"),
QT_TRANSLATE_NOOP("fren-core", "Verifier String doesn't exist for asset: "),
QT_TRANSLATE_NOOP("fren-core", "Verifier String for asset trasnfer, not found"),
QT_TRANSLATE_NOOP("fren-core", "Verifier not found for asset: "),
QT_TRANSLATE_NOOP("fren-core", "Verifier string can not be empty. To default to true, use \"true\""),
QT_TRANSLATE_NOOP("fren-core", "Verifier string is empty"),
QT_TRANSLATE_NOOP("fren-core", "Verifier string not found"),
QT_TRANSLATE_NOOP("fren-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("fren-core", "Verifying wallet(s)..."),
QT_TRANSLATE_NOOP("fren-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("fren-core", "Wallet debugging/testing options:"),
QT_TRANSLATE_NOOP("fren-core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("fren-core", "Wallet options:"),
QT_TRANSLATE_NOOP("fren-core", "Warning"),
QT_TRANSLATE_NOOP("fren-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("fren-core", "Whether to operate in a blocks only mode (default: %u)"),
QT_TRANSLATE_NOOP("fren-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("fren-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("fren-core", "ZeroMQ notification options:"),
};
