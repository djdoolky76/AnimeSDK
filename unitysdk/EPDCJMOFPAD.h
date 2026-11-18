#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define EPDCJMOFPAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E3E5B0)
#define EPDCJMOFPAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E3E4B0)
#define EPDCJMOFPAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E3E1F0)
#define EPDCJMOFPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3E5A0)

inline static constexpr unsigned int EPDCJMOFPAD_TypeDefinitionIndex = 59373;

class EPDCJMOFPAD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::RectTransform* GMJGCBOFIEA; // 0x20
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JLEJEPEDOGG; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* BJEHKHOHCPE; // 0x38
	::LGINJIKKBJA* DEFJLEPDBON; // 0x40
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x48
	::MoleMole::NotificationBadge* LPLEFLENCMP; // 0x50
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* NKAHNLPKMMP; // 0x60
	::LGINJIKKBJA* DNGFGABBHEG; // 0x68
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* MAIBDADFDBE; // 0x78
	::UnityEngine::RectTransform* MLFKEBKMPHC; // 0x80
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* MHBHFHBHCPB; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCJMOFPAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPDCJMOFPAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPDCJMOFPAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCJMOFPAD_KGEBDLGBGNM_OFFSET))(this);
	}
};
