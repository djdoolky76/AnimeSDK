#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OFHFLKJDFJG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF180A90)
#define OFHFLKJDFJG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF1809E0)
#define OFHFLKJDFJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF1807B0)
#define OFHFLKJDFJG__CTOR_OFFSET UNITYSDK_OFFSET(0xF180A80)

inline static constexpr unsigned int OFHFLKJDFJG_TypeDefinitionIndex = 82970;

class OFHFLKJDFJG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::MoleMole::NotificationBadgeEx* FLANDOHPICD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IKOFJEHPPAN; // 0x28
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* LONDMNEMFKN; // 0x38
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x40
	::LGINJIKKBJA* NPHPKPAPBNF; // 0x48
	::UnityEngine::GameObject* COEGDCPBBAB; // 0x50
	::UnityEngine::GameObject* FKKFDIACHKN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHFLKJDFJG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFHFLKJDFJG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHFLKJDFJG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFHFLKJDFJG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
