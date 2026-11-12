#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightForgeAwardData.h"
#include "unitysdk/RPG/GameCore/GridFightAddItemSourceType.h"
class ELGLKEAPLGM;
namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDAF6870)
#define RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0xDAF68C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeEquipAwardData_TypeDefinitionIndex = 66585;

	class GridFightForgeEquipAwardData : public ::RPG::Client::GridFightForgeAwardData
	{
	public:
		::RPG::Client::GridFightEquipItemData* _EquipItemData_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::ELGLKEAPLGM* a2, ::RPG::GameCore::GridFightAddItemSourceType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ELGLKEAPLGM*, ::RPG::GameCore::GridFightAddItemSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GridFightEquipItemData* get_EquipItemData()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEEQUIPAWARDDATA_GET_EQUIPITEMDATA_OFFSET))(this);
		}

	};
}
