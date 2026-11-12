#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GachaItemData.h"
namespace RPG::Client { class EquipmentData; }

#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1C000)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_GET_EQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0xDA1C110)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_SETROW_OFFSET UNITYSDK_OFFSET(0xDA1C010)
#define RPG_CLIENT_GACHALIGHTCONEITEMDATA_SET_EQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0xDA1C120)

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
