#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EKFMNCNKDLB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11A98280)
#define EKFMNCNKDLB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11A980F0)
#define EKFMNCNKDLB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98270)

inline static constexpr unsigned int EKFMNCNKDLB_TypeDefinitionIndex = 73905;

class EKFMNCNKDLB : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OFJOLDGMCCD; // 0x18
	::UnityEngine::RectTransform* AOJEDFPOBHI; // 0x20
	::MonoUITableScrollV2* PLINCOBCGIP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OIFGDBCKNHL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DGLHCGKNFAC; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HPMKAAKMBGC; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* EEHFKGJHFIC; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* LEEMGNMAGOI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* PBHFFGMAJPK; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BAELNBCECEC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFMNCNKDLB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKFMNCNKDLB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKFMNCNKDLB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
