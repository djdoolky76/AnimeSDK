#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define BOPMDEAKINB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14C58370)
#define BOPMDEAKINB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14C582A0)
#define BOPMDEAKINB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14C58070)
#define BOPMDEAKINB__CTOR_OFFSET UNITYSDK_OFFSET(0x14C58360)

inline static constexpr unsigned int BOPMDEAKINB_TypeDefinitionIndex = 59476;

class BOPMDEAKINB : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GJHMOHDIJOC; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DKHEGNFOPKA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HFILCGNGJBK; // 0x38
	::UnityEngine::Transform* OEGGFAEBMGM; // 0x40
	::UnityEngine::Transform* GJLMPCMDOGD; // 0x48
	::UnityEngine::Transform* FOGDDMCKIMH; // 0x50
	::MoleMole::NotificationBadge* GMABNNKNIIF; // 0x58
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x60
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x68
	::MoleMole::NotificationBadge* LLFCKCPGLKG; // 0x70
	::UnityEngine::Transform* IOAAHPKLJMO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPMDEAKINB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOPMDEAKINB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOPMDEAKINB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPMDEAKINB_KGEBDLGBGNM_OFFSET))(this);
	}
};
