#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A9D579A26574851C.h"
#include "unitysdk/B5749ADDD49AB635.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define BF7E22EEE5DDDBCA_ABA127BB4BCD966A_OFFSET UNITYSDK_OFFSET(0x40097F0)

inline static constexpr unsigned int BF7E22EEE5DDDBCA_TypeDefinitionIndex = 14560;

struct alignas(4) BF7E22EEE5DDDBCA
{
	::B5749ADDD49AB635 A36E5AB09C966368; // 0x10
	::A9D579A26574851C E9D3687BDACAB7AF; // 0x24

	::AFB530854B88B5A8 ABA127BB4BCD966A()
	{
		return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + BF7E22EEE5DDDBCA_ABA127BB4BCD966A_OFFSET))(this);
	}
};
