#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define BBKOOGNCBDM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1701BBC0)
#define BBKOOGNCBDM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1701BAB0)
#define BBKOOGNCBDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1701B8E0)
#define BBKOOGNCBDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1701BBB0)

inline static constexpr unsigned int BBKOOGNCBDM_TypeDefinitionIndex = 75574;

class BBKOOGNCBDM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x30
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKOOGNCBDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBKOOGNCBDM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBKOOGNCBDM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKOOGNCBDM_KGEBDLGBGNM_OFFSET))(this);
	}
};
