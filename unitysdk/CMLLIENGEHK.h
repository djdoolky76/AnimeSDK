#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CMLLIENGEHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145D7AD0)
#define CMLLIENGEHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145D7A00)
#define CMLLIENGEHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145D7860)
#define CMLLIENGEHK__CTOR_OFFSET UNITYSDK_OFFSET(0x145D7AC0)

inline static constexpr unsigned int CMLLIENGEHK_TypeDefinitionIndex = 72177;

class CMLLIENGEHK : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* PCAFNKOBAHG; // 0x18
	::LGINJIKKBJA* GHCOFLDPCPE; // 0x20
	::MonoUITableScrollV2* BKKHLBILFOK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HCOHONOBCEF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLLIENGEHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMLLIENGEHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMLLIENGEHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLLIENGEHK_KGEBDLGBGNM_OFFSET))(this);
	}
};
