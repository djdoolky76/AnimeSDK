#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define FAPOHCDOPBN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x135623D0)
#define FAPOHCDOPBN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13562300)
#define FAPOHCDOPBN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13562180)
#define FAPOHCDOPBN__CTOR_OFFSET UNITYSDK_OFFSET(0x135623C0)

inline static constexpr unsigned int FAPOHCDOPBN_TypeDefinitionIndex = 91770;

class FAPOHCDOPBN : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x20
	::LGINJIKKBJA* BKDDKDMILCA; // 0x28
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPOHCDOPBN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAPOHCDOPBN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAPOHCDOPBN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPOHCDOPBN_KGEBDLGBGNM_OFFSET))(this);
	}
};
