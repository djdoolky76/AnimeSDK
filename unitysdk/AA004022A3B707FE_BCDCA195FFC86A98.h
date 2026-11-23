#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define AA004022A3B707FE_BCDCA195FFC86A98__CTOR_OFFSET UNITYSDK_OFFSET(0x2748A90)

inline static constexpr unsigned int AA004022A3B707FE_BCDCA195FFC86A98_TypeDefinitionIndex = 20647;

struct alignas(4) AA004022A3B707FE_BCDCA195FFC86A98
{
	::System::Single BC37316376A565D9; // 0x10
	::System::Single A96B867D8BBB8B00; // 0x14

	::System::Void _ctor(::System::Single BC37316376A565D9, ::System::Single A96B867D8BBB8B00)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AA004022A3B707FE_BCDCA195FFC86A98__CTOR_OFFSET))(this, BC37316376A565D9, A96B867D8BBB8B00);
	}
};
