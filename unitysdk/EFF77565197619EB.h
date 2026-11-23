#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B3B4684D1B5777CF.h"

#define EFF77565197619EB_F2A6C2435D6F47E7_OFFSET UNITYSDK_OFFSET(0x1CB9CD0)
#define EFF77565197619EB_F6764D0E69956DA0_OFFSET UNITYSDK_OFFSET(0x1CB9B70)
#define EFF77565197619EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB9DA0)

inline static constexpr unsigned int EFF77565197619EB_TypeDefinitionIndex = 9708;

class EFF77565197619EB : public ::B3B4684D1B5777CF
{
public:
	::System::Single A1CA971FD66E3C11; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFF77565197619EB__CTOR_OFFSET))(this);
	}

	::System::Void F2A6C2435D6F47E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFF77565197619EB_F2A6C2435D6F47E7_OFFSET))(this);
	}

	::System::Boolean F6764D0E69956DA0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFF77565197619EB_F6764D0E69956DA0_OFFSET))(this);
	}
};
