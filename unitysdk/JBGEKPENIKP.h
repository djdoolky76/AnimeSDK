#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class OutlineEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JBGEKPENIKP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16AC0870)
#define JBGEKPENIKP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16AC07A0)
#define JBGEKPENIKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16AC0440)
#define JBGEKPENIKP__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC0860)

inline static constexpr unsigned int JBGEKPENIKP_TypeDefinitionIndex = 72740;

class JBGEKPENIKP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IJFNGGOHFIO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KLGJHPNPPAK; // 0x20
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::GCIMMDDIFBJ* IJDPDOHOCGB; // 0x38
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x40
	::MoleMole::MonoGamepadSelectable* HEKACEMIHKE; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HMJBEMHCAKJ; // 0x50
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x58
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x60
	::FGCOIBFFCHB* BBAGLNHMHDC; // 0x68
	::UnityEngine::UI::OutlineEx* OHOJIDIJPMI; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* PIJEGCMDHHP; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x80
	::MoleMole::NotificationBadgeEx* AEKMKMFGKHI; // 0x88
	::UnityEngine::UI::OutlineEx* CFHHHBKBECE; // 0x90
	::UnityEngine::GameObject* IPCOIFBOEPA; // 0x98
	::UnityEngine::RectTransform* JILNOEBDABP; // 0xA0
	::UnityEngine::GameObject* KABAHBBFIIH; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGEKPENIKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBGEKPENIKP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBGEKPENIKP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGEKPENIKP_KGEBDLGBGNM_OFFSET))(this);
	}
};
