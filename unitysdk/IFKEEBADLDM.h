#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABDGMIJLHBL.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NIGADNGLACP.h"

#define IFKEEBADLDM_BNDNGDDMNHD_OFFSET UNITYSDK_OFFSET(0x778E80)
#define IFKEEBADLDM_IHMNCJDIEBP_OFFSET UNITYSDK_OFFSET(0x778F00)
#define IFKEEBADLDM_JECEBJOKDCI_OFFSET UNITYSDK_OFFSET(0x48C0E0)
#define IFKEEBADLDM_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x3B9490)

inline static constexpr unsigned int IFKEEBADLDM_TypeDefinitionIndex = 43886;

struct alignas(4) IFKEEBADLDM
{
	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKEEBADLDM_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean JECEBJOKDCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKEEBADLDM_JECEBJOKDCI_OFFSET))(this);
	}

	::NIGADNGLACP BNDNGDDMNHD()
	{
		return ((::NIGADNGLACP(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKEEBADLDM_BNDNGDDMNHD_OFFSET))(this);
	}

	::ABDGMIJLHBL IHMNCJDIEBP()
	{
		return ((::ABDGMIJLHBL(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKEEBADLDM_IHMNCJDIEBP_OFFSET))(this);
	}
};
