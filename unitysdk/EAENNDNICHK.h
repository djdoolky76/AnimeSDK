#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace UnityEngine { class AnimationCurve; }

#define EAENNDNICHK_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x106272F0)
#define EAENNDNICHK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10627240)
#define EAENNDNICHK__CTOR_OFFSET UNITYSDK_OFFSET(0x106271A0)

inline static constexpr unsigned int EAENNDNICHK_TypeDefinitionIndex = 79924;

class EAENNDNICHK : public ::HOAAKHNGJJI
{
public:
	::UnityEngine::AnimationCurve* FEHNPFGDBEG; // 0x20
	::System::Single JHPNHCFJPHO; // 0x28
	::System::Single PDLCEHINEEK; // 0x2C
	::System::Single BHIJOABAJGB; // 0x30
	::System::Single MDKNECMEOHJ; // 0x34
	::System::Boolean MLAGCLMEONG; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single BCABPKGGJLK; // 0x3C
	::System::Single HJNCBEEGKEE; // 0x40
	::System::Single KGBEPBLKEIJ; // 0x44
	::System::Single BKKLADECCHP; // 0x48
	::System::Int32 PIGAAMOJFFB; // 0x4C
	::System::Single GLJNAGILLMC; // 0x50

	::System::Void _ctor(::System::Single FKFNNFFDDHP, ::System::Single FBNIOMKFDAM, ::System::Boolean IPGCFCOMMCH, ::UnityEngine::AnimationCurve* JPIDCIHGFAJ, ::System::Single AKIPFEIAKDN, ::System::Single FJLELHGGCPF, ::System::Single IFBDJODKKAL, ::System::Single NOJLDMBANAH, ::System::Single MFMOIKNKHIB, ::System::Single IPDIELGODGK, ::System::Single DPFDFHMCHFE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EAENNDNICHK__CTOR_OFFSET))(this, FKFNNFFDDHP, FBNIOMKFDAM, IPGCFCOMMCH, JPIDCIHGFAJ, AKIPFEIAKDN, FJLELHGGCPF, IFBDJODKKAL, NOJLDMBANAH, MFMOIKNKHIB, IPDIELGODGK, DPFDFHMCHFE);
	}

	::System::Void _ctor_1(::System::Single FKFNNFFDDHP, ::System::Single FBNIOMKFDAM, ::System::Boolean IPGCFCOMMCH, ::UnityEngine::AnimationCurve* JPIDCIHGFAJ, ::System::Single AKIPFEIAKDN, ::System::Single FJLELHGGCPF, ::System::Single IFBDJODKKAL, ::System::Single NOJLDMBANAH, ::System::Single MFMOIKNKHIB, ::System::Single IPDIELGODGK, ::System::Single DPFDFHMCHFE, ::System::Boolean EPGLPGPOOJN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + EAENNDNICHK__CTOR_1_OFFSET))(this, FKFNNFFDDHP, FBNIOMKFDAM, IPGCFCOMMCH, JPIDCIHGFAJ, AKIPFEIAKDN, FJLELHGGCPF, IFBDJODKKAL, NOJLDMBANAH, MFMOIKNKHIB, IPDIELGODGK, DPFDFHMCHFE, EPGLPGPOOJN);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + EAENNDNICHK_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}
};
