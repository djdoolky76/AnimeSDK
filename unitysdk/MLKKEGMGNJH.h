#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/NIGADNGLACP.h"

#define MLKKEGMGNJH_BNDNGDDMNHD_OFFSET UNITYSDK_OFFSET(0x6AD2E0)
#define MLKKEGMGNJH_JECEBJOKDCI_OFFSET UNITYSDK_OFFSET(0x48C0E0)
#define MLKKEGMGNJH_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x6AD2C0)
#define MLKKEGMGNJH__CTOR_OFFSET UNITYSDK_OFFSET(0x6AD360)

inline static constexpr unsigned int MLKKEGMGNJH_TypeDefinitionIndex = 61788;

struct alignas(4) MLKKEGMGNJH
{
	::UnityEngine::Plane IFFAGNEMKNB; // 0x10
	::System::Boolean HFMKPGPNBPL; // 0x20

	::System::Void _ctor(::UnityEngine::Plane& MDIJFMGDCIK, ::System::Boolean JMKLJOMCAPJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Plane&, ::System::Boolean))((::PBYTE)hIl2Cpp + MLKKEGMGNJH__CTOR_OFFSET))(this, MDIJFMGDCIK, JMKLJOMCAPJ);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKKEGMGNJH_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean JECEBJOKDCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKKEGMGNJH_JECEBJOKDCI_OFFSET))(this);
	}

	::NIGADNGLACP BNDNGDDMNHD()
	{
		return ((::NIGADNGLACP(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKKEGMGNJH_BNDNGDDMNHD_OFFSET))(this);
	}
};
