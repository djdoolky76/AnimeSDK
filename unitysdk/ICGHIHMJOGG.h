#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ICGHIHMJOGG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x181AAF80)
#define ICGHIHMJOGG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x181AAEF0)
#define ICGHIHMJOGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x181AAD40)
#define ICGHIHMJOGG__CTOR_OFFSET UNITYSDK_OFFSET(0x181AAF70)

inline static constexpr unsigned int ICGHIHMJOGG_TypeDefinitionIndex = 48200;

class ICGHIHMJOGG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGHIHMJOGG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICGHIHMJOGG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICGHIHMJOGG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGHIHMJOGG_KGEBDLGBGNM_OFFSET))(this);
	}
};
