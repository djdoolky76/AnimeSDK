#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BILLBOARDVISIBLEPARAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xF0530C0)
#define RPG_GAMECORE_BILLBOARDVISIBLEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF0530B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BillboardVisibleParam_TypeDefinitionIndex = 58388;

	class BillboardVisibleParam : public ::System::Object
	{
	public:
		::System::Boolean IsVisible; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single DelayedVisibleTime; // 0x14
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDVISIBLEPARAM_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDVISIBLEPARAM_CTOR_1_OFFSET))(this, a1);
		}

	};
}
