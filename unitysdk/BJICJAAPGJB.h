#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BJICJAAPGJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x113EE4F0)
#define BJICJAAPGJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x113EE320)
#define BJICJAAPGJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x113EDFD0)
#define BJICJAAPGJB__CTOR_OFFSET UNITYSDK_OFFSET(0x113EE4E0)

inline static constexpr unsigned int BJICJAAPGJB_TypeDefinitionIndex = 39886;

class BJICJAAPGJB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* DEIGHDOPPJI; // 0x18
	::LGINJIKKBJA* ONOINJOLLPK; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Text* DOHBFOPMFHN; // 0x30
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x38
	::UnityEngine::Transform* DGDPFFNMPBL; // 0x40
	::FGCOIBFFCHB* KCKPHGDFOBC; // 0x48
	::UnityEngine::GameObject* LPNFAAEJKGG; // 0x50
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x58
	::UnityEngine::UI::Text* CABGCJLGGNA; // 0x60
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x70
	::UnityEngine::UI::Text* MCMDOKCJDDL; // 0x78
	::UnityEngine::GameObject* NCABFKJCDBF; // 0x80
	::LGINJIKKBJA* OKGBOAENDNC; // 0x88
	::LGINJIKKBJA* MAPJABKIKLD; // 0x90
	::LGINJIKKBJA* DKEFFKBJAMA; // 0x98
	::UnityEngine::RectTransform* DBJCNKCCNKC; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJICJAAPGJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BJICJAAPGJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJICJAAPGJB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BJICJAAPGJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
