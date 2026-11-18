#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LFKBCOOCCNI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x126D95F0)
#define LFKBCOOCCNI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x126D9520)
#define LFKBCOOCCNI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x126D9380)
#define LFKBCOOCCNI__CTOR_OFFSET UNITYSDK_OFFSET(0x126D95E0)

inline static constexpr unsigned int LFKBCOOCCNI_TypeDefinitionIndex = 48499;

class LFKBCOOCCNI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LOIBABHKFJH; // 0x18
	::UnityEngine::CanvasGroup* PDACHPLBKIE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BKGNGPPMECH; // 0x30
	::FGCOIBFFCHB* ANBLGKBBIKI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKBCOOCCNI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFKBCOOCCNI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFKBCOOCCNI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKBCOOCCNI_KGEBDLGBGNM_OFFSET))(this);
	}
};
