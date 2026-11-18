#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PDEKNEPGBDJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16003560)
#define PDEKNEPGBDJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16003490)
#define PDEKNEPGBDJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16003310)
#define PDEKNEPGBDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16003550)

inline static constexpr unsigned int PDEKNEPGBDJ_TypeDefinitionIndex = 78221;

class PDEKNEPGBDJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IDILOMIELFG; // 0x18
	::FGCOIBFFCHB* GMDAJPJHDLG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BKJOEMAJGIP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PACOCICDIFI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEKNEPGBDJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDEKNEPGBDJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEKNEPGBDJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDEKNEPGBDJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
