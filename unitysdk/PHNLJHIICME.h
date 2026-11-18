#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PHNLJHIICME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C6596D0)
#define PHNLJHIICME_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C6595E0)
#define PHNLJHIICME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C6593C0)
#define PHNLJHIICME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6596C0)

inline static constexpr unsigned int PHNLJHIICME_TypeDefinitionIndex = 70819;

class PHNLJHIICME : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ODPHGOMCFCI; // 0x20
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x28
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x30
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x38
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* ELPMOBIIFGJ; // 0x50
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x58
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNLJHIICME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHNLJHIICME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNLJHIICME_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHNLJHIICME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
