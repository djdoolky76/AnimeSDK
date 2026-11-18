#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define AFCNDNLGDEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144D5D30)
#define AFCNDNLGDEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144D5C10)
#define AFCNDNLGDEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144D5970)
#define AFCNDNLGDEB__CTOR_OFFSET UNITYSDK_OFFSET(0x144D5D20)

inline static constexpr unsigned int AFCNDNLGDEB_TypeDefinitionIndex = 44505;

class AFCNDNLGDEB : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x18
	::UnityEngine::RectTransform* EBGGJKEIFIO; // 0x20
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x50
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x58
	::FGCOIBFFCHB* ABFNNDEIJOK; // 0x60
	::LGINJIKKBJA* CLJHJANEBAF; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCNDNLGDEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFCNDNLGDEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFCNDNLGDEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCNDNLGDEB_KGEBDLGBGNM_OFFSET))(this);
	}
};
