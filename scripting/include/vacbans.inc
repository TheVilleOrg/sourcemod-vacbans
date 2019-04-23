/**
 * Called when a client is checked by VAC Status Checker.
 *
 * @param client         The client index
 * @param steamID        The client's 64 bit SteamID
 * @param numVACBans     The number of VAC bans on record for the client
 * @param numGameBans    The number of game bans on record for the client
 * @param commStatusText The client's Steam communication status
 * @param econStatusText The client's Steam economy status
 */
forward Action Vacbans_OnDetectedClient(int client, const char [] steamID, int numVACBans, int numGameBans, const char [] commStatusText, const char [] econStatusText);
