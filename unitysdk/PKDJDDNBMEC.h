#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PKDJDDNBMEC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178E2170)
#define PKDJDDNBMEC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178E2070)
#define PKDJDDNBMEC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178E1E10)
#define PKDJDDNBMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x178E2160)

inline static constexpr unsigned int PKDJDDNBMEC_TypeDefinitionIndex = 38905;

class PKDJDDNBMEC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IEFCBFFJMLE; // 0x18
	::FGCOIBFFCHB* APANNCNKFFJ; // 0x20
	::FILNFMCNCFE* GDHKKCCOODM; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JEJMFLBBBHC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* EJGPDDONKHM; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JNCOHIIGHBI; // 0x40
	::LGINJIKKBJA* CDCENFNNOGG; // 0x48
	::FGCOIBFFCHB* KAPNCEEJEAI; // 0x50
	::UnityEngine::RectTransform* NIDOGLMJDFC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDJDDNBMEC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKDJDDNBMEC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDJDDNBMEC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKDJDDNBMEC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
