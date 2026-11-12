#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteReceivedResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0xB5E2F70)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACTIVITY_OFFSET UNITYSDK_OFFSET(0xB5E4750)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5E8CD0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0xB5E6100)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEARINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E60C0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E8CC0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_INVITE_OFFSET UNITYSDK_OFFSET(0xB5E4EA0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_LEADERBOARD_OFFSET UNITYSDK_OFFSET(0xB5E4000)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACHIEVEMENTSCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E1450)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACTIVITYCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E2140)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E2590)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E2E30)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONLEADERBOARDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E1CF0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONRECENTPLAYERSCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E29E0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONSTATISTICSCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E18A0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_RECENTPLAYERS_OFFSET UNITYSDK_OFFSET(0xB5E55F0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E5D40)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_STATISTICS_OFFSET UNITYSDK_OFFSET(0xB5E38B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices_TypeDefinitionIndex = 47535;

	class HoYoChannelGameplayServices : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_recentPlayersTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BA80);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_leaderboardTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BA88);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>*>** StaticGet_s_recentPlayersCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BA90);
		}

		static ::System::Object** StaticGet_s_statisticsLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BA98);
		}

		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>** StaticGet_s_inviteReceivedCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_achievementsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAA8);
		}

		static ::System::Object** StaticGet_s_leaderboardLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAB0);
		}

		static ::System::Object** StaticGet_s_activityLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_statisticsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAC0);
		}

		static ::System::Object** StaticGet_s_achievementsLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_activityTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAD0);
		}

		static ::System::Object** StaticGet_s_recentPlayersLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*>** StaticGet_s_leaderboardCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>*>** StaticGet_s_inviteCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_inviteTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*>** StaticGet_s_statisticsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BAF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>*>** StaticGet_s_achievementsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BB00);
		}

		static ::System::Object** StaticGet_s_inviteLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BB08);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>*>** StaticGet_s_activityCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x1BB10);
		}

		static ::System::Boolean* StaticGet_s_inviteReceivedRegistered()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x5AF0);
		}

		// static const ::System::Object ACHIEVEMENTS_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Object STATISTICS_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Object LEADERBOARD_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Object ACTIVITY_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Object INVITE_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Object RECENT_PLAYERS_TIMEOUT_SECONDS; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CCTOR_OFFSET))();
		}

		::System::Void Achievements(::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACHIEVEMENTS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnAchievementsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACHIEVEMENTSCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Statistics(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_STATISTICS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnStatisticsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONSTATISTICSCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Leaderboard(::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_LEADERBOARD_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnLeaderboardCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONLEADERBOARDCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Activity(::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACTIVITY_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnActivityCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACTIVITYCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Invite(::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_INVITE_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnInviteCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITECALLBACK_OFFSET))(a1, a2);
		}

		::System::Void RecentPlayers(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_RECENTPLAYERS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnRecentPlayersCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONRECENTPLAYERSCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void RegisterInviteReceivedCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_REGISTERINVITERECEIVEDCALLBACK_OFFSET))(this, a1);
		}

		static ::System::Void ClearInviteReceivedCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEARINVITERECEIVEDCALLBACK_OFFSET))();
		}

		static ::System::Void OnInviteReceivedCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITERECEIVEDCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}

	};
}
