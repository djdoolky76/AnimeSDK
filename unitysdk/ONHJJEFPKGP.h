#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define ONHJJEFPKGP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F86670)
#define ONHJJEFPKGP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F865E0)
#define ONHJJEFPKGP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F86460)
#define ONHJJEFPKGP__CTOR_OFFSET UNITYSDK_OFFSET(0x15F86660)

inline static constexpr unsigned int ONHJJEFPKGP_TypeDefinitionIndex = 38299;

class ONHJJEFPKGP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::UnityEngine::RectTransform* JLIMOLHLFAK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::UnityEngine::UI::Extension::UITabButton* HJIHNMPIEJL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHJJEFPKGP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ONHJJEFPKGP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ONHJJEFPKGP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHJJEFPKGP_KGEBDLGBGNM_OFFSET))(this);
	}
};
