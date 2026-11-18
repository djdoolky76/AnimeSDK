#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIActivityRoleRewardPreviewWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define ANGIEJIFCBN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1700C540)
#define ANGIEJIFCBN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1700C440)
#define ANGIEJIFCBN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1700C0B0)
#define ANGIEJIFCBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1700C530)

inline static constexpr unsigned int ANGIEJIFCBN_TypeDefinitionIndex = 60526;

class ANGIEJIFCBN : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadRegion* GDKKFFGJEEO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GDHCGNFJNNO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JEBLIFINKFI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PDCKMHKKANC; // 0x30
	::UnityEngine::Transform* KKIDJLLDADG; // 0x38
	::LGINJIKKBJA* CONAMFJJGBC; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x48
	::MoleMole::MonoGamepadModule* IFHGBPNLCFC; // 0x50
	::MEKABAIJMNM_1<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* EOMGAEONDMD; // 0x58
	::MoleMole::MonoGamepadRegion* BLMPOCBNNNB; // 0x60
	::UnityEngine::GameObject* IOIANILNPPI; // 0x68
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x70
	::UnityEngine::UI::Extension::UITimeWidget* IOPGJLPLLDP; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* BHGILJLLGDK; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* BPJGCHENFNK; // 0x88
	::MEKABAIJMNM_1<::MoleMole::UIActivityRoleRewardPreviewWidgetController*>* MDPEBBDOBBF; // 0x90
	::MoleMole::MonoGamepadModule* JACLDHLKBEI; // 0x98
	::UnityEngine::UI::Extension::UILocalizationText* PALPDKGCLKD; // 0xA0
	::MoleMole::UIGeneralButtonController* LDAOGODPPHO; // 0xA8
	::MoleMole::NotificationBadge* PPHHNFFJLNL; // 0xB0
	::MonoUITableScrollV2* JEKEAOKLFAH; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGIEJIFCBN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANGIEJIFCBN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGIEJIFCBN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANGIEJIFCBN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
