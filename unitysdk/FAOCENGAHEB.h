#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FAOCENGAHEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB315E0)
#define FAOCENGAHEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xBB31530)
#define FAOCENGAHEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB31360)
#define FAOCENGAHEB__CTOR_OFFSET UNITYSDK_OFFSET(0xBB315D0)

inline static constexpr unsigned int FAOCENGAHEB_TypeDefinitionIndex = 83272;

class FAOCENGAHEB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::MoleMole::UIGeneralButtonController* GPJIEHCKFMB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IEOJFFPCGGN; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::UnityEngine::RectTransform* AJIBHBJNOCE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOCENGAHEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAOCENGAHEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAOCENGAHEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOCENGAHEB_KGEBDLGBGNM_OFFSET))(this);
	}
};
