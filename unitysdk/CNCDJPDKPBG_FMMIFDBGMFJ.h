#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CNCDJPDKPBG_FMMIFDBGMFJ_CINELBPANPB_OFFSET UNITYSDK_OFFSET(0x76D610)
#define CNCDJPDKPBG_FMMIFDBGMFJ_JEFNPKNINJA_OFFSET UNITYSDK_OFFSET(0x76D5F0)

inline static constexpr unsigned int CNCDJPDKPBG_FMMIFDBGMFJ_TypeDefinitionIndex = 67468;

struct alignas(4) CNCDJPDKPBG_FMMIFDBGMFJ
{
	::System::Single AMPKDPDCEHA; // 0x10
	::UnityEngine::Vector3 FFDFGGJEKJI; // 0x14
	::UnityEngine::Vector3 FGLJPLFOOKH; // 0x20
	::UnityEngine::Vector3 MFJHNJGGAKJ; // 0x2C
	::UnityEngine::Vector3 LENDAHOOJKM; // 0x38

	::UnityEngine::Vector3 JEFNPKNINJA(::System::Single IMLLDOHDCNC)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNCDJPDKPBG_FMMIFDBGMFJ_JEFNPKNINJA_OFFSET))(this, IMLLDOHDCNC);
	}

	::UnityEngine::Vector3 CINELBPANPB(::System::Single IMLLDOHDCNC)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNCDJPDKPBG_FMMIFDBGMFJ_CINELBPANPB_OFFSET))(this, IMLLDOHDCNC);
	}
};
