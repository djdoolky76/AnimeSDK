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

#define ICGEKEIKDHN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xEA13400)
#define ICGEKEIKDHN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xEA13370)
#define ICGEKEIKDHN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEA13170)
#define ICGEKEIKDHN__CTOR_OFFSET UNITYSDK_OFFSET(0xEA133F0)

inline static constexpr unsigned int ICGEKEIKDHN_TypeDefinitionIndex = 75814;

class ICGEKEIKDHN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x18
	::FGCOIBFFCHB* MBAPIIPLLGD; // 0x20
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x38
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x40
	::MonoUITableScrollV2* EAIEOENIPOG; // 0x48
	::UnityEngine::GameObject* MCJCCJOEKGN; // 0x50
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGEKEIKDHN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICGEKEIKDHN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGEKEIKDHN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICGEKEIKDHN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
