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
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0xAF81A80)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACTIVITY_OFFSET UNITYSDK_OFFSET(0xAF83260)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CCTOR_OFFSET UNITYSDK_OFFSET(0xAF877C0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0xAF84C10)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEARINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF84BD0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CTOR_OFFSET UNITYSDK_OFFSET(0xAF877B0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_INVITE_OFFSET UNITYSDK_OFFSET(0xAF839B0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_LEADERBOARD_OFFSET UNITYSDK_OFFSET(0xAF82B10)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACHIEVEMENTSCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF7FF60)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACTIVITYCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF80C50)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITECALLBACK_OFFSET UNITYSDK_OFFSET(0xAF810A0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF81940)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONLEADERBOARDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF80800)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONRECENTPLAYERSCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF814F0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONSTATISTICSCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF803B0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_RECENTPLAYERS_OFFSET UNITYSDK_OFFSET(0xAF84100)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF84850)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_STATISTICS_OFFSET UNITYSDK_OFFSET(0xAF823C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices_TypeDefinitionIndex = 46507;

	class HoYoChannelGameplayServices : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_activityLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_recentPlayersTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206A8);
		}

		static ::System::Object** StaticGet_s_statisticsLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_inviteTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206B8);
		}

		static ::System::Object** StaticGet_s_recentPlayersLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_achievementsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_leaderboardTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>** StaticGet_s_recentPlayersCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>** StaticGet_s_inviteCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_activityTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206E8);
		}

		static ::System::Object** StaticGet_s_achievementsLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206F0);
		}

		static ::System::Object** StaticGet_s_leaderboardLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x206F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>** StaticGet_s_achievementsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x20700);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>** StaticGet_s_leaderboardCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x20708);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>** StaticGet_s_activityCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x20710);
		}

		static ::System::Object** StaticGet_s_inviteLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x20718);
		}

		static ::System::Action** StaticGet_s_inviteReceivedCallback()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x20720);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>** StaticGet_s_statisticsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x20728);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_statisticsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x20730);
		}

		static ::System::Boolean* StaticGet_s_inviteReceivedRegistered()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelGameplayServices")->GetStaticField(0x7610);
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

		::System::Void Achievements(::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACHIEVEMENTS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnAchievementsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACHIEVEMENTSCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Statistics(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_STATISTICS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnStatisticsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONSTATISTICSCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Leaderboard(::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_LEADERBOARD_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnLeaderboardCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONLEADERBOARDCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Activity(::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACTIVITY_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnActivityCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACTIVITYCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Invite(::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_INVITE_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnInviteCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITECALLBACK_OFFSET))(a1, a2);
		}

		::System::Void RecentPlayers(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_RECENTPLAYERS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnRecentPlayersCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONRECENTPLAYERSCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void RegisterInviteReceivedCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_REGISTERINVITERECEIVEDCALLBACK_OFFSET))(this, a1);
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
