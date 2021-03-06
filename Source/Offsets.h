#pragma once

#include <windows.h>

namespace signitures {
	const DWORD anim_overlays = 10624 ;
	const DWORD clientstate_choked_commands = 19752 ;
	const DWORD clientstate_delta_ticks = 372 ;
	const DWORD clientstate_last_outgoing_command = 19748 ;
	const DWORD clientstate_net_channel = 156 ;
	const DWORD convar_name_hash_table = 192760 ;
	const DWORD dwClientState = 5807572 ;
	const DWORD dwClientState_GetLocalPlayer = 384 ;
	const DWORD dwClientState_IsHLTV = 19776 ;
	const DWORD dwClientState_Map = 652 ;
	const DWORD dwClientState_MapDirectory = 392 ;
	const DWORD dwClientState_MaxPlayer = 904 ;
	const DWORD dwClientState_PlayerInfo = 21176 ;
	const DWORD dwClientState_State = 264 ;
	const DWORD dwClientState_ViewAngles = 19848 ;
	const DWORD dwEntityList = 81047860 ;
	const DWORD dwForceAttack = 51889948 ;
	const DWORD dwForceAttack2 = 51889960 ;
	const DWORD dwForceBackward = 51889876 ;
	const DWORD dwForceForward = 51889984 ;
	const DWORD dwForceJump = 85937584 ;
	const DWORD dwForceLeft = 51889864 ;
	const DWORD dwForceRight = 51889900 ;
	const DWORD dwGameDir = 6457080 ;
	const DWORD dwGameRulesProxy = 86409372 ;
	const DWORD dwGetAllClasses = 14012300 ;
	const DWORD dwGlobalVars = 5806808 ;
	const DWORD dwGlowObjectManager = 86585112 ;
	const DWORD dwInput = 85575368 ;
	const DWORD dwInterfaceLinkList = 9436020 ;
	const DWORD dwLocalPlayer = 13855636 ;
	const DWORD dwMouseEnable = 13879096 ;
	const DWORD dwMouseEnablePtr = 13879048 ;
	const DWORD dwPlayerResource = 51882604 ;
	const DWORD dwRadarBase = 85458572 ;
	const DWORD dwSensitivity = 13878740 ;
	const DWORD dwSensitivityPtr = 13878696 ;
	const DWORD dwSetClanTag = 564992 ;
	const DWORD dwViewMatrix = 80988772 ;
	const DWORD dwWeaponTable = 85578124 ;
	const DWORD dwWeaponTableIndex = 12892 ;
	const DWORD dwYawPtr = 13878168 ;
	const DWORD dwZoomSensitivityRatioPtr = 13899232 ;
	const DWORD dwbSendPackets = 868090 ;
	const DWORD dwppDirect3DDevice9 = 684080 ;
	const DWORD find_hud_element = 701300032 ;
	const DWORD force_update_spectator_glow = 3787666 ;
	const DWORD interface_engine_cvar = 256492 ;
	const DWORD is_c4_owner = 3838880 ;
	const DWORD m_bDormant = 237 ;
	const DWORD m_flSpawnTime = 41824 ;
	const DWORD m_pStudioHdr = 10572 ;
	const DWORD m_pitchClassPtr = 85459248 ;
	const DWORD m_yawClassPtr = 13878168 ;
	const DWORD model_ambient_min = 5819980 ;
	const DWORD set_abs_angles = 1911648 ;
	const DWORD set_abs_origin = 1911200 ;
}
namespace netvars {
	const DWORD cs_gamerules_data = 0 ;
	const DWORD m_ArmorValue = 45928 ;
	const DWORD m_Collision = 800 ;
	const DWORD m_CollisionGroup = 1140 ;
	const DWORD m_Local = 12220 ;
	const DWORD m_MoveType = 604 ;
	const DWORD m_OriginalOwnerXuidHigh = 12740 ;
	const DWORD m_OriginalOwnerXuidLow = 12736 ;
	const DWORD m_SurvivalGameRuleDecisionTypes = 4896 ;
	const DWORD m_SurvivalRules = 3320 ;
	const DWORD m_aimPunchAngle = 12332 ;
	const DWORD m_aimPunchAngleVel = 12344 ;
	const DWORD m_angEyeAnglesX = 45932 ;
	const DWORD m_angEyeAnglesY = 45936 ;
	const DWORD m_bBombPlanted = 2461 ;
	const DWORD m_bFreezePeriod = 32 ;
	const DWORD m_bGunGameImmunity = 14640 ;
	const DWORD m_bHasDefuser = 45944 ;
	const DWORD m_bHasHelmet = 45916 ;
	const DWORD m_bInReload = 12965 ;
	const DWORD m_bIsDefusing = 14620 ;
	const DWORD m_bIsQueuedMatchmaking = 116 ;
	const DWORD m_bIsScoped = 14612 ;
	const DWORD m_bIsValveDS = 117 ;
	const DWORD m_bSpotted = 2365 ;
	const DWORD m_bSpottedByMask = 2432 ;
	const DWORD m_bStartedArming = 13296 ;
	const DWORD m_bUseCustomAutoExposureMax = 2521 ;
	const DWORD m_bUseCustomAutoExposureMin = 2520 ;
	const DWORD m_bUseCustomBloomScale = 2522 ;
	const DWORD m_clrRender = 112 ;
	const DWORD m_dwBoneMatrix = 9896 ;
	const DWORD m_fAccuracyPenalty = 13104 ;
	const DWORD m_fFlags = 260 ;
	const DWORD m_flC4Blow = 10640 ;
	const DWORD m_flCustomAutoExposureMax = 2528 ;
	const DWORD m_flCustomAutoExposureMin = 2524 ;
	const DWORD m_flCustomBloomScale = 2532 ;
	const DWORD m_flDefuseCountDown = 10668 ;
	const DWORD m_flDefuseLength = 10664 ;
	const DWORD m_flFallbackWear = 12752 ;
	const DWORD m_flFlashDuration = 42000 ;
	const DWORD m_flFlashMaxAlpha = 41996 ;
	const DWORD m_flLastBoneSetupTime = 10532 ;
	const DWORD m_flLowerBodyYawTarget = 14972 ;
	const DWORD m_flNextAttack = 11632 ;
	const DWORD m_flNextPrimaryAttack = 12856 ;
	const DWORD m_flSimulationTime = 616 ;
	const DWORD m_flTimerLength = 10644 ;
	const DWORD m_hActiveWeapon = 12024 ;
	const DWORD m_hMyWeapons = 11768 ;
	const DWORD m_hObserverTarget = 13196 ;
	const DWORD m_hOwner = 10700 ;
	const DWORD m_hOwnerEntity = 332 ;
	const DWORD m_iAccountID = 12232 ;
	const DWORD m_iClip1 = 12900 ;
	const DWORD m_iCompetitiveRanking = 6788 ;
	const DWORD m_iCompetitiveWins = 7048 ;
	const DWORD m_iCrosshairId = 46036 ;
	const DWORD m_iEntityQuality = 12204 ;
	const DWORD m_iFOV = 12772 ;
	const DWORD m_iFOVStart = 12776 ;
	const DWORD m_iGlowIndex = 42024 ;
	const DWORD m_iHealth = 256 ;
	const DWORD m_iItemDefinitionIndex = 12202 ;
	const DWORD m_iItemIDHigh = 12224 ;
	const DWORD m_iMostRecentModelBoneCounter = 9872 ;
	const DWORD m_iObserverMode = 13176 ;
	const DWORD m_iShotsFired = 41856 ;
	const DWORD m_iState = 12888 ;
	const DWORD m_iTeamNum = 244 ;
	const DWORD m_lifeState = 607 ;
	const DWORD m_nFallbackPaintKit = 12744 ;
	const DWORD m_nFallbackSeed = 12748 ;
	const DWORD m_nFallbackStatTrak = 12756 ;
	const DWORD m_nForceBone = 9868 ;
	const DWORD m_nTickBase = 13360 ;
	const DWORD m_rgflCoordinateFrame = 1092 ;
	const DWORD m_szCustomName = 12348 ;
	const DWORD m_szLastPlaceName = 13748 ;
	const DWORD m_thirdPersonViewAngles = 12760 ;
	const DWORD m_vecOrigin = 312 ;
	const DWORD m_vecVelocity = 276 ;
	const DWORD m_vecViewOffset = 264 ;
	const DWORD m_viewPunchAngle = 12320 ;
}
