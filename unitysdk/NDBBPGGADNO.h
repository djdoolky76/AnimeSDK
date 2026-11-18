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

#define NDBBPGGADNO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x131359B0)
#define NDBBPGGADNO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13135920)
#define NDBBPGGADNO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x131356F0)
#define NDBBPGGADNO__CTOR_OFFSET UNITYSDK_OFFSET(0x131359A0)

inline static constexpr unsigned int NDBBPGGADNO_TypeDefinitionIndex = 93250;

class NDBBPGGADNO : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* NPODBKFLNGE; // 0x18
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x20
	::UnityEngine::GameObject* OGDHHANGGIG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HDKKJDHAEDK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* OIGGKFHCPHA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x40
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x48
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x58
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x60
	::UnityEngine::UI::Extension::UIToggleButton* DEJCPNPHCLA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBBPGGADNO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDBBPGGADNO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDBBPGGADNO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBBPGGADNO_KGEBDLGBGNM_OFFSET))(this);
	}
};
