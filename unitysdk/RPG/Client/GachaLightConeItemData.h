#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GachaItemData.h"
namespace RPG::Client { class EquipmentData; }

#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F67A0)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_GET_EQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0x1A7F68B0)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_SETROW_OFFSET UNITYSDK_OFFSET(0x1A7F67B0)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_SET_EQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0x1A7F68C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaLightConeItemData_TypeDefinitionIndex = 65745;

	class GachaLightConeItemData : public ::RPG::Client::GachaItemData
	{
	public:
		::RPG::Client::EquipmentData* _EquipmentData_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void SetRow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_SETROW_OFFSET))(this, a1);
		}

		::RPG::Client::EquipmentData* get_EquipmentData()
		{
			return ((::RPG::Client::EquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_GET_EQUIPMENTDATA_OFFSET))(this);
		}

		::System::Void set_EquipmentData(::RPG::Client::EquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHALIGHTCONEITEMDATA_SET_EQUIPMENTDATA_OFFSET))(this, a1);
		}

	};
}
