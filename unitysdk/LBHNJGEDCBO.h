#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define LBHNJGEDCBO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1517D980)
#define LBHNJGEDCBO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1517D820)
#define LBHNJGEDCBO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1517D4E0)
#define LBHNJGEDCBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1517D970)

inline static constexpr unsigned int LBHNJGEDCBO_TypeDefinitionIndex = 51051;

class LBHNJGEDCBO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* NPMJBCFPPHD; // 0x18
	::UnityEngine::Transform* BBHDCMADENO; // 0x20
	::UnityEngine::RectTransform* KFIFKHJEFJG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::FGCOIBFFCHB* JACBEBMFHJB; // 0x38
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x40
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x48
	::UnityEngine::RectTransform* ONCGPBLJMDG; // 0x50
	::MoleMole::MonoGamepadSelectable* HEKACEMIHKE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* PIJEGCMDHHP; // 0x60
	::UnityEngine::RectTransform* EIHIDPJMEAM; // 0x68
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* KLGJHPNPPAK; // 0x78
	::UnityEngine::RectTransform* KGHCCPMOBNC; // 0x80
	::UnityEngine::Animation* IJDPDOHOCGB; // 0x88
	::FGCOIBFFCHB* LEPCKAOLJGF; // 0x90
	::UnityEngine::Transform* ELPPDAGKMGD; // 0x98
	::UnityEngine::RectTransform* KHFECPOGDBF; // 0xA0
	::FGCOIBFFCHB* BBAGLNHMHDC; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHNJGEDCBO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBHNJGEDCBO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHNJGEDCBO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LBHNJGEDCBO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
