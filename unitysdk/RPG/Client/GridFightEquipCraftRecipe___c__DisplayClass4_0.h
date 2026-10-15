#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1110F0)

namespace RPG::Client
{
	class GridFightEquipCraftRecipe___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleUID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

	};
}
