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

#define CFFMCHGEKED_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128EC450)
#define CFFMCHGEKED_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x128EC2D0)
#define CFFMCHGEKED_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128EC050)
#define CFFMCHGEKED__CTOR_OFFSET UNITYSDK_OFFSET(0x128EC440)

inline static constexpr unsigned int CFFMCHGEKED_TypeDefinitionIndex = 80297;

class CFFMCHGEKED : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* NAKIMHKEDFP; // 0x18
	::UnityEngine::RectTransform* JNNBPGAGGBK; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x30
	::UnityEngine::RectTransform* MHLGMEDEGPE; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x48
	::FGCOIBFFCHB* HFEHDHCNJHB; // 0x50
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x58
	::FGCOIBFFCHB* CNGLAAIDENL; // 0x60
	::FGCOIBFFCHB* FGDCNEHIIFN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFMCHGEKED__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFFMCHGEKED_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFMCHGEKED_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFFMCHGEKED_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
