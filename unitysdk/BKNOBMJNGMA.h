#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BKNOBMJNGMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15080620)
#define BKNOBMJNGMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15080530)
#define BKNOBMJNGMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150802D0)
#define BKNOBMJNGMA__CTOR_OFFSET UNITYSDK_OFFSET(0x15080610)

inline static constexpr unsigned int BKNOBMJNGMA_TypeDefinitionIndex = 51804;

class BKNOBMJNGMA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BPGODNEMNOO; // 0x18
	::MoleMole::NotificationBadge* OPLJNMKPIPJ; // 0x20
	::UnityEngine::RectTransform* NPHIMEGPMKP; // 0x28
	::LGINJIKKBJA* DEFJLEPDBON; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GIMKMNALPJF; // 0x38
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JLEJEPEDOGG; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* BPKHNAJOILB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x60
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x68
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* NKAHNLPKMMP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOBMJNGMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKNOBMJNGMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOBMJNGMA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKNOBMJNGMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
