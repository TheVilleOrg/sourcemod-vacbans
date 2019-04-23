/**
 * Enumeration of communication statuses.
 */
enum Vacbans_CommStatus {
	COMMSTATUS_NONE = 0,
	COMMSTATUS_BANNED = 1,
};

/**
 * Enumeration of economy statuses.
 */
enum Vacbans_EconStatus {
	ECONSTATUS_NONE = 0,
	ECONSTATUS_PROBATION = 1,
	ECONSTATUS_BANNED = 2,
};

/**
 * Called when a client is checked by VAC Status Checker.
 *
 * @param client      The client index
 * @param steamID     The client's 64 bit SteamID
 * @param numVACBans  The number of VAC bans on record for the client
 * @param numGameBans The number of game bans on record for the client
 * @param commStatus  The Vacbans_CommStatus value representing the client's Steam communication status
 * @param econStatus  The Vacbans_EconStatus value representing the client's Steam economy status
 */
forward Action Vacbans_OnDetectedClient(int client, const char [] steamID, int numVACBans, int numGameBans, Vacbans_CommStatus:commStatus, Vacbans_EconStatus:econStatus);
