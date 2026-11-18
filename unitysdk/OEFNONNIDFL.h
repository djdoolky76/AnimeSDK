#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define OEFNONNIDFL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE148EF0)
#define OEFNONNIDFL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE148DD0)
#define OEFNONNIDFL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE148B20)
#define OEFNONNIDFL__CTOR_OFFSET UNITYSDK_OFFSET(0xE148EE0)

inline static constexpr unsigned int OEFNONNIDFL_TypeDefinitionIndex = 48529;

class OEFNONNIDFL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EEFLKKCAIPD; // 0x18
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30
	::UnityEngine::RectTransform* OMKKKALAKHL; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x40
	::UnityEngine::RectTransform* MFOBKAMIDDH; // 0x48
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x50
	::GCIMMDDIFBJ* ELHLBJEOCEA; // 0x58
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x60
	::FGCOIBFFCHB* MGJHBBLNDJB; // 0x68
	::UnityEngine::RectTransform* ADOMBENGNJF; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFNONNIDFL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEFNONNIDFL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEFNONNIDFL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFNONNIDFL_KGEBDLGBGNM_OFFSET))(this);
	}
};
