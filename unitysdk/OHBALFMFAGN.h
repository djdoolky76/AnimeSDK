#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OHBALFMFAGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18442FB0)
#define OHBALFMFAGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18442E80)
#define OHBALFMFAGN__CTOR_OFFSET UNITYSDK_OFFSET(0x18442FA0)

inline static constexpr unsigned int OHBALFMFAGN_TypeDefinitionIndex = 86804;

class OHBALFMFAGN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FIDHNODLLCB; // 0x18
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x20
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x28
	::MoleMole::Config::UIAchievementAnimConfig* EKJOKNMCIIO; // 0x30
	::UnityEngine::RectTransform* ANDFIBAKEAE; // 0x38
	::UnityEngine::CanvasGroup* PDACHPLBKIE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBALFMFAGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHBALFMFAGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHBALFMFAGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
