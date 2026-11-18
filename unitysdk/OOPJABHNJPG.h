#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OOPJABHNJPG__CTOR_OFFSET UNITYSDK_OFFSET(0x6021E0)

inline static constexpr unsigned int OOPJABHNJPG_TypeDefinitionIndex = 59425;

struct alignas(4) OOPJABHNJPG
{
	::System::Int32 AOCBLKKDFNH; // 0x10

	::System::Void _ctor(::System::Int32 AHFJCBLHFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOPJABHNJPG__CTOR_OFFSET))(this, AHFJCBLHFIJ);
	}
};
