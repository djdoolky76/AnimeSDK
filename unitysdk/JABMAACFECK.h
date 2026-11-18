#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NIGADNGLACP.h"

#define JABMAACFECK_BNDNGDDMNHD_OFFSET UNITYSDK_OFFSET(0x7E8600)
#define JABMAACFECK_JECEBJOKDCI_OFFSET UNITYSDK_OFFSET(0x48C0E0)
#define JABMAACFECK_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x3B9490)

inline static constexpr unsigned int JABMAACFECK_TypeDefinitionIndex = 53057;

struct alignas(4) JABMAACFECK
{
	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JABMAACFECK_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean JECEBJOKDCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JABMAACFECK_JECEBJOKDCI_OFFSET))(this);
	}

	::NIGADNGLACP BNDNGDDMNHD()
	{
		return ((::NIGADNGLACP(*)(::PVOID))((::PBYTE)hIl2Cpp + JABMAACFECK_BNDNGDDMNHD_OFFSET))(this);
	}
};
