#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define DNOCGMMPNHP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1346B5B0)
#define DNOCGMMPNHP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1346B4E0)
#define DNOCGMMPNHP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1346B310)
#define DNOCGMMPNHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1346B5A0)

inline static constexpr unsigned int DNOCGMMPNHP_TypeDefinitionIndex = 75734;

class DNOCGMMPNHP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x18
	::UnityEngine::UI::Extension::UITabButton* BMPBOHPMBCK; // 0x20
	::MoleMole::NotificationBadgeEx* NGFOIFAPOMP; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x30
	::UnityEngine::UI::Extension::UITabButton* DPDPMMNMNNF; // 0x38
	::UnityEngine::UI::Extension::UITabButton* BOFKMAFFCEF; // 0x40
	::MoleMole::NotificationBadgeEx* DNPILILMNEM; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50
	::MoleMole::NotificationBadgeEx* ALNPDKPHMFP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOCGMMPNHP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNOCGMMPNHP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOCGMMPNHP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNOCGMMPNHP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
