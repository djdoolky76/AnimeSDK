#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_COMPOSEITEMMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0xD52B630)

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemMaterial_TypeDefinitionIndex = 67689;

	class ComposeItemMaterial : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 AllCostCount; // 0x14
		::System::UInt32 CostCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMMATERIAL_CTOR_OFFSET))(this);
		}

	};
}
