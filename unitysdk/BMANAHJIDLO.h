#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define BMANAHJIDLO_FCJCBBELKLD_OFFSET UNITYSDK_OFFSET(0x3CE9E0)

inline static constexpr unsigned int BMANAHJIDLO_TypeDefinitionIndex = 60336;

struct alignas(4) BMANAHJIDLO
{
	::System::Int32 BGHNJOIIPDI; // 0x10
	::System::Int32 GIGADKBELFH; // 0x14

	::System::Int32 FCJCBBELKLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMANAHJIDLO_FCJCBBELKLD_OFFSET))(this);
	}
};
