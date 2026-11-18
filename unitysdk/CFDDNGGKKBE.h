#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CFDDNGGKKBE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10E33FE0)
#define CFDDNGGKKBE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10E33E60)
#define CFDDNGGKKBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E33BE0)
#define CFDDNGGKKBE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E33FD0)

inline static constexpr unsigned int CFDDNGGKKBE_TypeDefinitionIndex = 89032;

class CFDDNGGKKBE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MHLGMEDEGPE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::FGCOIBFFCHB* NAKIMHKEDFP; // 0x28
	::FGCOIBFFCHB* CNGLAAIDENL; // 0x30
	::UnityEngine::RectTransform* JNNBPGAGGBK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x40
	::FGCOIBFFCHB* HFEHDHCNJHB; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x58
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x60
	::FGCOIBFFCHB* FGDCNEHIIFN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDDNGGKKBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFDDNGGKKBE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDDNGGKKBE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFDDNGGKKBE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
