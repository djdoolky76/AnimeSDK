#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FBNKHJKMPFG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11CF4580)
#define FBNKHJKMPFG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11CF44F0)
#define FBNKHJKMPFG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11CF42B0)
#define FBNKHJKMPFG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CF4570)

inline static constexpr unsigned int FBNKHJKMPFG_TypeDefinitionIndex = 78117;

class FBNKHJKMPFG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PEFNEBEDKBH; // 0x18
	::UnityEngine::RectTransform* DPILIPFFNHH; // 0x20
	::UnityEngine::RectTransform* MGIAPHPPDKH; // 0x28
	::UnityEngine::RectTransform* OANJIEFOEOF; // 0x30
	::UnityEngine::RectTransform* EOHLKFEFLGH; // 0x38
	::GCIMMDDIFBJ* EKLMIILEPIF; // 0x40
	::UnityEngine::RectTransform* NGHDOKEOMNI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* KAFFFKDFLKK; // 0x50
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* HEOBOEMGMDP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNKHJKMPFG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBNKHJKMPFG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNKHJKMPFG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBNKHJKMPFG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
