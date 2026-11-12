#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatFriendData; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD59A3A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD59A390)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_HASPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xD59A910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xD59A530)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_ISONLINE_OFFSET UNITYSDK_OFFSET(0xD59A850)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xD59A710)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_LOGOUTTIMESPAN_OFFSET UNITYSDK_OFFSET(0xD59A8B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xD59A6A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xD59A760)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_RANKICONPATH_OFFSET UNITYSDK_OFFSET(0xD59A5D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xD59A4E0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatFriendData_TypeDefinitionIndex = 78401;

	class DiceCombatFriendData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* _PlayerBriefDisplayData; // 0x10
		::RPG::Client::DiceCombat::DiceCombatRankLevelData* _RankLevelData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatFriendData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatFriendData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_UID_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RankIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_RANKICONPATH_OFFSET))(this);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Boolean get_IsOnline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_ISONLINE_OFFSET))(this);
		}

		::System::TimeSpan get_LogoutTimeSpan()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_LOGOUTTIMESPAN_OFFSET))(this);
		}

		::System::Boolean get_HasPVPRankScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATFRIENDDATA_GET_HASPVPRANKSCORE_OFFSET))(this);
		}

	};
}
