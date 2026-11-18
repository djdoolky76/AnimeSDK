#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DGKNAIJNKIC_CMJEGIAKJKP_OFFSET UNITYSDK_OFFSET(0x43DB70)
#define DGKNAIJNKIC_DJMNMDONAFJ_OFFSET UNITYSDK_OFFSET(0x3BCD30)
#define DGKNAIJNKIC_GFAIFBMLNNJ_OFFSET UNITYSDK_OFFSET(0x78EF50)
#define DGKNAIJNKIC_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x3583D0)

inline static constexpr unsigned int DGKNAIJNKIC_TypeDefinitionIndex = 75992;

struct alignas(4) DGKNAIJNKIC
{
	::System::Boolean _KNHFHHEIPHJ_k__BackingField; // 0x10
	::System::Boolean _PBMOJBNCKLA_k__BackingField; // 0x11

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKNAIJNKIC_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Void GFAIFBMLNNJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGKNAIJNKIC_GFAIFBMLNNJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean CMJEGIAKJKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKNAIJNKIC_CMJEGIAKJKP_OFFSET))(this);
	}

	::System::Void DJMNMDONAFJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGKNAIJNKIC_DJMNMDONAFJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
