#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define BBIELADBMEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x113CFA90)
#define BBIELADBMEO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x113CF9E0)
#define BBIELADBMEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x113CF800)
#define BBIELADBMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x113CFA80)

inline static constexpr unsigned int BBIELADBMEO_TypeDefinitionIndex = 48523;

class BBIELADBMEO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::UnityEngine::RectTransform* BCAHLLPCOLB; // 0x20
	::UnityEngine::RectTransform* PHAKDMFIAHL; // 0x28
	::UnityEngine::RectTransform* JHHKICFIODF; // 0x30
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x38
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x48
	::MoleMole::NotificationBadgeEx* FLANDOHPICD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIELADBMEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBIELADBMEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBIELADBMEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIELADBMEO_KGEBDLGBGNM_OFFSET))(this);
	}
};
