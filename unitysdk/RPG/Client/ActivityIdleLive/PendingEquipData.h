#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBNNMKNBLDI;
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_PENDINGEQUIPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC5085D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PENDINGEQUIPDATA_GETSLOTIDENTIFYID_OFFSET UNITYSDK_OFFSET(0xC5083A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PENDINGEQUIPDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xC508350)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int PendingEquipData_TypeDefinitionIndex = 75228;

	class PendingEquipData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpecialEquip* _EquipSpecial; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _EquipNormal; // 0x18
		::CBNNMKNBLDI* Equip; // 0x20
		::System::UInt32 Power; // 0x28
		::System::UInt32 ConfirmedNum; // 0x2C
		::System::UInt32 TotalNum; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PENDINGEQUIPDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PENDINGEQUIPDATA_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::Int32 GetSlotIdentifyId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PENDINGEQUIPDATA_GETSLOTIDENTIFYID_OFFSET))(this);
		}

	};
}
