#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B5749ADDD49AB635.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define A9BC624CE84B9C56_ABA127BB4BCD966A_OFFSET UNITYSDK_OFFSET(0x3F5DD20)

inline static constexpr unsigned int A9BC624CE84B9C56_TypeDefinitionIndex = 14311;

struct alignas(4) A9BC624CE84B9C56
{
	::B5749ADDD49AB635 A36E5AB09C966368; // 0x10
	::System::Boolean AE2306DE804C3B72; // 0x18

	::AFB530854B88B5A8 ABA127BB4BCD966A()
	{
		return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + A9BC624CE84B9C56_ABA127BB4BCD966A_OFFSET))(this);
	}
};
