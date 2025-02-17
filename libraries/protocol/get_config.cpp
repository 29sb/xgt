#include <xgt/protocol/get_config.hpp>
#include <xgt/protocol/config.hpp>
#include <xgt/protocol/asset.hpp>
#include <xgt/protocol/types.hpp>
#include <xgt/protocol/version.hpp>

namespace xgt { namespace protocol {

fc::variant_object get_config()
{
   fc::mutable_variant_object result;

#ifdef IS_TEST_NET
   result[ "IS_TEST_NET" ] = true;
#else
   result[ "IS_TEST_NET" ] = false;
#endif

   result["XTT_MAX_VOTABLE_ASSETS"] = XTT_MAX_VOTABLE_ASSETS;
   result["XTT_UPVOTE_LOCKOUT"] = XTT_UPVOTE_LOCKOUT;
   result["XTT_EMIT_INDEFINITELY"] = XTT_EMIT_INDEFINITELY;
   result["XTT_MAX_NOMINAL_VOTES_PER_DAY"] = XTT_MAX_NOMINAL_VOTES_PER_DAY;
   result["XTT_DEFAULT_VOTES_PER_REGEN_PERIOD"] = XTT_DEFAULT_VOTES_PER_REGEN_PERIOD;
   result["XTT_BALLAST_SUPPLY_PERCENT"] = XTT_BALLAST_SUPPLY_PERCENT;
   result["XTT_MAX_ICO_TIERS"] = XTT_MAX_ICO_TIERS;

   result["XGT_SYMBOL"] = XGT_SYMBOL;
   result["XGT_SYMBOL_STR"] = XGT_SYMBOL_STR;

   result["XGT_INITIAL_VOTE_POWER_RATE"] = XGT_INITIAL_VOTE_POWER_RATE;
   result["XGT_REDUCED_VOTE_POWER_RATE"] = XGT_REDUCED_VOTE_POWER_RATE;
   result["XGT_100_PERCENT"] = XGT_100_PERCENT;
   result["XGT_1_PERCENT"] = XGT_1_PERCENT;
   result["XGT_WALLET_RECOVERY_REQUEST_EXPIRATION_PERIOD"] = XGT_WALLET_RECOVERY_REQUEST_EXPIRATION_PERIOD;
   result["XGT_ACTIVE_CHALLENGE_COOLDOWN"] = XGT_ACTIVE_CHALLENGE_COOLDOWN;
   result["XGT_ACTIVE_CHALLENGE_FEE"] = XGT_ACTIVE_CHALLENGE_FEE;
   result["XGT_ADDRESS_PREFIX"] = XGT_ADDRESS_PREFIX;
   result["XGT_WALLET_NAME_LENGTH"] = XGT_WALLET_NAME_LENGTH;
   result["XGT_APR_PERCENT_MULTIPLY_PER_BLOCK"] = XGT_APR_PERCENT_MULTIPLY_PER_BLOCK;
   result["XGT_APR_PERCENT_MULTIPLY_PER_HOUR"] = XGT_APR_PERCENT_MULTIPLY_PER_HOUR;
   result["XGT_APR_PERCENT_MULTIPLY_PER_ROUND"] = XGT_APR_PERCENT_MULTIPLY_PER_ROUND;
   result["XGT_APR_PERCENT_SHIFT_PER_BLOCK"] = XGT_APR_PERCENT_SHIFT_PER_BLOCK;
   result["XGT_APR_PERCENT_SHIFT_PER_HOUR"] = XGT_APR_PERCENT_SHIFT_PER_HOUR;
   result["XGT_APR_PERCENT_SHIFT_PER_ROUND"] = XGT_APR_PERCENT_SHIFT_PER_ROUND;
   result["XGT_BANDWIDTH_AVERAGE_WINDOW_SECONDS"] = XGT_BANDWIDTH_AVERAGE_WINDOW_SECONDS;
   result["XGT_BANDWIDTH_PRECISION"] = XGT_BANDWIDTH_PRECISION;
   result["XGT_BLOCKCHAIN_PRECISION"] = XGT_BLOCKCHAIN_PRECISION;
   result["XGT_BLOCKCHAIN_PRECISION_DIGITS"] = XGT_BLOCKCHAIN_PRECISION_DIGITS;
   result["XGT_BLOCKCHAIN_HARDFORK_VERSION"] = XGT_BLOCKCHAIN_HARDFORK_VERSION;
   result["XGT_BLOCKCHAIN_VERSION"] = XGT_BLOCKCHAIN_VERSION;
   result["XGT_BLOCK_INTERVAL"] = XGT_BLOCK_INTERVAL;
   result["XGT_BLOCKS_PER_DAY"] = XGT_BLOCKS_PER_DAY;
   result["XGT_BLOCKS_PER_HOUR"] = XGT_BLOCKS_PER_HOUR;
   result["XGT_BLOCKS_PER_YEAR"] = XGT_BLOCKS_PER_YEAR;
   result["XGT_CHAIN_ID"] = XGT_CHAIN_ID;
   result["XGT_COMMENT_TITLE_LIMIT"] = XGT_COMMENT_TITLE_LIMIT;
   result["XGT_CONTENT_APR_PERCENT"] = XGT_CONTENT_APR_PERCENT;
   result["XGT_CONTENT_CONSTANT_HF0"] = XGT_CONTENT_CONSTANT_HF0;
   result["XGT_CONTENT_CONSTANT_HF21"] = XGT_CONTENT_CONSTANT_HF21;
   result["XGT_CREATE_WALLET_WITH_XGT_MODIFIER"] = XGT_CREATE_WALLET_WITH_XGT_MODIFIER;
   result["XGT_CURATE_APR_PERCENT"] = XGT_CURATE_APR_PERCENT;
   result["XGT_CUSTOM_OP_DATA_MAX_LENGTH"] = XGT_CUSTOM_OP_DATA_MAX_LENGTH;
   result["XGT_CUSTOM_OP_ID_MAX_LENGTH"] = XGT_CUSTOM_OP_ID_MAX_LENGTH;
   result["XGT_DOWNVOTE_POOL_PERCENT_HF21"] = XGT_DOWNVOTE_POOL_PERCENT_HF21;
   result["XGT_FEED_INTERVAL_BLOCKS"] = XGT_FEED_INTERVAL_BLOCKS;
   result["XGT_GENESIS_TIME"] = XGT_GENESIS_TIME;
   result["XGT_HARDFORK_REQUIRED_WITNESSES"] = XGT_HARDFORK_REQUIRED_WITNESSES;
   result["XGT_HF21_CONVERGENT_LINEAR_RECENT_CLAIMS"] = XGT_HF21_CONVERGENT_LINEAR_RECENT_CLAIMS;
   result["XGT_INFLATION_NARROWING_PERIOD"] = XGT_INFLATION_NARROWING_PERIOD;
   result["XGT_INFLATION_RATE_START_PERCENT"] = XGT_INFLATION_RATE_START_PERCENT;
   result["XGT_INFLATION_RATE_STOP_PERCENT"] = XGT_INFLATION_RATE_STOP_PERCENT;
   result["XGT_INIT_MINER_NAME"] = XGT_INIT_MINER_NAME;
   result["XGT_INIT_PUBLIC_KEY_STR"] = XGT_INIT_PUBLIC_KEY_STR;
#if 0
   // do not expose private key, period.
   // we need this line present but inactivated so CI check for all constants in config.hpp doesn't complain.
   result["XGT_INIT_PRIVATE_KEY"] = XGT_INIT_PRIVATE_KEY;
#endif
   result["XGT_INIT_SUPPLY"] = XGT_INIT_SUPPLY;
   result["XGT_INIT_TIME"] = XGT_INIT_TIME;
   result["XGT_IRREVERSIBLE_THRESHOLD"] = XGT_IRREVERSIBLE_THRESHOLD;
   result["XGT_MAX_WALLET_CREATION_FEE"] = XGT_MAX_WALLET_CREATION_FEE;
   result["XGT_MAX_WALLET_NAME_LENGTH"] = XGT_MAX_WALLET_NAME_LENGTH;
   result["XGT_MAX_ASSET_WHITELIST_AUTHORITIES"] = XGT_MAX_ASSET_WHITELIST_AUTHORITIES;
   result["XGT_MAX_AUTHORITY_MEMBERSHIP"] = XGT_MAX_AUTHORITY_MEMBERSHIP;
   result["XGT_MAX_BLOCK_SIZE"] = XGT_MAX_BLOCK_SIZE;
   result["XGT_SOFT_MAX_BLOCK_SIZE"] = XGT_SOFT_MAX_BLOCK_SIZE;
   result["XGT_MAX_COMMENT_DEPTH"] = XGT_MAX_COMMENT_DEPTH;
   result["XGT_MAX_COMMENT_DEPTH_PRE_HF17"] = XGT_MAX_COMMENT_DEPTH_PRE_HF17;
   result["XGT_MAX_FEED_AGE_SECONDS"] = XGT_MAX_FEED_AGE_SECONDS;
   result["XGT_MAX_INSTANCE_ID"] = XGT_MAX_INSTANCE_ID;
   result["XGT_MAX_MEMO_SIZE"] = XGT_MAX_MEMO_SIZE;
   result["XGT_MAX_WITNESSES"] = XGT_MAX_WITNESSES;
   result["XGT_MAX_VOTED_WITNESSES"] = XGT_MAX_VOTED_WITNESSES;
   result["XGT_MAX_MINER_WITNESSES"] = XGT_MAX_MINER_WITNESSES;
   result["XGT_MAX_PERMLINK_LENGTH"] = XGT_MAX_PERMLINK_LENGTH;
   result["XGT_MAX_RATION_DECAY_RATE"] = XGT_MAX_RATION_DECAY_RATE;
   result["XGT_MAX_RESERVE_RATIO"] = XGT_MAX_RESERVE_RATIO;
   result["XGT_MAX_SATOSHIS"] = XGT_MAX_SATOSHIS;
   result["XGT_MAX_SHARE_SUPPLY"] = XGT_MAX_SHARE_SUPPLY;
   result["XGT_MAX_SIG_CHECK_DEPTH"] = XGT_MAX_SIG_CHECK_DEPTH;
   result["XGT_MAX_SIG_CHECK_WALLETS"] = XGT_MAX_SIG_CHECK_WALLETS;
   result["XGT_MAX_TIME_UNTIL_EXPIRATION"] = XGT_MAX_TIME_UNTIL_EXPIRATION;
   result["XGT_MAX_TRANSACTION_SIZE"] = XGT_MAX_TRANSACTION_SIZE;
   result["XGT_MAX_UNDO_HISTORY"] = XGT_MAX_UNDO_HISTORY;
   result["XGT_MAX_URL_LENGTH"] = XGT_MAX_URL_LENGTH;
   result["XGT_MAX_VOTE_CHANGES"] = XGT_MAX_VOTE_CHANGES;
   result["XGT_MAX_WITNESS_URL_LENGTH"] = XGT_MAX_WITNESS_URL_LENGTH;
   result["XGT_MIN_WALLET_CREATION_FEE"] = XGT_MIN_WALLET_CREATION_FEE;
   result["XGT_MIN_WALLET_NAME_LENGTH"] = XGT_MIN_WALLET_NAME_LENGTH;
   result["XGT_MIN_BLOCK_SIZE_LIMIT"] = XGT_MIN_BLOCK_SIZE_LIMIT;
   result["XGT_MIN_BLOCK_SIZE"] = XGT_MIN_BLOCK_SIZE;
   result["XGT_MIN_PERMLINK_LENGTH"] = XGT_MIN_PERMLINK_LENGTH;
   result["XGT_MIN_REPLY_INTERVAL"] = XGT_MIN_REPLY_INTERVAL;
   result["XGT_MIN_REPLY_INTERVAL_HF20"] = XGT_MIN_REPLY_INTERVAL_HF20;
   result["XGT_MIN_ROOT_COMMENT_INTERVAL"] = XGT_MIN_ROOT_COMMENT_INTERVAL;
   result["XGT_MIN_COMMENT_EDIT_INTERVAL"] = XGT_MIN_COMMENT_EDIT_INTERVAL;
   result["XGT_MIN_VOTE_INTERVAL_SEC"] = XGT_MIN_VOTE_INTERVAL_SEC;
   result["XGT_MINER_WALLET"] = XGT_MINER_WALLET;
   result["XGT_MINER_PAY_PERCENT"] = XGT_MINER_PAY_PERCENT;
   result["XGT_MIN_FEEDS"] = XGT_MIN_FEEDS;
   result["XGT_MINING_BLOCKS_PER_SECOND"] = XGT_MINING_BLOCKS_PER_SECOND;
   result["XGT_MINING_BTC_BLOCKS_PER_SECOND"] = XGT_MINING_BTC_BLOCKS_PER_SECOND;
   result["XGT_MINING_RELATIVE_SPEED"] = XGT_MINING_RELATIVE_SPEED;
   result["XGT_STARTING_OFFSET"] = XGT_STARTING_OFFSET;
   result["XGT_MINING_REWARD"] = XGT_MINING_REWARD;
   result["XGT_MIN_POW_REWARD"] = XGT_MIN_POW_REWARD;
   result["XGT_MINING_ADJUSTMENT_MAX_FACTOR"] = XGT_MINING_ADJUSTMENT_MAX_FACTOR;
   result["XGT_MINING_REWARD_HALVING_INTERVAL"] = XGT_MINING_REWARD_HALVING_INTERVAL;
   result["XGT_MINING_RECALC_EVERY_N_BLOCKS"] = XGT_MINING_RECALC_EVERY_N_BLOCKS;
   result["XGT_MINING_TARGET_START"] = XGT_MINING_TARGET_START;
   result["XGT_MINING_TARGET_MAX"] = XGT_MINING_TARGET_MAX;
   result["XGT_MINING_REWARD_HALVING_INTERVAL"] = XGT_MINING_REWARD_HALVING_INTERVAL;
   result["XGT_MIN_TRANSACTION_EXPIRATION_LIMIT"] = XGT_MIN_TRANSACTION_EXPIRATION_LIMIT;
   result["XGT_MIN_TRANSACTION_SIZE_LIMIT"] = XGT_MIN_TRANSACTION_SIZE_LIMIT;
   result["XGT_MIN_UNDO_HISTORY"] = XGT_MIN_UNDO_HISTORY;
   result["XGT_NULL_WALLET"] = XGT_NULL_WALLET;
   result["XGT_RECOVERY_AUTH_HISTORY_TRACKING_START_BLOCK_NUM"] = XGT_RECOVERY_AUTH_HISTORY_TRACKING_START_BLOCK_NUM;
   result["XGT_RECOVERY_AUTH_RECOVERY_PERIOD"] = XGT_RECOVERY_AUTH_RECOVERY_PERIOD;
   result["XGT_RECOVERY_CHALLENGE_COOLDOWN"] = XGT_RECOVERY_CHALLENGE_COOLDOWN;
   result["XGT_RECOVERY_CHALLENGE_FEE"] = XGT_RECOVERY_CHALLENGE_FEE;
   result["XGT_RECOVERY_UPDATE_LIMIT"] = XGT_RECOVERY_UPDATE_LIMIT;
   result["XGT_POST_AVERAGE_WINDOW"] = XGT_POST_AVERAGE_WINDOW;
   result["XGT_POST_WEIGHT_CONSTANT"] = XGT_POST_WEIGHT_CONSTANT;
   result["XGT_POW_APR_PERCENT"] = XGT_POW_APR_PERCENT;
   result["XGT_PRODUCER_APR_PERCENT"] = XGT_PRODUCER_APR_PERCENT;
   result["XGT_SECONDS_PER_YEAR"] = XGT_SECONDS_PER_YEAR;
   result["XGT_REVERSE_AUCTION_WINDOW_SECONDS"] = XGT_REVERSE_AUCTION_WINDOW_SECONDS;
   result["XGT_ROOT_POST_PARENT"] = XGT_ROOT_POST_PARENT;
   result["XGT_SOFT_MAX_COMMENT_DEPTH"] = XGT_SOFT_MAX_COMMENT_DEPTH;
   result["XGT_START_MINER_VOTING_BLOCK"] = XGT_START_MINER_VOTING_BLOCK;
   result["XGT_TEMP_WALLET"] = XGT_TEMP_WALLET;
   result["XGT_UPVOTE_LOCKOUT_SECONDS"] = XGT_UPVOTE_LOCKOUT_SECONDS;
   result["XGT_VOTE_DUST_THRESHOLD"] = XGT_VOTE_DUST_THRESHOLD;
   result["XGT_VOTING_ENERGY_REGENERATION_SECONDS"] = XGT_VOTING_ENERGY_REGENERATION_SECONDS;
   result["XGT_VIRTUAL_SCHEDULE_LAP_LENGTH"] = XGT_VIRTUAL_SCHEDULE_LAP_LENGTH;
   result["XGT_VIRTUAL_SCHEDULE_LAP_LENGTH2"] = XGT_VIRTUAL_SCHEDULE_LAP_LENGTH2;
   result["XGT_VOTES_PER_PERIOD_XTT_HF"] = XGT_VOTES_PER_PERIOD_XTT_HF;
   result["XGT_MAX_LIMIT_ORDER_EXPIRATION"] = XGT_MAX_LIMIT_ORDER_EXPIRATION;
   result["XGT_RD_MIN_DECAY_BITS"] = XGT_RD_MIN_DECAY_BITS;
   result["XGT_RD_MAX_DECAY_BITS"] = XGT_RD_MAX_DECAY_BITS;
   result["XGT_RD_DECAY_DENOM_SHIFT"] = XGT_RD_DECAY_DENOM_SHIFT;
   result["XGT_RD_MAX_POOL_BITS"] = XGT_RD_MAX_POOL_BITS;
   result["XGT_RD_MAX_BUDGET_1"] = XGT_RD_MAX_BUDGET_1;
   result["XGT_RD_MAX_BUDGET_2"] = XGT_RD_MAX_BUDGET_2;
   result["XGT_RD_MAX_BUDGET_3"] = XGT_RD_MAX_BUDGET_3;
   result["XGT_RD_MAX_BUDGET"] = XGT_RD_MAX_BUDGET;
   result["XGT_RD_MIN_DECAY"] = XGT_RD_MIN_DECAY;
   result["XGT_RD_MIN_BUDGET"] = XGT_RD_MIN_BUDGET;
   result["XGT_RD_MAX_DECAY"] = XGT_RD_MAX_DECAY;
   result["XGT_DECAY_BACKSTOP_PERCENT"] = XGT_DECAY_BACKSTOP_PERCENT;
   result["XGT_BLOCK_GENERATION_POSTPONED_TX_LIMIT"] = XGT_BLOCK_GENERATION_POSTPONED_TX_LIMIT;
   result["XGT_PENDING_TRANSACTION_EXECUTION_LIMIT"] = XGT_PENDING_TRANSACTION_EXECUTION_LIMIT;
   result["XGT_TREASURY_WALLET"] = XGT_TREASURY_WALLET;
   result["XGT_NETWORK_TYPE"] = XGT_NETWORK_TYPE;
   result["XGT_DB_FORMAT_VERSION"] = XGT_DB_FORMAT_VERSION;

   return result;
}

} } // xgt::protocol
