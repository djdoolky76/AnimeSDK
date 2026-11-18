#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickingGroup.h"

namespace UnityEngine { class Transform; }

#define KLHPIBBMEDB_BGIOOLCIOPF_DOTICK_OFFSET UNITYSDK_OFFSET(0x1516A2B0)
#define KLHPIBBMEDB_BGIOOLCIOPF_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1516A110)
#define KLHPIBBMEDB_BGIOOLCIOPF_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1516A200)
#define KLHPIBBMEDB_BGIOOLCIOPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1516A080)

inline static constexpr unsigned int KLHPIBBMEDB_BGIOOLCIOPF_TypeDefinitionIndex = 76905;

class KLHPIBBMEDB_BGIOOLCIOPF
{
public:
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x28
	::System::Single EPKJKHKFLGK; // 0x30
	::System::Boolean FAIPEEOEPHD; // 0x34
	::System::Boolean BKHHHFPDEBH; // 0x35

	::System::Void _ctor(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + KLHPIBBMEDB_BGIOOLCIOPF__CTOR_OFFSET))(this, GKBJOPJKCLB, IAKPGBCAAKM);
	}

	::System::Void DoTick(::System::Double FNIOPKPHDEH, ::System::Single PMNLNNGEIFM, ::Foundation::ETickingGroup CJEOGMMNGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Single, ::Foundation::ETickingGroup))((::PBYTE)hIl2Cpp + KLHPIBBMEDB_BGIOOLCIOPF_DOTICK_OFFSET))(this, FNIOPKPHDEH, PMNLNNGEIFM, CJEOGMMNGOL);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPIBBMEDB_BGIOOLCIOPF_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPIBBMEDB_BGIOOLCIOPF_PGHAJOMNDDJ_OFFSET))(this);
	}
};
