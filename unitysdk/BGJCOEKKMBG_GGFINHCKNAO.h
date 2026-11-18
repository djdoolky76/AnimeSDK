#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define BGJCOEKKMBG_GGFINHCKNAO_ECCEEDCKEBL_OFFSET UNITYSDK_OFFSET(0x5E6880)

inline static constexpr unsigned int BGJCOEKKMBG_GGFINHCKNAO_TypeDefinitionIndex = 46527;

struct alignas(4) BGJCOEKKMBG_GGFINHCKNAO
{
	::System::Single EJMIHJCBFOC; // 0x10
	::System::Single NHNAFKIJLLI; // 0x14
	::System::Single JHNGLBNLPIE; // 0x18

	::System::Boolean ECCEEDCKEBL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_GGFINHCKNAO_ECCEEDCKEBL_OFFSET))(this);
	}
};
