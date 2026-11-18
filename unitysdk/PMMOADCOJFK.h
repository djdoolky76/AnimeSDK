#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define PMMOADCOJFK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11998950)
#define PMMOADCOJFK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11998830)
#define PMMOADCOJFK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11998540)
#define PMMOADCOJFK__CTOR_OFFSET UNITYSDK_OFFSET(0x11998940)

inline static constexpr unsigned int PMMOADCOJFK_TypeDefinitionIndex = 38249;

class PMMOADCOJFK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* HBGEDHJKIGF; // 0x18
	::UnityEngine::RectTransform* FFGCGIDBGIA; // 0x20
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x28
	::GCIMMDDIFBJ* GHCCDPFIJHG; // 0x30
	::UnityEngine::UI::Extension::UIToggleButton* KHOJKFHFKIJ; // 0x38
	::GCIMMDDIFBJ* MDMBJEFINOO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48
	::FGCOIBFFCHB* PFCGKHGHIPG; // 0x50
	::MoleMole::NotificationBadge* BHHKPPEFJKH; // 0x58
	::UnityEngine::RectTransform* PHFOGPCBGOG; // 0x60
	::FGCOIBFFCHB* DLONPENKLAH; // 0x68
	::UnityEngine::RectTransform* FPFDCJFIDON; // 0x70
	::FGCOIBFFCHB* GEGNBGBACJK; // 0x78
	::UnityEngine::RectTransform* IJFNGGOHFIO; // 0x80
	::FGCOIBFFCHB* FHILFJEGAIK; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMOADCOJFK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMMOADCOJFK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMOADCOJFK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMMOADCOJFK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
