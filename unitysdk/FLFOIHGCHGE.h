#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define FLFOIHGCHGE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13227A70)
#define FLFOIHGCHGE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13227960)
#define FLFOIHGCHGE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13227740)
#define FLFOIHGCHGE__CTOR_OFFSET UNITYSDK_OFFSET(0x13227A60)

inline static constexpr unsigned int FLFOIHGCHGE_TypeDefinitionIndex = 82889;

class FLFOIHGCHGE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::MoleMole::MonoInputKey* DPLOHBODBBK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* OPEHBEBNGCH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HJJNKCCBONH; // 0x38
	::MoleMole::NotificationBadge* FBFGBCDJOFK; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x48
	::LGINJIKKBJA* OGFPBBJEFEI; // 0x50
	::MoleMole::UIGeneralButtonController* PAAMOIHCKHF; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* GGGHGIOEBGD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFOIHGCHGE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLFOIHGCHGE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLFOIHGCHGE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFOIHGCHGE_KGEBDLGBGNM_OFFSET))(this);
	}
};
