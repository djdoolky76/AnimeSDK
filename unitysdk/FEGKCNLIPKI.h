#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FEGKCNLIPKI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1419A1C0)
#define FEGKCNLIPKI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1419A130)
#define FEGKCNLIPKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14199F30)
#define FEGKCNLIPKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1419A1B0)

inline static constexpr unsigned int FEGKCNLIPKI_TypeDefinitionIndex = 85287;

class FEGKCNLIPKI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* JLCKOGDEFHA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KJNBJIANGCN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OOLPPFJCOFM; // 0x30
	::UnityEngine::RectTransform* OCKAPKFNBKM; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ANBPPLPCKFG; // 0x40
	::FGCOIBFFCHB* KHFGDCKMKIP; // 0x48
	::MoleMole::UIGeneralButtonController* HJDAMCBKNEI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* GCLDBJHCCML; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCNLIPKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEGKCNLIPKI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEGKCNLIPKI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCNLIPKI_KGEBDLGBGNM_OFFSET))(this);
	}
};
