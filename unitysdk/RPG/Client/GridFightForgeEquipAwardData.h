#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightForgeAwardData.h"
class ELGLKEAPLGM;
namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD138B70)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0xD138BA0)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xD138BC0)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0xD138BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeEquipAwardData_TypeDefinitionIndex = 64988;

	class GridFightForgeEquipAwardData : public ::RPG::Client::GridFightForgeAwardData
	{
	public:
		::System::UInt32 _EquipID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::ELGLKEAPLGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ELGLKEAPLGM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_EquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPID_OFFSET))(this);
		}

		::System::Void set_EquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_SET_EQUIPID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipItemConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPITEMCONFIG_OFFSET))(this);
		}

	};
}
