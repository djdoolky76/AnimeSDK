#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BCMIOAPKGCB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1423FA00)
#define BCMIOAPKGCB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1423F970)
#define BCMIOAPKGCB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1423F790)
#define BCMIOAPKGCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1423F9F0)

inline static constexpr unsigned int BCMIOAPKGCB_TypeDefinitionIndex = 76982;

class BCMIOAPKGCB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BCEPPBOOPFD; // 0x18
	::UnityEngine::RectTransform* AKHLOJKKKBO; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* JLELCIKCDFI; // 0x38
	::UnityEngine::RectTransform* LANDCCPFCBO; // 0x40
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMIOAPKGCB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCMIOAPKGCB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMIOAPKGCB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCMIOAPKGCB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
