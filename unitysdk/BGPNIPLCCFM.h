#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BGPNIPLCCFM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x113E67B0)
#define BGPNIPLCCFM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x113E66E0)
#define BGPNIPLCCFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x113E64A0)
#define BGPNIPLCCFM__CTOR_OFFSET UNITYSDK_OFFSET(0x113E67A0)

inline static constexpr unsigned int BGPNIPLCCFM_TypeDefinitionIndex = 71966;

class BGPNIPLCCFM : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* CALJMMPPAOE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MJJHLLMGINJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LDBCOKNFDDC; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BPGODNEMNOO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* APBKKMHNFIJ; // 0x38
	::UnityEngine::RectTransform* KKOJIGEFPBM; // 0x40
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x48
	::FGCOIBFFCHB* DDLKHBGJLDP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNIPLCCFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGPNIPLCCFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNIPLCCFM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGPNIPLCCFM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
