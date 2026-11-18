#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IKFMHFAGBCI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1657DE50)
#define IKFMHFAGBCI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1657DD10)
#define IKFMHFAGBCI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1657D9D0)
#define IKFMHFAGBCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1657DE40)

inline static constexpr unsigned int IKFMHFAGBCI_TypeDefinitionIndex = 72918;

class IKFMHFAGBCI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::FGCOIBFFCHB* COPKFNAFGME; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::FILNFMCNCFE* PNICHCHPOHL; // 0x30
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DOCMKJEDPCK; // 0x40
	::UnityEngine::RectTransform* HMLLDMOOHAH; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x50
	::UnityEngine::Animation* NLMHNGCLJOK; // 0x58
	::UnityEngine::GameObject* CNDCHJDEFMK; // 0x60
	::MoleMole::UIGeneralButtonController* HNLEKNDCOCE; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* GCIMBPNJMDF; // 0x70
	::UnityEngine::Transform* ODALDIOFMPH; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* INFAACCMHHB; // 0x80
	::MoleMole::NotificationBadge* MJKCBIENIJJ; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* BFPCGPCBHHA; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* AFMFCGLIEFB; // 0x98
	::LGINJIKKBJA* EPHPOEEOMHE; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFMHFAGBCI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKFMHFAGBCI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFMHFAGBCI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKFMHFAGBCI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
