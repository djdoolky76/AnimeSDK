#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OAFPPGNKJHM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1DCF8060)
#define OAFPPGNKJHM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1DCF7FB0)
#define OAFPPGNKJHM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1DCF7DC0)
#define OAFPPGNKJHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF8050)

inline static constexpr unsigned int OAFPPGNKJHM_TypeDefinitionIndex = 95129;

class OAFPPGNKJHM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::GCIMMDDIFBJ* LCGNHLHPDLE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::UnityEngine::Transform* EHMLMJKEJMM; // 0x30
	::UnityEngine::Transform* ODALDIOFMPH; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPPGNKJHM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAFPPGNKJHM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPPGNKJHM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAFPPGNKJHM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
