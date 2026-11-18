#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DJEFNICEMHH__CTOR_OFFSET UNITYSDK_OFFSET(0x740A60)

inline static constexpr unsigned int DJEFNICEMHH_TypeDefinitionIndex = 50999;

struct alignas(4) DJEFNICEMHH
{
	::System::Single FNMLMLIMGHF; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 HANIMNANBHH; // 0x18

	::System::Void _ctor(::System::Single PBCAAADNEPK, ::System::UInt64 CJGFBDDCELO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt64))((::PBYTE)hIl2Cpp + DJEFNICEMHH__CTOR_OFFSET))(this, PBCAAADNEPK, CJGFBDDCELO);
	}
};
