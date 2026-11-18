#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NOPDMBJFHGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xED4DAC0)
#define NOPDMBJFHGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xED4DA10)
#define NOPDMBJFHGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xED4D840)
#define NOPDMBJFHGN__CTOR_OFFSET UNITYSDK_OFFSET(0xED4DAB0)

inline static constexpr unsigned int NOPDMBJFHGN_TypeDefinitionIndex = 66512;

class NOPDMBJFHGN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::GameObject* OMFJGKJNKOI; // 0x20
	::LGINJIKKBJA* MDHOCAOPCEC; // 0x28
	::FGCOIBFFCHB* AOBNDPOKPDI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPDMBJFHGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NOPDMBJFHGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPDMBJFHGN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NOPDMBJFHGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
