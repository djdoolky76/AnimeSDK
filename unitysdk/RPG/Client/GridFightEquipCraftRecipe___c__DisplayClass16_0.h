#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAD4DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipe___c__DisplayClass16_0_TypeDefinitionIndex = 66043;

	class GridFightEquipCraftRecipe___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleUID; // 0x10
		::System::Boolean isElationLaughPointSource; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

	};
}
