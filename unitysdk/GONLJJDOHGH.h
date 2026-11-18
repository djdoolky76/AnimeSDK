#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define GONLJJDOHGH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CD9F90)
#define GONLJJDOHGH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CD9EC0)
#define GONLJJDOHGH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CD9D40)
#define GONLJJDOHGH__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD9F80)

inline static constexpr unsigned int GONLJJDOHGH_TypeDefinitionIndex = 71826;

class GONLJJDOHGH : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::Transform* AIBOHAIMPOJ; // 0x20
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONLJJDOHGH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GONLJJDOHGH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONLJJDOHGH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GONLJJDOHGH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
