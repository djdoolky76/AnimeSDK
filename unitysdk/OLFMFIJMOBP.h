#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OLFMFIJMOBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C1D030)
#define OLFMFIJMOBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C1CF20)
#define OLFMFIJMOBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C1CC90)
#define OLFMFIJMOBP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1D020)

inline static constexpr unsigned int OLFMFIJMOBP_TypeDefinitionIndex = 45968;

class OLFMFIJMOBP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NKAHNLPKMMP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KEOFCAEJFGI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JLEJEPEDOGG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* LIAJPGJIBLO; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x58
	::LGINJIKKBJA* DEFJLEPDBON; // 0x60
	::MoleMole::NotificationBadge* OPLJNMKPIPJ; // 0x68
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x70
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFMFIJMOBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLFMFIJMOBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLFMFIJMOBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFMFIJMOBP_KGEBDLGBGNM_OFFSET))(this);
	}
};
