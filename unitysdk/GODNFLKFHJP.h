#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GODNFLKFHJP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D6EB80)
#define GODNFLKFHJP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D6EAF0)
#define GODNFLKFHJP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D6E920)
#define GODNFLKFHJP__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6EB70)

inline static constexpr unsigned int GODNFLKFHJP_TypeDefinitionIndex = 46379;

class GODNFLKFHJP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IJGBDGOFGNK; // 0x18
	::UnityEngine::RectTransform* BJHCGNBFOEA; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::RectTransform* KJCGLADLBFI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x38
	::UnityEngine::RectTransform* IFNNEOLEAMB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMCDAOJKFNF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODNFLKFHJP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GODNFLKFHJP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODNFLKFHJP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GODNFLKFHJP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
