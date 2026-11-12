#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"
class BGPIHMLLNGM;

#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE6889A0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xE6887F0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xE6888E0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xE688850)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0xE6888A0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_MAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xE688810)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_REGULARCABINETCNT_OFFSET UNITYSDK_OFFSET(0xE688830)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xE688800)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xE6888F0)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_MAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xE688820)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_REGULARCABINETCNT_OFFSET UNITYSDK_OFFSET(0xE688840)
#define RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xE688900)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChessRogueRecordData_TypeDefinitionIndex = 65735;

	class PlayerChessRogueRecordData : public ::System::Object
	{
	public:
		::System::UInt32 _AreaID_k__BackingField; // 0x10
		::System::UInt32 _MainStoryCount_k__BackingField; // 0x14
		::System::UInt32 _RegularCabinetCnt_k__BackingField; // 0x18
		::System::UInt32 _Difficulty_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MainStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_MAINSTORYCOUNT_OFFSET))(this);
		}

		::System::Void set_MainStoryCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_MAINSTORYCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_RegularCabinetCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_REGULARCABINETCNT_OFFSET))(this);
		}

		::System::Void set_RegularCabinetCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_REGULARCABINETCNT_OFFSET))(this, a1);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::System::Void Sync(::BGPIHMLLNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGPIHMLLNGM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHESSROGUERECORDDATA_SYNC_OFFSET))(this, a1);
		}

	};
}
