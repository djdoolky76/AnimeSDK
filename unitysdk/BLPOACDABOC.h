#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define BLPOACDABOC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128B1B80)
#define BLPOACDABOC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x128B1AF0)
#define BLPOACDABOC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128B18C0)
#define BLPOACDABOC__CTOR_OFFSET UNITYSDK_OFFSET(0x128B1B70)

inline static constexpr unsigned int BLPOACDABOC_TypeDefinitionIndex = 47900;

class BLPOACDABOC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x18
	::MoleMole::NotificationBadgeEx* NPODBKFLNGE; // 0x20
	::UnityEngine::GameObject* OGDHHANGGIG; // 0x28
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x30
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x38
	::UnityEngine::UI::Extension::UIToggleButton* DEJCPNPHCLA; // 0x40
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HDKKJDHAEDK; // 0x50
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* OIGGKFHCPHA; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPOACDABOC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLPOACDABOC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLPOACDABOC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPOACDABOC_KGEBDLGBGNM_OFFSET))(this);
	}
};
