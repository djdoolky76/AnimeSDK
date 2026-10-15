#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLCJPINDIAC_DIDDNMJIMOD.h"
#include "unitysdk/System/Object.h"
class BCKBEMGGGIF;
class DGLBOFKGGLL;
class DLCJPINDIAC;
class GKJHNGLHOBA;
class PLICOOFLBIB;
namespace System { class String; }

#define RPG_CLIENT_FRIENDRANKINGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD059B80)
#define RPG_CLIENT_FRIENDRANKINGINFO_GETPVPSCORE_OFFSET UNITYSDK_OFFSET(0xD0596D0)
#define RPG_CLIENT_FRIENDRANKINGINFO_GETRANKICON_OFFSET UNITYSDK_OFFSET(0xD059800)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0xD059520)
#define RPG_CLIENT_FRIENDRANKINGINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0xD059500)
#define RPG_CLIENT_FRIENDRANKINGINFO_ISSETTLED_OFFSET UNITYSDK_OFFSET(0xD059790)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0xD059530)
#define RPG_CLIENT_FRIENDRANKINGINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0xD059510)
#define RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD059540)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendRankingInfo_TypeDefinitionIndex = 66310;

	class FriendRankingInfo : public ::System::Object
	{
	public:
		::PLICOOFLBIB* MarbleCommonInfo; // 0x10
		::DGLBOFKGGLL* MatchThreeCommonInfo; // 0x18
		::BCKBEMGGGIF* DiceCombatCommonInfo; // 0x20
		::GKJHNGLHOBA* TeamTowersCommonInfo; // 0x28
		::System::String* _CachedRankIcon; // 0x30
		::DLCJPINDIAC_DIDDNMJIMOD InfoCase; // 0x38
		::System::UInt32 _SyncTime_k__BackingField; // 0x3C
		::System::UInt32 _Uid_k__BackingField; // 0x40
		::System::UInt32 Rank; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SyncTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GET_SYNCTIME_OFFSET))(this);
		}

		::System::Void set_SyncTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SET_SYNCTIME_OFFSET))(this, a1);
		}

		::System::Void Sync(::DLCJPINDIAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLCJPINDIAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 GetPvpScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GETPVPSCORE_OFFSET))(this);
		}

		::System::Boolean IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_ISSETTLED_OFFSET))(this);
		}

		::System::String* GetRankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDRANKINGINFO_GETRANKICON_OFFSET))(this);
		}

	};
}
