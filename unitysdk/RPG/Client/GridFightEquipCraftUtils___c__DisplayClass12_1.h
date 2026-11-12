#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS12_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDAD6440)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS12_1__GETALLAVAILABLECRAFTCOMBINATIONS_B__0_OFFSET UNITYSDK_OFFSET(0xDAD77E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftUtils___c__DisplayClass12_1_TypeDefinitionIndex = 66533;

	template <typename T>
	class GridFightEquipCraftUtils___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::UInt32 itemID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS12_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllAvailableCraftCombinations_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS12_1__GETALLAVAILABLECRAFTCOMBINATIONS_B__0_OFFSET))(this, a1);
		}

	};
}
