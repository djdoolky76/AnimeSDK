#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CCMHECHGDGP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x199F3C20)
#define CCMHECHGDGP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x199F3B90)
#define CCMHECHGDGP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x199F39B0)
#define CCMHECHGDGP__CTOR_OFFSET UNITYSDK_OFFSET(0x199F3C10)

inline static constexpr unsigned int CCMHECHGDGP_TypeDefinitionIndex = 66467;

class CCMHECHGDGP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::RectTransform* BLJJBNOAPBP; // 0x20
	::GCIMMDDIFBJ* PDACHPLBKIE; // 0x28
	::UnityEngine::RectTransform* BLJKEHBNFPO; // 0x30
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x38
	::UnityEngine::RectTransform* FLNDHNJHCEM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMHECHGDGP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCMHECHGDGP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMHECHGDGP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCMHECHGDGP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
