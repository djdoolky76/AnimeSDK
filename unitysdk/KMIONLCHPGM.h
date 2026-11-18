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

#define KMIONLCHPGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x129A8420)
#define KMIONLCHPGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x129A8350)
#define KMIONLCHPGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x129A81A0)
#define KMIONLCHPGM__CTOR_OFFSET UNITYSDK_OFFSET(0x129A8410)

inline static constexpr unsigned int KMIONLCHPGM_TypeDefinitionIndex = 53135;

class KMIONLCHPGM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x20
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x38
	::MonoUITableScrollV2* EAIEOENIPOG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIONLCHPGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMIONLCHPGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMIONLCHPGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIONLCHPGM_KGEBDLGBGNM_OFFSET))(this);
	}
};
