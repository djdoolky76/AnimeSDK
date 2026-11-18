#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ABKLEOKFNLH_FCJCBBELKLD_OFFSET UNITYSDK_OFFSET(0x3CE9E0)

inline static constexpr unsigned int ABKLEOKFNLH_TypeDefinitionIndex = 86644;

struct alignas(4) ABKLEOKFNLH
{
	::System::Int32 FAEGNLBDHJE; // 0x10
	::System::Int32 OBGHCIGOKEM; // 0x14

	::System::Int32 FCJCBBELKLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKLEOKFNLH_FCJCBBELKLD_OFFSET))(this);
	}
};
