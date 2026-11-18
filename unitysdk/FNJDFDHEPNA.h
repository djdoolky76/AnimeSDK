#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJJDINMFOEI.h"

namespace UnityEngine { class AnimationCurve; }

#define FNJDFDHEPNA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1750D110)
#define FNJDFDHEPNA_IBCPJCNGKFE_OFFSET UNITYSDK_OFFSET(0x1750D1B0)
#define FNJDFDHEPNA_KHINBPHKOJC_OFFSET UNITYSDK_OFFSET(0x1750D3C0)
#define FNJDFDHEPNA_LHFJBJFOFHN_OFFSET UNITYSDK_OFFSET(0x1750D360)
#define FNJDFDHEPNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1750D0B0)

inline static constexpr unsigned int FNJDFDHEPNA_TypeDefinitionIndex = 39611;

class FNJDFDHEPNA : public ::IJJDINMFOEI
{
public:
	::System::Single MMBMNEDGJEN; // 0x28
	::System::Single EHPAJFODHIP; // 0x2C
	::System::Single NHKNILFDKGG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJDFDHEPNA__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Single GJIHOPCJODF, ::System::Single PPELJIHKBBD, ::System::Single EEODALLOKMF, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FNJDFDHEPNA_BBOMJDBNHIC_OFFSET))(this, GJIHOPCJODF, PPELJIHKBBD, EEODALLOKMF, FAJHPKBELMF);
	}

	::System::Single IBCPJCNGKFE(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNJDFDHEPNA_IBCPJCNGKFE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LHFJBJFOFHN(::System::Single PPELJIHKBBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNJDFDHEPNA_LHFJBJFOFHN_OFFSET))(this, PPELJIHKBBD);
	}

	::System::Void KHINBPHKOJC(::System::Single GJIHOPCJODF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNJDFDHEPNA_KHINBPHKOJC_OFFSET))(this, GJIHOPCJODF);
	}
};
