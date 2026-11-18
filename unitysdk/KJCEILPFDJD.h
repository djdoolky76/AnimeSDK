#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KJCEILPFDJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x157F1130)
#define KJCEILPFDJD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x157F1080)
#define KJCEILPFDJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x157F0EC0)
#define KJCEILPFDJD__CTOR_OFFSET UNITYSDK_OFFSET(0x157F1120)

inline static constexpr unsigned int KJCEILPFDJD_TypeDefinitionIndex = 59755;

class KJCEILPFDJD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OAKLOCDAFEE; // 0x18
	::UnityEngine::RectTransform* AOOFHEONBNH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x28
	::FGCOIBFFCHB* DJBDCGFIGPE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PJIMOIIONNI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCEILPFDJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJCEILPFDJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCEILPFDJD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJCEILPFDJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
