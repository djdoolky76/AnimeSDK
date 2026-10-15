#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class ConsoleDelegate_AchievementDestoryDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_AchievementInitDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CXOpenCommerceCheckoutDialogDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CXUserSignInDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CheckPrivilegeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CheckPsStoreIsEmptyDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CreateMatchDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CreateSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_DialogOpenPlayGoDialogDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_EndFreeCommunicationDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_FriendListDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_FriendUpdateDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetAccountCountryDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetAccountIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetAccountTokenDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetAchievementsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetActivitiesDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetCheckPermissionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetCurrentSessionIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetLeaderboardsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetMatchDetailDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetOnlineIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetPlayerSessionInfoDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetPsStoreProductsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetSandboxIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetSessionLeaderAccountIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetStatisticsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetUserCollectionsIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetUserProfileDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_HasJoinSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_IsFreeCommunicationAvailableDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_JoinMatchDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_JoinSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_LeaveMatchDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_LeaveSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_OpenCommerceCheckoutDialogDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_OpenURLDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_OpenURLWithCookiesDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoFinalizeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoGetChunkInfoDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoGetChunkLocusDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoInitializeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoSetLanguageMaskDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_RegisterFriendInvitationNotifyDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_RegisterReceiveInviteDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ReportMatchResultsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ResolvePrivilegeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_SendFriendInvitationDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_SendSessionInviteDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_SessionDestoryDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_SessionInitDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_SetSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ShowFriendInvitationDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ShowMessageDialogDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ShowProfileCardDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ShowSessionInviteDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ShowTextEntryDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_TryBeginFreeCommunicationDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_TryGetAuthCodeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_TryGetCXTokenDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_TryGetKidTokenDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UnregisterReceiveInviteDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateAchievementDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateMatchDetailDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateMatchStatusDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateRecentPlayersDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateStatisticsDelegate; }

#define MIHOYO_SDK_CONSOLEDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE13AC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_TypeDefinitionIndex = 7613;

	class ConsoleDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ConsoleDelegate_LeaveMatchDelegate** StaticGet_LeaveMatch()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_LeaveMatchDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x22F0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_FriendUpdateDelegate** StaticGet_UnregisterBlockListUpdateCallback()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendUpdateDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x22F8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_ShowFriendInvitationDelegate** StaticGet_ShowFriendInvitation()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowFriendInvitationDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2300);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoSetLanguageMaskDelegate** StaticGet_PlayGoSetLanguageMask()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoSetLanguageMaskDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2308);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_HasJoinSessionDelegate** StaticGet_HasJoinSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_HasJoinSessionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2310);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_SetSessionDelegate** StaticGet_SetSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_SetSessionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2318);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate** StaticGet_PlayGoGetChunkProgressSize()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2320);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_CheckPsStoreIsEmptyDelegate** StaticGet_CheckPsStoreIsEmpty()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CheckPsStoreIsEmptyDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2328);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_ShowTextEntryDelegate** StaticGet_ShowTextEntry()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowTextEntryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2330);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetSandboxIdDelegate** StaticGet_GetSandboxId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetSandboxIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2338);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkInfoDelegate** StaticGet_PlayGoGetChunkInfo()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkInfoDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2340);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate** StaticGet_GetBlockList()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2348);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_TryBeginFreeCommunicationDelegate** StaticGet_TryBeginFreeCommunication()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_TryBeginFreeCommunicationDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2350);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_SendFriendInvitationDelegate** StaticGet_SendFriendInvitation()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_SendFriendInvitationDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2358);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_OpenURLDelegate** StaticGet_OpenURL()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_OpenURLDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2360);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetAchievementsDelegate** StaticGet_GetAchievements()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetAchievementsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2368);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdDelegate** StaticGet_GetUserCollectionsId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2370);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_ShowMessageDialogDelegate** StaticGet_ShowErrorDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowMessageDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2378);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetAccountIdDelegate** StaticGet_GetAccountId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetAccountIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2380);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_TryGetCXTokenDelegate** StaticGet_TryGetCXToken()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_TryGetCXTokenDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2388);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_UnregisterReceiveInviteDelegate** StaticGet_UnregisterReceiveInvite()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UnregisterReceiveInviteDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2390);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_CXUserSignInDelegate** StaticGet_CXUserSignIn()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CXUserSignInDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2398);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_DialogOpenPlayGoDialogDelegate** StaticGet_DialogOpenPlayGoDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_DialogOpenPlayGoDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23A0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoInitializeDelegate** StaticGet_PlayGoInitialize()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoInitializeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23A8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_ShowSessionInviteDelegate** StaticGet_ShowSessionInvite()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowSessionInviteDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23B0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate** StaticGet_GetFriendList()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23B8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_OpenURLWithCookiesDelegate** StaticGet_OpenURLWithCookies()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_OpenURLWithCookiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23C0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_RegisterReceiveInviteDelegate** StaticGet_RegisterReceiveInvite()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_RegisterReceiveInviteDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23C8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoFinalizeDelegate** StaticGet_PlayGoFinalize()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoFinalizeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23D0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkLocusDelegate** StaticGet_PlayGoGetChunkLocus()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkLocusDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23D8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetPsStoreProductsDelegate** StaticGet_GetPsStoreProducts()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetPsStoreProductsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23E0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_SessionDestoryDelegate** StaticGet_SessionDestory()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_SessionDestoryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23E8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_CreateMatchDelegate** StaticGet_CreateMatch()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CreateMatchDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23F0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_SessionInitDelegate** StaticGet_SessionInit()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_SessionInitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x23F8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetPlayerSessionInfoDelegate** StaticGet_GetPlayerSessionInfo()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetPlayerSessionInfoDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2400);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_RegisterFriendInvitationNotifyDelegate** StaticGet_RegisterFriendInvitationNotify()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_RegisterFriendInvitationNotifyDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2408);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_OpenCommerceCheckoutDialogDelegate** StaticGet_OpenCommerceCheckoutDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_OpenCommerceCheckoutDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2410);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_CheckPrivilegeDelegate** StaticGet_CheckPrivilege()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CheckPrivilegeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2418);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_IsFreeCommunicationAvailableDelegate** StaticGet_IsFreeCommunicationAvailable()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_IsFreeCommunicationAvailableDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2420);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_UpdateAchievementDelegate** StaticGet_UpdateAchievement()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateAchievementDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2428);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_ReportMatchResultsDelegate** StaticGet_ReportMatchResults()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ReportMatchResultsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2430);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_UpdateRecentPlayersDelegate** StaticGet_UpdateRecentPlayers()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateRecentPlayersDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2438);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_TryGetAuthCodeDelegate** StaticGet_TryGetAuthCode()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_TryGetAuthCodeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2440);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_UpdateStatisticsDelegate** StaticGet_UpdateStatistics()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateStatisticsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2448);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate** StaticGet_RegisterBlockListUpdateCallback()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2450);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_TryGetKidTokenDelegate** StaticGet_TryGetKidToken()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_TryGetKidTokenDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2458);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_JoinSessionDelegate** StaticGet_JoinSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_JoinSessionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2460);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetCheckPermissionDelegate** StaticGet_GetCheckPermission()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetCheckPermissionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2468);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_CXOpenCommerceCheckoutDialogDelegate** StaticGet_CXOpenCommerceCheckoutDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CXOpenCommerceCheckoutDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2470);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_CreateSessionDelegate** StaticGet_CreateSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CreateSessionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2478);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetCurrentSessionIdDelegate** StaticGet_GetCurrentSessionId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetCurrentSessionIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2480);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_JoinMatchDelegate** StaticGet_JoinMatch()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_JoinMatchDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2488);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetOnlineIdDelegate** StaticGet_GetOnlineId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetOnlineIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2490);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetLeaderboardsDelegate** StaticGet_GetLeaderboards()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetLeaderboardsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2498);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetAccountTokenDelegate** StaticGet_GetAccountToken()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetAccountTokenDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24A0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetAccountCountryDelegate** StaticGet_GetAccountCountry()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetAccountCountryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24A8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetSessionLeaderAccountIdDelegate** StaticGet_GetSessionLeaderAccountId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetSessionLeaderAccountIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24B0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetMatchDetailDelegate** StaticGet_GetMatchDetail()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetMatchDetailDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24B8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_LeaveSessionDelegate** StaticGet_LeaveSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_LeaveSessionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24C0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate** StaticGet_RegisterFriendListUpdateCallback()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24C8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_UpdateMatchStatusDelegate** StaticGet_UpdateMatchStatus()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateMatchStatusDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24D0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetActivitiesDelegate** StaticGet_GetActivities()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetActivitiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24D8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_SendSessionInviteDelegate** StaticGet_SendSessionInvite()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_SendSessionInviteDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24E0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_UpdateMatchDetailDelegate** StaticGet_UpdateMatchDetail()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateMatchDetailDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24E8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetStatisticsDelegate** StaticGet_GetStatistics()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetStatisticsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24F0);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_ShowProfileCardDelegate** StaticGet_ShowProfileCard()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowProfileCardDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x24F8);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_EndFreeCommunicationDelegate** StaticGet_EndFreeCommunication()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_EndFreeCommunicationDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2500);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_GetUserProfileDelegate** StaticGet_GetUserProfile()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetUserProfileDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2508);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_AchievementDestoryDelegate** StaticGet_AchievementDestory()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_AchievementDestoryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2510);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_ShowMessageDialogDelegate** StaticGet_ShowMessageDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowMessageDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2518);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_FriendUpdateDelegate** StaticGet_UnregisterFriendListUpdateCallback()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendUpdateDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2520);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_AchievementInitDelegate** StaticGet_AchievementInit()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_AchievementInitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2528);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate** StaticGet_PlayGoGetChunkTotalSize()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2530);
		}

		static ::MiHoYo::SDK::ConsoleDelegate_ResolvePrivilegeDelegate** StaticGet_ResolvePrivilege()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ResolvePrivilegeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "ConsoleDelegate")->GetStaticField(0x2538);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CTOR_OFFSET))(this);
		}

	};
}
