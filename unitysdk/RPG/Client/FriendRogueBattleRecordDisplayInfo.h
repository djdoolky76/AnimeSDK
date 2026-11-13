#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"
class EJAKBKOEEPC;
namespace RPG::Client { class FriendRogueBattleRecordDisplayInfo; }
namespace RPG::Client { class RogueTournDivisionData; }

#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x19AF5180)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x19B06870)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GETSHOWDATA_OFFSET UNITYSDK_OFFSET(0x19B06910)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x19B06970)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x19B06990)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x19B06980)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_SET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x19B069A0)
#define RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO__INIT_OFFSET UNITYSDK_OFFSET(0x19B06880)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendRogueBattleRecordDisplayInfo_TypeDefinitionIndex = 65692;

	class FriendRogueBattleRecordDisplayInfo : public ::System::Object
	{
	public:
		::RPG::Client::BattleRecordDisplayType _DisplayType_k__BackingField; // 0x10
		::System::UInt32 _DivisionLevel; // 0x14
		::System::UInt32 _MaxAreaID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FriendRogueBattleRecordDisplayInfo* Create(::EJAKBKOEEPC* a1)
		{
			return ((::RPG::Client::FriendRogueBattleRecordDisplayInfo*(*)(::EJAKBKOEEPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_CREATE_OFFSET))(a1);
		}

		::RPG::Client::RogueTournDivisionData* GetShowData()
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GETSHOWDATA_OFFSET))(this);
		}

		::System::Void _Init(::EJAKBKOEEPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJAKBKOEEPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO__INIT_OFFSET))(this, a1);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayType(::RPG::Client::BattleRecordDisplayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleRecordDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_GET_MAXAREAID_OFFSET))(this);
		}

		::System::Void set_MaxAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDROGUEBATTLERECORDDISPLAYINFO_SET_MAXAREAID_OFFSET))(this, a1);
		}

	};
}
