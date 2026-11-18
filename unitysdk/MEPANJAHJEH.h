#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MEPANJAHJEH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156A41E0)
#define MEPANJAHJEH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156A4070)
#define MEPANJAHJEH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156A3D50)
#define MEPANJAHJEH__CTOR_OFFSET UNITYSDK_OFFSET(0x156A41D0)

inline static constexpr unsigned int MEPANJAHJEH_TypeDefinitionIndex = 75357;

class MEPANJAHJEH : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* JAEDNNBMKAN; // 0x18
	::FGCOIBFFCHB* AOAADNPALFM; // 0x20
	::GCIMMDDIFBJ* BPAIFLOOMLC; // 0x28
	::FGCOIBFFCHB* GODHKFBLHPD; // 0x30
	::FGCOIBFFCHB* KEHPAOOHNOI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* FDPIBMKCINH; // 0x40
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x48
	::UnityEngine::RectTransform* IAPKABMDJNF; // 0x50
	::FGCOIBFFCHB* NEJGJHGPMNM; // 0x58
	::FGCOIBFFCHB* GODPEOFIOMM; // 0x60
	::UnityEngine::GameObject* AOOFHEONBNH; // 0x68
	::LGINJIKKBJA* BPNJLBNHPLH; // 0x70
	::MoleMole::NotificationBadgeEx* MJHGKGDKHPG; // 0x78
	::FGCOIBFFCHB* ONMEGPJJGCL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPANJAHJEH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEPANJAHJEH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPANJAHJEH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEPANJAHJEH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
