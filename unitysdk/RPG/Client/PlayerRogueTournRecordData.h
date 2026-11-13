#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"
class BGPIHMLLNGM;

#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x19BD7DD0)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x19BD7ED0)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x19BD7F80)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x19BD7F20)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x19BD7F60)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x19BD7F90)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_MAXAREAID_OFFSET UNITYSDK_OFFSET(0x19BD7F70)
#define RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19BD7DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerRogueTournRecordData_TypeDefinitionIndex = 65733;

	class PlayerRogueTournRecordData : public ::System::Object
	{
	public:
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x10
		::System::UInt32 _MaxAreaID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_CTOR_OFFSET))(this);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Void Sync(::BGPIHMLLNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGPIHMLLNGM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_MAXAREAID_OFFSET))(this);
		}

		::System::Void set_MaxAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_MAXAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUETOURNRECORDDATA_SET_DIVISIONLEVEL_OFFSET))(this, a1);
		}

	};
}
