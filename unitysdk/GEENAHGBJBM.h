#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJJDINMFOEI.h"

namespace UnityEngine { class AnimationCurve; }

#define GEENAHGBJBM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x125C9420)
#define GEENAHGBJBM_IBCPJCNGKFE_OFFSET UNITYSDK_OFFSET(0x125C9150)
#define GEENAHGBJBM_INLJHJICOLO_OFFSET UNITYSDK_OFFSET(0x125C94C0)
#define GEENAHGBJBM_LHFJBJFOFHN_OFFSET UNITYSDK_OFFSET(0x125C9270)
#define GEENAHGBJBM_MIEDCNAAGMF_OFFSET UNITYSDK_OFFSET(0x125C92D0)
#define GEENAHGBJBM__CTOR_OFFSET UNITYSDK_OFFSET(0x125C90F0)

inline static constexpr unsigned int GEENAHGBJBM_TypeDefinitionIndex = 84889;

class GEENAHGBJBM : public ::IJJDINMFOEI
{
public:
	::System::Single NHKNILFDKGG; // 0x28
	::System::Single EHPAJFODHIP; // 0x2C
	::System::Single MMBMNEDGJEN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEENAHGBJBM__CTOR_OFFSET))(this);
	}

	::System::Single IBCPJCNGKFE(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEENAHGBJBM_IBCPJCNGKFE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LHFJBJFOFHN(::System::Single PPELJIHKBBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEENAHGBJBM_LHFJBJFOFHN_OFFSET))(this, PPELJIHKBBD);
	}

	::System::Single MIEDCNAAGMF(::System::Single GJIHOPCJODF, ::System::Single PPELJIHKBBD, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single EEODALLOKMF, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GEENAHGBJBM_MIEDCNAAGMF_OFFSET))(this, GJIHOPCJODF, PPELJIHKBBD, FAJHPKBELMF, EEODALLOKMF, PMNLNNGEIFM);
	}

	::System::Void BBOMJDBNHIC(::System::Single GJIHOPCJODF, ::System::Single PPELJIHKBBD, ::System::Single EEODALLOKMF, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + GEENAHGBJBM_BBOMJDBNHIC_OFFSET))(this, GJIHOPCJODF, PPELJIHKBBD, EEODALLOKMF, FAJHPKBELMF);
	}

	::System::Void INLJHJICOLO(::System::Single GJIHOPCJODF, ::System::Single PPELJIHKBBD, ::System::Single EEODALLOKMF, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + GEENAHGBJBM_INLJHJICOLO_OFFSET))(this, GJIHOPCJODF, PPELJIHKBBD, EEODALLOKMF, FAJHPKBELMF);
	}
};
