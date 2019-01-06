# Changelog

## v2.2.0 (Oct 09, 2017)

 * The API key is now optional

## v2.1.0 (Oct 03, 2017)

 * Changed lookups to directly access the Steam Web API (requires key)
 * Added sm_vacbans_vac_ignore_before to ignore VAC bans before a specific date
 * Replaced sm_vacbans_action with sm_vacbans_actions for more options

## v2.0.0 (Feb 21, 2017)

 * Switched to the Steam Web API
 * Added detection of game, Steam Community, and trade bans
 * Added ConVars to control the types of bans that are detected
 * Added option to ignore VAC bans after a specified number of days
 * Added admin command to list the bans of connected clients
 * Changed the default action to kick
 * Changed the default cache time to 1 day
 * Added fallback to cached data when there is an error
 * Fixed new database connections being created on every map change

## v1.4.3 (Mar 08, 2015)

 * Fixed missing client name in admin messages

## v1.4.2 (Feb 22, 2015)

 * Fixed handling of incorrect usage of sm_vacbans_whitelist
 * Changed console commands to admin commands

## v1.4.1 (Feb 12, 2015)

 * Updated sm_vacbans_whitelist to accept new SteamIDs
 * Added option to alert admins to VAC banned players

## v1.4.0 (Feb 07, 2015)

 * Updated to support SourceMod 1.7
 * Fixed DataPack operation out of bounds errors

## v1.3.6 (Nov 15, 2013)

 * Fixed DataPack operation out of bounds errors

## v1.3.5 (Mar 27, 2013)

 * Fixed bans firing too early

## v1.3.4 (Sep 04, 2011)

 * Fixed some race conditions

## v1.3.3 (Feb 09, 2010)

 * Added filter for bots on client checks

## v1.3.2 (Jul 24, 2009)

 * Fixed logging error

## v1.3.1 (Jul 18, 2009)

 * Removed format from translations to fix odd error

## v1.3.0 (May 25, 2009)

 * Added support for other named database configs

## v1.2.1 (Apr 13, 2009)

 * Fixed conversion of long SteamIDs (StrontiumDog)

## v1.2.0 (Mar 26, 2009)

 * Added whitelist support
 * Changed some messages to reflect the plugin name

## v1.1.1 (Mar 19, 2009)

 * Fixed bans triggering before client is in-game
 * Removed dependency on the regex extension
 * Added logging to vacbans.log for all action settings

## v1.1.0 (Feb 23, 2009)

 * Now uses DataPacks instead of files for data storage
 * Added RegEx to scan raw downloaded data
 * Verifies client against original ID after scanning profile
 * Now uses FriendID instead of SteamID for the database keys
 * Various code organization improvements
 * Added command to reset the local cache database

## v1.0.1 (Feb 19, 2009)

 * Changed file naming to avoid conflicts

## v1.0.0 (Nov 24, 2008)

 * Initial Release
