#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define CKOIHMDJHEF_CCMJPEPOCGE_OFFSET UNITYSDK_OFFSET(0x7F6500)
#define CKOIHMDJHEF_DNFJLFBFPCE_OFFSET UNITYSDK_OFFSET(0x7F6760)
#define CKOIHMDJHEF_HCBOMKBOPAF_OFFSET UNITYSDK_OFFSET(0x7F65B0)
#define CKOIHMDJHEF_LDPCHADABDF_OFFSET UNITYSDK_OFFSET(0x7F6630)
#define CKOIHMDJHEF_LEPFJEDMFAN_OFFSET UNITYSDK_OFFSET(0x7F66C0)
#define CKOIHMDJHEF_NOKNMHKCNHL_OFFSET UNITYSDK_OFFSET(0x7F6520)
#define CKOIHMDJHEF_PHFBEFBKGBP_OFFSET UNITYSDK_OFFSET(0x7F6510)
#define CKOIHMDJHEF__CTOR_OFFSET UNITYSDK_OFFSET(0x7F64F0)

inline static constexpr unsigned int CKOIHMDJHEF_TypeDefinitionIndex = 44239;

struct alignas(8) CKOIHMDJHEF
{
	// static const ::System::Int32 JGKFGDCAGBH = 0x14; // 0x0
	// static const ::System::Single MFIKEDKKAAA; // 0x0
	// static const ::System::Single JCPMGGPGKNA; // 0x0
	::System::Single PMDMOPILLBA; // 0x10
	::System::Single PMJKKPJDBPO; // 0x14
	::System::Single ENONGEJAKOP; // 0x18
	::System::Single MNPAFAMEGFA; // 0x1C
	::System::Single NHLPIOHADHM; // 0x20
	::System::Single KLNGGDIHIEG; // 0x24
	::Il2CppArray<::System::Single>* JIFNPBEJPKC; // 0x28
	::UnityEngine::AnimationCurve* OFIODFACNHE; // 0x30
	::UnityEngine::AnimationCurve* MIKLBDBDBBK; // 0x38

	::System::Void _ctor(::UnityEngine::AnimationCurve* JEMOEFBOHAO, ::UnityEngine::AnimationCurve* FODGLLBGCOG, ::System::Single PMJKKPJDBPO, ::System::Single ENONGEJAKOP, ::System::Single NHLPIOHADHM, ::System::Single KLNGGDIHIEG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CKOIHMDJHEF__CTOR_OFFSET))(this, JEMOEFBOHAO, FODGLLBGCOG, PMJKKPJDBPO, ENONGEJAKOP, NHLPIOHADHM, KLNGGDIHIEG);
	}

	::System::Single CCMJPEPOCGE(::System::Single IAKPGBCAAKM, ::System::Single JKJCDJPNFLE, ::System::Single ENONGEJAKOP)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CKOIHMDJHEF_CCMJPEPOCGE_OFFSET))(this, IAKPGBCAAKM, JKJCDJPNFLE, ENONGEJAKOP);
	}

	::System::Single PHFBEFBKGBP(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single AHAFNGEDPLI, ::System::Single PBCAAADNEPK, ::System::Single OHFDBGHOENH)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CKOIHMDJHEF_PHFBEFBKGBP_OFFSET))(this, FAJHPKBELMF, AHAFNGEDPLI, PBCAAADNEPK, OHFDBGHOENH);
	}

	::System::Single NOKNMHKCNHL(::System::Single AHAFNGEDPLI)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKOIHMDJHEF_NOKNMHKCNHL_OFFSET))(this, AHAFNGEDPLI);
	}

	::System::Single HCBOMKBOPAF(::System::Single NJGGCPNJLGJ, ::System::Single OHFDBGHOENH)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CKOIHMDJHEF_HCBOMKBOPAF_OFFSET))(this, NJGGCPNJLGJ, OHFDBGHOENH);
	}

	::System::Single LDPCHADABDF(::System::Single AHAFNGEDPLI, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CKOIHMDJHEF_LDPCHADABDF_OFFSET))(this, AHAFNGEDPLI, PBCAAADNEPK);
	}

	::System::Single LEPFJEDMFAN(::System::Single AHAFNGEDPLI)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKOIHMDJHEF_LEPFJEDMFAN_OFFSET))(this, AHAFNGEDPLI);
	}

	::System::Single DNFJLFBFPCE(::System::Single AHAFNGEDPLI, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CKOIHMDJHEF_DNFJLFBFPCE_OFFSET))(this, AHAFNGEDPLI, PBCAAADNEPK);
	}
};
