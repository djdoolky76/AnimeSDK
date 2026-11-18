#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IDILGPKMGGK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16A93F60)
#define IDILGPKMGGK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16A93ED0)
#define IDILGPKMGGK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A93CC0)
#define IDILGPKMGGK__CTOR_OFFSET UNITYSDK_OFFSET(0x16A93F50)

inline static constexpr unsigned int IDILGPKMGGK_TypeDefinitionIndex = 70519;

class IDILGPKMGGK : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadge* AEKMKMFGKHI; // 0x18
	::FGCOIBFFCHB* LLOILDGHOAE; // 0x20
	::UnityEngine::Transform* DPDOFDHIBCP; // 0x28
	::UnityEngine::UI::Button* OEPAJHOAAAI; // 0x30
	::UnityEngine::Transform* HJMOFMLMAOE; // 0x38
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x40
	::UnityEngine::RectTransform* KOAKLAKNHLG; // 0x48
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x58
	::MoleMole::NotificationBadgeEx* LLJPILFPPDD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDILGPKMGGK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDILGPKMGGK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDILGPKMGGK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDILGPKMGGK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
