#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"
class OCPHKBAPEGF;
namespace RPG::Client { class FriendGridFightBattleRecordDisplayInfo; }

#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xD050860)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD051510)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD0515A0)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xD051580)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD0515B0)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xD051590)
#define RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__INIT_OFFSET UNITYSDK_OFFSET(0xD051520)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendGridFightBattleRecordDisplayInfo_TypeDefinitionIndex = 64248;

	class FriendGridFightBattleRecordDisplayInfo : public ::System::Object
	{
	public:
		::RPG::Client::BattleRecordDisplayType _DisplayType_k__BackingField; // 0x10
		::System::UInt32 _DivisionID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FriendGridFightBattleRecordDisplayInfo* Create(::OCPHKBAPEGF* a1)
		{
			return ((::RPG::Client::FriendGridFightBattleRecordDisplayInfo*(*)(::OCPHKBAPEGF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_CREATE_OFFSET))(a1);
		}

		::System::Void _Init(::OCPHKBAPEGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCPHKBAPEGF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO__INIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DIVISIONID_OFFSET))(this);
		}

		::System::Void set_DivisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DIVISIONID_OFFSET))(this, a1);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayType(::RPG::Client::BattleRecordDisplayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleRecordDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDGRIDFIGHTBATTLERECORDDISPLAYINFO_SET_DISPLAYTYPE_OFFSET))(this, a1);
		}

	};
}
