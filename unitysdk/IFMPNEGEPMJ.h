#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IFMPNEGEPMJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x153A5540)
#define IFMPNEGEPMJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x153A5490)
#define IFMPNEGEPMJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x153A52C0)
#define IFMPNEGEPMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x153A5530)

inline static constexpr unsigned int IFMPNEGEPMJ_TypeDefinitionIndex = 74508;

class IFMPNEGEPMJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::FGCOIBFFCHB* OAKLOCDAFEE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x38
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x40
	::UnityEngine::RectTransform* OHKECEONILF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPNEGEPMJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFMPNEGEPMJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFMPNEGEPMJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPNEGEPMJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
