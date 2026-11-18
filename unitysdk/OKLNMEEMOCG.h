#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OKLNMEEMOCG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B7A2BE0)
#define OKLNMEEMOCG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B7A2B50)
#define OKLNMEEMOCG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B7A2A00)
#define OKLNMEEMOCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A2BD0)

inline static constexpr unsigned int OKLNMEEMOCG_TypeDefinitionIndex = 71696;

class OKLNMEEMOCG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLNMEEMOCG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKLNMEEMOCG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKLNMEEMOCG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLNMEEMOCG_KGEBDLGBGNM_OFFSET))(this);
	}
};
