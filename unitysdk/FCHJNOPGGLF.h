#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBGAKHAOC.h"
#include "unitysdk/System/ValueType.h"

#define FCHJNOPGGLF__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int FCHJNOPGGLF_TypeDefinitionIndex = 50704;

struct alignas(4) FCHJNOPGGLF
{
	::AKLBGAKHAOC OFINPPCLNIF; // 0x10

	::System::Void _ctor(::AKLBGAKHAOC KFJPMAPGOBM)
	{
		return ((::System::Void(*)(::PVOID, ::AKLBGAKHAOC))((::PBYTE)hIl2Cpp + FCHJNOPGGLF__CTOR_OFFSET))(this, KFJPMAPGOBM);
	}
};
