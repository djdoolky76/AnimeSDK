#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define KJAPOPOADFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1765D9C0)
#define KJAPOPOADFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1765D910)
#define KJAPOPOADFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1765D750)
#define KJAPOPOADFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1765D9B0)

inline static constexpr unsigned int KJAPOPOADFJ_TypeDefinitionIndex = 58864;

class KJAPOPOADFJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::UnityEngine::CanvasGroup* KKMCLPDAJKJ; // 0x28
	::FGCOIBFFCHB* DJKOBDEJNME; // 0x30
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x38
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAPOPOADFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJAPOPOADFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAPOPOADFJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJAPOPOADFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
