#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABDGMIJLHBL.h"
#include "unitysdk/ENBEPNDMDEE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NIGADNGLACP.h"

#define DACKKOPJAIG_BNDNGDDMNHD_OFFSET UNITYSDK_OFFSET(0x701BF0)
#define DACKKOPJAIG_HIFFONICDNE_OFFSET UNITYSDK_OFFSET(0x701E10)
#define DACKKOPJAIG_IHMNCJDIEBP_OFFSET UNITYSDK_OFFSET(0x701C70)
#define DACKKOPJAIG_JECEBJOKDCI_OFFSET UNITYSDK_OFFSET(0x48C0E0)
#define DACKKOPJAIG_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x701A60)
#define DACKKOPJAIG__CTOR_OFFSET UNITYSDK_OFFSET(0x701DB0)

inline static constexpr unsigned int DACKKOPJAIG_TypeDefinitionIndex = 82961;

struct alignas(4) DACKKOPJAIG
{
	::ENBEPNDMDEE _HFILIHNPEDG_k__BackingField; // 0x10

	::System::Void _ctor(::ENBEPNDMDEE FEBFAJEEMIN)
	{
		return ((::System::Void(*)(::PVOID, ::ENBEPNDMDEE))((::PBYTE)hIl2Cpp + DACKKOPJAIG__CTOR_OFFSET))(this, FEBFAJEEMIN);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DACKKOPJAIG_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean JECEBJOKDCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DACKKOPJAIG_JECEBJOKDCI_OFFSET))(this);
	}

	::NIGADNGLACP BNDNGDDMNHD()
	{
		return ((::NIGADNGLACP(*)(::PVOID))((::PBYTE)hIl2Cpp + DACKKOPJAIG_BNDNGDDMNHD_OFFSET))(this);
	}

	::ABDGMIJLHBL IHMNCJDIEBP()
	{
		return ((::ABDGMIJLHBL(*)(::PVOID))((::PBYTE)hIl2Cpp + DACKKOPJAIG_IHMNCJDIEBP_OFFSET))(this);
	}

	::ENBEPNDMDEE HIFFONICDNE()
	{
		return ((::ENBEPNDMDEE(*)(::PVOID))((::PBYTE)hIl2Cpp + DACKKOPJAIG_HIFFONICDNE_OFFSET))(this);
	}
};
