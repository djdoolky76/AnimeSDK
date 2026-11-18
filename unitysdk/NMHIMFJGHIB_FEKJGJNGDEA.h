#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMHIMFJGHIB_IFOAJELADID.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NMHIMFJGHIB_FEKJGJNGDEA_ABLHNGCFGIH_OFFSET UNITYSDK_OFFSET(0x808E70)
#define NMHIMFJGHIB_FEKJGJNGDEA_AMPBGMKIFJA_OFFSET UNITYSDK_OFFSET(0x77C100)

inline static constexpr unsigned int NMHIMFJGHIB_FEKJGJNGDEA_TypeDefinitionIndex = 43792;

struct alignas(4) NMHIMFJGHIB_FEKJGJNGDEA
{
	::NMHIMFJGHIB_IFOAJELADID AJKDFOEKFNK; // 0x10
	::NMHIMFJGHIB_IFOAJELADID LOFDLFGGBCM; // 0x24
	::UnityEngine::Vector3 JKIDMFCPKMD; // 0x38
	::System::Single AFIKJAIPLNG; // 0x44
	::System::Single HFEKJPPKDEP; // 0x48
	::System::Single LIBFMDALOPN; // 0x4C
	::System::Single AJHMAKMIHFC; // 0x50
	::System::Boolean NKKPKFCOIFP; // 0x54
	::System::Byte _padding0[0x3];
	::UnityEngine::LayerMask MOPBBKECBDM; // 0x58

	::System::Single AMPBGMKIFJA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_FEKJGJNGDEA_AMPBGMKIFJA_OFFSET))(this);
	}

	::System::Single ABLHNGCFGIH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHIMFJGHIB_FEKJGJNGDEA_ABLHNGCFGIH_OFFSET))(this);
	}
};
