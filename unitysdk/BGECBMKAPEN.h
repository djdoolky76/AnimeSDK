#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define BGECBMKAPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x6065C0)

inline static constexpr unsigned int BGECBMKAPEN_TypeDefinitionIndex = 73072;

struct alignas(4) BGECBMKAPEN
{
	::System::Single HFAGIINNEGJ; // 0x10

	::System::Void _ctor(::System::Single HCOJLFECINK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGECBMKAPEN__CTOR_OFFSET))(this, HCOJLFECINK);
	}
};
