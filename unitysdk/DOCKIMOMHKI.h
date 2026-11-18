#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DOCKIMOMHKI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BD6290)
#define DOCKIMOMHKI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BD61C0)
#define DOCKIMOMHKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BD5EF0)
#define DOCKIMOMHKI__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD6280)

inline static constexpr unsigned int DOCKIMOMHKI_TypeDefinitionIndex = 45739;

class DOCKIMOMHKI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* NLIPFEMAKFO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x20
	::UnityEngine::Transform* DDFPLFJBPID; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30
	::UnityEngine::Transform* BDHPKJLDDPD; // 0x38
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x40
	::UnityEngine::Transform* AHKNHJKFDCH; // 0x48
	::UnityEngine::Transform* DPDOFDHIBCP; // 0x50
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x58
	::UnityEngine::Transform* LOGBOEJKNJG; // 0x60
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x68
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIconCardRarityWidgetController*>* MPPIKJIFCIA; // 0x70
	::UnityEngine::Transform* PMHMEAAGCOA; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* APKIAHPBIHO; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCKIMOMHKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOCKIMOMHKI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOCKIMOMHKI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCKIMOMHKI_KGEBDLGBGNM_OFFSET))(this);
	}
};
