#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CIEANABMMON_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15336960)
#define CIEANABMMON_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15336830)
#define CIEANABMMON_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15336530)
#define CIEANABMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x15336950)

inline static constexpr unsigned int CIEANABMMON_TypeDefinitionIndex = 79379;

class CIEANABMMON : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IKOHKGFKJAF; // 0x28
	::FGCOIBFFCHB* MDAPCFNIFJK; // 0x30
	::UnityEngine::CanvasGroup* GPHAEDMALMK; // 0x38
	::MoleMole::NotificationBadgeEx* IDPCIDBALIB; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48
	::UnityEngine::Transform* PMHMEAAGCOA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* CJIPFOONBFB; // 0x58
	::UnityEngine::RectTransform* CAJAPFDGMHH; // 0x60
	::UnityEngine::Transform* HCEMDNGPNLB; // 0x68
	::UnityEngine::Transform* MGCOOHNFCIN; // 0x70
	::UnityEngine::Transform* MBKACMJJMBH; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* DCGFFEPELKH; // 0x80
	::FGCOIBFFCHB* JBICBNFJDCG; // 0x88
	::FGCOIBFFCHB* IHKLMOHCPGH; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEANABMMON__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIEANABMMON_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEANABMMON_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIEANABMMON_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
