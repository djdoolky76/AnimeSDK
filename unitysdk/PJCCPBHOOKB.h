#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class OutlineEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PJCCPBHOOKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14BA0660)
#define PJCCPBHOOKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14BA0520)
#define PJCCPBHOOKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14BA01C0)
#define PJCCPBHOOKB__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA0650)

inline static constexpr unsigned int PJCCPBHOOKB_TypeDefinitionIndex = 62642;

class PJCCPBHOOKB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MCJDMJHOBJO; // 0x18
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x20
	::FGCOIBFFCHB* JPNFNFLMFCK; // 0x28
	::FGCOIBFFCHB* NFKIGACNDGC; // 0x30
	::GCIMMDDIFBJ* LJDCJJJEGGO; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::UnityEngine::GameObject* GCOEMIMAGJG; // 0x48
	::UnityEngine::RectTransform* IKDAMCDJKPI; // 0x50
	::FGCOIBFFCHB* LBADFOIMEOG; // 0x58
	::UnityEngine::Transform* JFDOOELFAOA; // 0x60
	::FGCOIBFFCHB* OIMBMENANOG; // 0x68
	::UnityEngine::UI::OutlineEx* MHAAEHFBHMG; // 0x70
	::UnityEngine::RectTransform* JPHPNIDAFLA; // 0x78
	::UnityEngine::UI::LayoutElement* MDCFOPEFBIM; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* GHNMDMJBPMI; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* IPJHFCPGNLC; // 0x90
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x98
	::UnityEngine::RectTransform* CHNHMIDILAN; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCCPBHOOKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJCCPBHOOKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJCCPBHOOKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCCPBHOOKB_KGEBDLGBGNM_OFFSET))(this);
	}
};
