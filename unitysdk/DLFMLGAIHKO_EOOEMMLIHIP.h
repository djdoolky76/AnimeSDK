#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONFLBFFBHID.h"
#include "unitysdk/System/ValueType.h"

class BCMOBJBBANP;
namespace UnityEngine::UI { class Image; }

#define DLFMLGAIHKO_EOOEMMLIHIP_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x9B2510)
#define DLFMLGAIHKO_EOOEMMLIHIP_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x9B24A0)

inline static constexpr unsigned int DLFMLGAIHKO_EOOEMMLIHIP_TypeDefinitionIndex = 96620;

struct alignas(8) DLFMLGAIHKO_EOOEMMLIHIP
{
	::ONFLBFFBHID OBNIAHNMHPF; // 0x10
	::System::Byte _padding0[0x4];
	::BCMOBJBBANP* NCHEALMACAA; // 0x18
	::UnityEngine::UI::Image* CGJEBPGPIHO; // 0x20

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_EOOEMMLIHIP_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_EOOEMMLIHIP_HNDGJKPNIHA_OFFSET))(this);
	}
};
