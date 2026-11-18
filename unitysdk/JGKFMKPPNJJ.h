#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JGKFMKPPNJJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C35ECB0)
#define JGKFMKPPNJJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C35EC20)
#define JGKFMKPPNJJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C35EAB0)
#define JGKFMKPPNJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35ECA0)

inline static constexpr unsigned int JGKFMKPPNJJ_TypeDefinitionIndex = 82117;

class JGKFMKPPNJJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EHMLMJKEJMM; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKFMKPPNJJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGKFMKPPNJJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGKFMKPPNJJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKFMKPPNJJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
