#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KCDNAJABGPP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16330BA0)
#define KCDNAJABGPP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16330AD0)
#define KCDNAJABGPP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16330900)
#define KCDNAJABGPP__CTOR_OFFSET UNITYSDK_OFFSET(0x16330B90)

inline static constexpr unsigned int KCDNAJABGPP_TypeDefinitionIndex = 41129;

class KCDNAJABGPP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x18
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x28
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDNAJABGPP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCDNAJABGPP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCDNAJABGPP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDNAJABGPP_KGEBDLGBGNM_OFFSET))(this);
	}
};
