#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AOIPBOBJENG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D0F5B0)
#define AOIPBOBJENG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D0F4C0)
#define AOIPBOBJENG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D0F320)
#define AOIPBOBJENG__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0F5A0)

inline static constexpr unsigned int AOIPBOBJENG_TypeDefinitionIndex = 55529;

class AOIPBOBJENG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::LGINJIKKBJA* PMBLECALCKB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MKFDCEOHDCO; // 0x28
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIPBOBJENG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AOIPBOBJENG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AOIPBOBJENG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIPBOBJENG_KGEBDLGBGNM_OFFSET))(this);
	}
};
