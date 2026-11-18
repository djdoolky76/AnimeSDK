#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define HJDDHJBICOH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x101138A0)
#define HJDDHJBICOH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x101137A0)
#define HJDDHJBICOH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10113510)
#define HJDDHJBICOH__CTOR_OFFSET UNITYSDK_OFFSET(0x10113890)

inline static constexpr unsigned int HJDDHJBICOH_TypeDefinitionIndex = 74113;

class HJDDHJBICOH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NLNAHDIJEDM; // 0x18
	::UnityEngine::RectTransform* PHAKDMFIAHL; // 0x20
	::LGINJIKKBJA* OCJOCLEDABL; // 0x28
	::UnityEngine::RectTransform* CCJALJMHJFC; // 0x30
	::UnityEngine::RectTransform* HNHIGKPLAIL; // 0x38
	::FGCOIBFFCHB* CGICCOBHACH; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* APABKIBHMKE; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x50
	::LGINJIKKBJA* EADDCKNAFGG; // 0x58
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* IPJHFCPGNLC; // 0x68
	::UnityEngine::RectTransform* BJELHLLICGG; // 0x70
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDDHJBICOH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJDDHJBICOH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDDHJBICOH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJDDHJBICOH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
