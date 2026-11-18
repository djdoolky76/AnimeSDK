#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MFMIAGLDOHM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140520E0)
#define MFMIAGLDOHM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14051FB0)
#define MFMIAGLDOHM__CTOR_OFFSET UNITYSDK_OFFSET(0x140520D0)

inline static constexpr unsigned int MFMIAGLDOHM_TypeDefinitionIndex = 54476;

class MFMIAGLDOHM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x18
	::UnityEngine::RectTransform* ANDFIBAKEAE; // 0x20
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x28
	::UnityEngine::CanvasGroup* PDACHPLBKIE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* FIDHNODLLCB; // 0x38
	::MoleMole::Config::UIAchievementAnimConfig* EKJOKNMCIIO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMIAGLDOHM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MFMIAGLDOHM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MFMIAGLDOHM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
