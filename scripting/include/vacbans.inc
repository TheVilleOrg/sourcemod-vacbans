/**
 * Called when detected a client.
 *
 * @param client    The client index
 * @param steamID   The client's 64 bit SteamID
 * @param numVACBans
 * @param numGameBans 
 * @param commStatusText
 * @param econStatusText
 */
forward Action Vacbans_OnDetectedClient(int client, const char [] steamID, int numVACBans, int numGameBans, const char [] commStatusText, const char [] econStatusText);