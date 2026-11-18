#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPBBJAJIDPF.h"
#include "unitysdk/System/ValueType.h"

#define DMDOBPBGOPI__CTOR_OFFSET UNITYSDK_OFFSET(0x43DB60)

inline static constexpr unsigned int DMDOBPBGOPI_TypeDefinitionIndex = 59473;

struct alignas(4) DMDOBPBGOPI
{
	::System::Boolean FOFGIKEDBGI; // 0x10
	::NPBBJAJIDPF OKIJFCLAPNN; // 0x11

	::System::Void _ctor(::System::Boolean PNDKMACFGEI, ::NPBBJAJIDPF EGHMHIFEBAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::NPBBJAJIDPF))((::PBYTE)hIl2Cpp + DMDOBPBGOPI__CTOR_OFFSET))(this, PNDKMACFGEI, EGHMHIFEBAH);
	}
};
