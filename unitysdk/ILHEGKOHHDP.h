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

#define ILHEGKOHHDP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF87DB30)
#define ILHEGKOHHDP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF87DA40)
#define ILHEGKOHHDP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF87D7E0)
#define ILHEGKOHHDP__CTOR_OFFSET UNITYSDK_OFFSET(0xF87DB20)

inline static constexpr unsigned int ILHEGKOHHDP_TypeDefinitionIndex = 60375;

class ILHEGKOHHDP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x18
	::UnityEngine::Transform* LCMNCPCPCHL; // 0x20
	::UnityEngine::RectTransform* FIOPMNMJBCG; // 0x28
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x30
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x38
	::LGINJIKKBJA* KFOKPEHEAPI; // 0x40
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x58
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x60
	::MoleMole::UIGeneralButtonController* DEFJLEPDBON; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x70
	::MoleMole::NotificationBadge* BHHKPPEFJKH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHEGKOHHDP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILHEGKOHHDP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILHEGKOHHDP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHEGKOHHDP_KGEBDLGBGNM_OFFSET))(this);
	}
};
