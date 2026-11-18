#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JPGGBILBHFN_FCJCBBELKLD_OFFSET UNITYSDK_OFFSET(0x3CE9E0)

inline static constexpr unsigned int JPGGBILBHFN_TypeDefinitionIndex = 86065;

struct alignas(4) JPGGBILBHFN
{
	::System::Int32 FAEGNLBDHJE; // 0x10
	::System::Int32 GCBBLCHMMKC; // 0x14

	::System::Int32 FCJCBBELKLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGGBILBHFN_FCJCBBELKLD_OFFSET))(this);
	}
};
