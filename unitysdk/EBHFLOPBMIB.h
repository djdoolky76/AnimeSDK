#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBHFLOPBMIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17222200)
#define EBHFLOPBMIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17222130)
#define EBHFLOPBMIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17221F10)
#define EBHFLOPBMIB__CTOR_OFFSET UNITYSDK_OFFSET(0x172221F0)

inline static constexpr unsigned int EBHFLOPBMIB_TypeDefinitionIndex = 73196;

class EBHFLOPBMIB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* JILENNOEJOD; // 0x18
	::UnityEngine::CanvasGroup* GPHAEDMALMK; // 0x20
	::FGCOIBFFCHB* LICINCMCCCN; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::UnityEngine::Transform* PMHMEAAGCOA; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40
	::MoleMole::NotificationBadgeEx* IDPCIDBALIB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* EHALDAHKAGN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHFLOPBMIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBHFLOPBMIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBHFLOPBMIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHFLOPBMIB_KGEBDLGBGNM_OFFSET))(this);
	}
};
