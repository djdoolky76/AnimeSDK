#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PHBCAKJHHEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B9E1670)
#define PHBCAKJHHEF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B9E15E0)
#define PHBCAKJHHEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B9E1460)
#define PHBCAKJHHEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E1660)

inline static constexpr unsigned int PHBCAKJHHEF_TypeDefinitionIndex = 65452;

class PHBCAKJHHEF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x28
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBCAKJHHEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHBCAKJHHEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHBCAKJHHEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBCAKJHHEF_KGEBDLGBGNM_OFFSET))(this);
	}
};
