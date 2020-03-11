# VAC Status Checker
[![Build Status](https://travis-ci.org/stevotvr/sourcemod-vacbans.svg)](https://travis-ci.org/stevotvr/sourcemod-vacbans)
[![Latest Release](https://img.shields.io/github/release/stevotvr/sourcemod-vacbans.svg)](https://github.com/stevotvr/sourcemod-vacbans/releases/latest)
[![Total Downloads](https://img.shields.io/github/downloads/stevotvr/sourcemod-vacbans/total.svg)](https://github.com/stevotvr/sourcemod-vacbans/releases)

[Official AlliedModders Thread](http://forums.alliedmods.net/showthread.php?t=80942)

Plugin for SourceMod that checks for VAC, game, Steam Community, and trade bans on the accounts of connecting clients and takes the desired action. Useful for admins who want to block access to people for bad behavior outside the server.

## Requirements
* One of the below extensions:
	* [SteamWorks](https://forums.alliedmods.net/showthread.php?t=229556)
	* [SteamTools](https://forums.alliedmods.net/forumdisplay.php?f=147)
	* [Socket](https://forums.alliedmods.net/showthread.php?t=67640)
* A Steam Web API key obtained from https://steamcommunity.com/dev/apikey
* SourceMod 1.7+

 ## Installation
 1. Download **vacbans-x.x.x.zip** from the [latest release](https://github.com/stevotvr/sourcemod-vacbans/releases/latest);
 2. Extract to **addons/sourcemod**;
 3. Set `sm_vacbans_apikey` to your Steam Web API key;

 ## Console Variables
```
// Actions to take on detected clients
// Add up the options from the list:
// 1:  Log to sourcemod/logs/vacbans.log
// 2:  Kick
// 4:  Ban
// 8:  Display message to admins
// 16: Display message to all players
// -
// Default: "3"
// Minimum: "0.000000"
// Maximum: "31.000000"
sm_vacbans_actions "3"

// The Steam Web API key used by VAC Status Checker
// https://steamcommunity.com/dev/apikey
// -
// Default: ""
sm_vacbans_apikey ""

// How long in days before re-checking the same client
// -
// Default: "1"
// Minimum: "0.000000"
sm_vacbans_cachetime "1"

// The named database config to use for caching
// -
// Default: "storage-local"
sm_vacbans_db "storage-local"

// Enable Steam Community ban detection
// -
// Default: "0"
// Minimum: "0.000000"
// Maximum: "1.000000"
sm_vacbans_detect_community_bans "0"

// Enable economy (trade) ban detection (0 = disabled, 1 = bans only, 2 = bans and probation)
// -
// Default: "0"
// Minimum: "0.000000"
// Maximum: "2.000000"
sm_vacbans_detect_econ_bans "0"

// Enable game ban detection
// -
// Default: "0"
// Minimum: "0.000000"
// Maximum: "1.000000"
sm_vacbans_detect_game_bans "0"

// Enable VAC ban detection
// -
// Default: "1"
// Minimum: "0.000000"
// Maximum: "1.000000"
sm_vacbans_detect_vac_bans "1"

// Ignore VAC bans older than this many days (0 = disabled)
// -
// Default: "0"
// Minimum: "0.000000"
sm_vacbans_vac_expire "0"

// Ignore VAC bans issued before this date (format: YYYY-MM-DD)
// -
// Default: ""
sm_vacbans_vac_ignore_before ""
```

## Console Commands
* **sm_vacbans_reset** - Clears the cache database. Run from server console or client with sm_rcon access;
* **sm_vacbans_whitelist** <add|remove|clear> [SteamID] - Run from the server console or client with sm_rcon access to control the whitelist:
	* **add <SteamID>** - adds a SteamID for the plugin to ignore;
	* **remove <SteamID>** - removes a SteamID from the whitelist;
	* **clear** - removes all SteamIDs from the whitelist;
* **sm_vacbans_list** - Lists the bans of connected clients. Admins with access to this also see the connect messages when sm_vacbans_action is 2;

## Override Commands
* **sm_vacbans_immunity** - Users with access to this command will not be checked for bans; (defaults to RCON access)

 ## Notes
* All account data comes from the Steam Web API.
* This works with SourceBans.
* Data is logged to **sourcemod/logs/vacbans.log**.

## Credits
* [voogru](https://forums.alliedmods.net/member.php?u=2557) - Finding the algorithm for converting SteamIDs;
* [berni](https://forums.alliedmods.net/member.php?u=27799) & [strontiumdog](https://forums.alliedmods.net/member.php?u=24573) - The function that converts SteamIDs;
* [Cripix](https://forums.alliedmods.net/member.php?u=273837) - French Translations;
* [Dreizehnt](https://forums.alliedmods.net/member.php?u=266566) - Russian Translations;
* [crashzk](https://github.com/crashzk) - Português-BR Translations + More Translations;
