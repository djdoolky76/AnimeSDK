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

#define NNDKEPMEBFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F8A7D0)
#define NNDKEPMEBFA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F8A6D0)
#define NNDKEPMEBFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F8A420)
#define NNDKEPMEBFA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8A7C0)

inline static constexpr unsigned int NNDKEPMEBFA_TypeDefinitionIndex = 56019;

class NNDKEPMEBFA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x18
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MAIBDADFDBE; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ALHILFIHKLM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NKAHNLPKMMP; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* BJEHKHOHCPE; // 0x50
	::LGINJIKKBJA* DNGFGABBHEG; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* MHBHFHBHCPB; // 0x68
	::MoleMole::NotificationBadge* LPLEFLENCMP; // 0x70
	::LGINJIKKBJA* DEFJLEPDBON; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* JLEJEPEDOGG; // 0x80
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKEPMEBFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNDKEPMEBFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNDKEPMEBFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKEPMEBFA_KGEBDLGBGNM_OFFSET))(this);
	}
};
