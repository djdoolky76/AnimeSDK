#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HMBPAKODOKL__CTOR_OFFSET UNITYSDK_OFFSET(0x742FD0)

inline static constexpr unsigned int HMBPAKODOKL_TypeDefinitionIndex = 67610;

struct alignas(4) HMBPAKODOKL
{
	::System::Int32 AOCBLKKDFNH; // 0x10

	::System::Void _ctor(::System::Int32 AHFJCBLHFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMBPAKODOKL__CTOR_OFFSET))(this, AHFJCBLHFIJ);
	}
};
