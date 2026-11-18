#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PHLNCNANJBF_ABJNJCFDNGG_OFFSET UNITYSDK_OFFSET(0x3BCD30)
#define PHLNCNANJBF_CNIIMBHLGIC_OFFSET UNITYSDK_OFFSET(0x3583D0)

inline static constexpr unsigned int PHLNCNANJBF_TypeDefinitionIndex = 82596;

struct alignas(4) PHLNCNANJBF
{
	::System::Boolean _MLHJLCNEBHJ_k__BackingField; // 0x10

	::System::Boolean CNIIMBHLGIC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLNCNANJBF_CNIIMBHLGIC_OFFSET))(this);
	}

	::System::Void ABJNJCFDNGG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PHLNCNANJBF_ABJNJCFDNGG_OFFSET))(this, EGEGIMGMJHN);
	}
};
