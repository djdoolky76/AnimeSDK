#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_GETACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x1DB682F0)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_GETRANDOMAVATARICONPATHS_OFFSET UNITYSDK_OFFSET(0x1DB68640)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_GETRANDOMMONSTERICONPATHS_OFFSET UNITYSDK_OFFSET(0x1DB68B40)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_ISSHOWTIMELIMITREWARDENTRANCENEW_OFFSET UNITYSDK_OFFSET(0x1DB68570)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_MARKTIMELIMITREWARDPAGESEEN_OFFSET UNITYSDK_OFFSET(0x1DB685E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleActivityHelper_TypeDefinitionIndex = 63014;

	class ExpeditionBattleActivityHelper : public ::System::Object
	{
	public:
		static ::System::UInt32 GetActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_GETACTIVITYREWARDID_OFFSET))();
		}

		static ::System::Boolean IsShowTimeLimitRewardEntranceNew()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_ISSHOWTIMELIMITREWARDENTRANCENEW_OFFSET))();
		}

		static ::System::Void MarkTimeLimitRewardPageSeen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_MARKTIMELIMITREWARDPAGESEEN_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetRandomAvatarIconPaths(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_GETRANDOMAVATARICONPATHS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetRandomMonsterIconPaths(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER_GETRANDOMMONSTERICONPATHS_OFFSET))(a1);
		}

	};
}
