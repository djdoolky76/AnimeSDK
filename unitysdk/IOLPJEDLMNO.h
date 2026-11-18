#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IOLPJEDLMNO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1ACC4750)
#define IOLPJEDLMNO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1ACC4680)
#define IOLPJEDLMNO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1ACC4460)
#define IOLPJEDLMNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC4740)

inline static constexpr unsigned int IOLPJEDLMNO_TypeDefinitionIndex = 60354;

class IOLPJEDLMNO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LONDMNEMFKN; // 0x20
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x28
	::LGINJIKKBJA* DEFJLEPDBON; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* OMAIMFOELNN; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JDMACDGCBBO; // 0x48
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLPJEDLMNO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOLPJEDLMNO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOLPJEDLMNO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLPJEDLMNO_KGEBDLGBGNM_OFFSET))(this);
	}
};
