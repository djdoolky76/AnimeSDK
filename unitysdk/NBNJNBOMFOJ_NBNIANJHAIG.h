#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define NBNJNBOMFOJ_NBNIANJHAIG_GEJLOOBJBND_OFFSET UNITYSDK_OFFSET(0x67FF60)
#define NBNJNBOMFOJ_NBNIANJHAIG_GNEBGAGOFPA_OFFSET UNITYSDK_OFFSET(0x67FEE0)
#define NBNJNBOMFOJ_NBNIANJHAIG_NFLDAGDOBLB_OFFSET UNITYSDK_OFFSET(0x67FF70)
#define NBNJNBOMFOJ_NBNIANJHAIG__CTOR_OFFSET UNITYSDK_OFFSET(0x67FEB0)

inline static constexpr unsigned int NBNJNBOMFOJ_NBNIANJHAIG_TypeDefinitionIndex = 89128;

struct alignas(8) NBNJNBOMFOJ_NBNIANJHAIG
{
	::System::Single HONHDGCJGHH; // 0x10
	::System::Single HGDLPOFKCEN; // 0x14
	::System::Single LNKJMFONPLD; // 0x18
	::System::Single MIBDEAEENFO; // 0x1C
	::System::Single HDMKGFGNHEM; // 0x20
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* MNKPLOJBIDE; // 0x28
	::System::Single JMIDGLDPEAI; // 0x30
	::System::Byte _padding1[0x4];
	::UnityEngine::AnimationCurve* GHEKOIBIAKA; // 0x38
	::System::Single DEOHJKLFDAM; // 0x40

	::System::Void _ctor(::UnityEngine::AnimationCurve* NBAINNKGDPH, ::System::Single FEFEADLANDK, ::UnityEngine::AnimationCurve* NLAOBJOLKBL, ::System::Single GLDDKPPPIOP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_NBNIANJHAIG__CTOR_OFFSET))(this, NBAINNKGDPH, FEFEADLANDK, NLAOBJOLKBL, GLDDKPPPIOP);
	}

	::System::Single GNEBGAGOFPA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_NBNIANJHAIG_GNEBGAGOFPA_OFFSET))(this);
	}

	::System::Single GEJLOOBJBND()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_NBNIANJHAIG_GEJLOOBJBND_OFFSET))(this);
	}

	::System::Single NFLDAGDOBLB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_NBNIANJHAIG_NFLDAGDOBLB_OFFSET))(this);
	}
};
