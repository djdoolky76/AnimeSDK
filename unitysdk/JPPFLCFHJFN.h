#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define JPPFLCFHJFN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C44DB0)
#define JPPFLCFHJFN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C44CC0)
#define JPPFLCFHJFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C44B20)
#define JPPFLCFHJFN__CTOR_OFFSET UNITYSDK_OFFSET(0x13C44DA0)

inline static constexpr unsigned int JPPFLCFHJFN_TypeDefinitionIndex = 63960;

class JPPFLCFHJFN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x20
	::UnityEngine::GameObject* CNDCHJDEFMK; // 0x28
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPFLCFHJFN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPPFLCFHJFN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPFLCFHJFN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPPFLCFHJFN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
