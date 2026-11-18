#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HGLPGFGAGHN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17AF6310)
#define HGLPGFGAGHN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17AF6260)
#define HGLPGFGAGHN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17AF6070)
#define HGLPGFGAGHN__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF6300)

inline static constexpr unsigned int HGLPGFGAGHN_TypeDefinitionIndex = 77769;

class HGLPGFGAGHN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EHMLMJKEJMM; // 0x18
	::UnityEngine::RectTransform* BEFIFNDEPEG; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::LGINJIKKBJA* OKGBOAENDNC; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::GCIMMDDIFBJ* LIDBLBAPJPD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLPGFGAGHN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGLPGFGAGHN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLPGFGAGHN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGLPGFGAGHN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
