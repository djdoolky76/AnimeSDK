#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CMPEKEJILEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145D7E40)
#define CMPEKEJILEF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145D7D70)
#define CMPEKEJILEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145D7B70)
#define CMPEKEJILEF__CTOR_OFFSET UNITYSDK_OFFSET(0x145D7E30)

inline static constexpr unsigned int CMPEKEJILEF_TypeDefinitionIndex = 51696;

class CMPEKEJILEF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::MoleMole::NotificationBadge* BHHKPPEFJKH; // 0x20
	::MoleMole::UIGeneralButtonController* DEFJLEPDBON; // 0x28
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MBDMAMEEAOO; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HCOHONOBCEF; // 0x40
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPEKEJILEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMPEKEJILEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPEKEJILEF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMPEKEJILEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
