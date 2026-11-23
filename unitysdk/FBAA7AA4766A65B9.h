#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B5749ADDD49AB635.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define FBAA7AA4766A65B9_ABA127BB4BCD966A_OFFSET UNITYSDK_OFFSET(0x3FC11B0)

inline static constexpr unsigned int FBAA7AA4766A65B9_TypeDefinitionIndex = 14369;

struct alignas(4) FBAA7AA4766A65B9
{
	::B5749ADDD49AB635 A36E5AB09C966368; // 0x10
	::System::Int32 F1971BC3E14481B3; // 0x24

	::AFB530854B88B5A8 ABA127BB4BCD966A()
	{
		return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAA7AA4766A65B9_ABA127BB4BCD966A_OFFSET))(this);
	}
};
