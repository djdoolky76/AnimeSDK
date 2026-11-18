#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FMCGDEACGHG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x165B8520)
#define FMCGDEACGHG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165B83E0)
#define FMCGDEACGHG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x165B8190)
#define FMCGDEACGHG__CTOR_OFFSET UNITYSDK_OFFSET(0x165B8510)

inline static constexpr unsigned int FMCGDEACGHG_TypeDefinitionIndex = 63380;

class FMCGDEACGHG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FAFMOPNALEH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJGJMCENCFC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* FDGKPEHLOEH; // 0x28
	::LGINJIKKBJA* KDLNMKIAGAJ; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MKAMEMNJEAM; // 0x48
	::FGCOIBFFCHB* LLDONLPMLJP; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x58
	::LGINJIKKBJA* KOMIELKMHIC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCGDEACGHG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMCGDEACGHG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMCGDEACGHG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCGDEACGHG_KGEBDLGBGNM_OFFSET))(this);
	}
};
