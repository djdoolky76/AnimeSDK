#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LMNFMPKLEHB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D3C850)
#define LMNFMPKLEHB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D3C750)
#define LMNFMPKLEHB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D3C560)
#define LMNFMPKLEHB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3C840)

inline static constexpr unsigned int LMNFMPKLEHB_TypeDefinitionIndex = 92282;

class LMNFMPKLEHB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BKDGGCFMIPD; // 0x18
	::FGCOIBFFCHB* GLGFLMBHGAB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PPEAPAAPPLK; // 0x28
	::FGCOIBFFCHB* MCBLBOLNFPL; // 0x30
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x38
	::UnityEngine::RectTransform* MBKACMJJMBH; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNFMPKLEHB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LMNFMPKLEHB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LMNFMPKLEHB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNFMPKLEHB_KGEBDLGBGNM_OFFSET))(this);
	}
};
