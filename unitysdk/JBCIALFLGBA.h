#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define JBCIALFLGBA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1382C7A0)
#define JBCIALFLGBA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1382C6A0)
#define JBCIALFLGBA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1382C3C0)
#define JBCIALFLGBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1382C790)

inline static constexpr unsigned int JBCIALFLGBA_TypeDefinitionIndex = 79093;

class JBCIALFLGBA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DGJNCIFBOJN; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ALHILFIHKLM; // 0x28
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x40
	::UnityEngine::GameObject* IKOFJEHPPAN; // 0x48
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x50
	::MoleMole::NotificationBadge* OPLJNMKPIPJ; // 0x58
	::LGINJIKKBJA* DEFJLEPDBON; // 0x60
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* JLEJEPEDOGG; // 0x70
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x78
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x80
	::UnityEngine::GameObject* OEGGFAEBMGM; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* NKAHNLPKMMP; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCIALFLGBA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBCIALFLGBA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCIALFLGBA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBCIALFLGBA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
