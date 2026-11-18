#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HIALPLBIMNK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B4B1A0)
#define HIALPLBIMNK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B4B0F0)
#define HIALPLBIMNK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B4AF50)
#define HIALPLBIMNK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4B190)

inline static constexpr unsigned int HIALPLBIMNK_TypeDefinitionIndex = 38486;

class HIALPLBIMNK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CELFGFCFMLL; // 0x18
	::FGCOIBFFCHB* POPGLGEDFFG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BHDIFOOFOJK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DKBNFLGDKOO; // 0x30
	::FGCOIBFFCHB* HIKHFOHLCIB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIALPLBIMNK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HIALPLBIMNK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HIALPLBIMNK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIALPLBIMNK_KGEBDLGBGNM_OFFSET))(this);
	}
};
