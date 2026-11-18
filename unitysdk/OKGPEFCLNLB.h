#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define OKGPEFCLNLB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A67670)
#define OKGPEFCLNLB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A675A0)
#define OKGPEFCLNLB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A67420)
#define OKGPEFCLNLB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A67660)

inline static constexpr unsigned int OKGPEFCLNLB_TypeDefinitionIndex = 50347;

class OKGPEFCLNLB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x18
	::UnityEngine::GameObject* CNDCHJDEFMK; // 0x20
	::UnityEngine::UI::Button* FBHJFEOOIBL; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGPEFCLNLB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKGPEFCLNLB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGPEFCLNLB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKGPEFCLNLB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
