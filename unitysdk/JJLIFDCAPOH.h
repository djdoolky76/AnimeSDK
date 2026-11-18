#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JJLIFDCAPOH_JCAHBFPIPDC_OFFSET UNITYSDK_OFFSET(0x7B4830)

inline static constexpr unsigned int JJLIFDCAPOH_TypeDefinitionIndex = 65789;

struct alignas(4) JJLIFDCAPOH
{
	::System::Int32 KPDGMCDBJHC; // 0x10
	::System::Int32 BDMAGLOBEFP; // 0x14

	::System::Boolean JCAHBFPIPDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLIFDCAPOH_JCAHBFPIPDC_OFFSET))(this);
	}
};
