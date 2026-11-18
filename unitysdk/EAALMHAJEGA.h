#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EAALMHAJEGA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BDB550)
#define EAALMHAJEGA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BDB4C0)
#define EAALMHAJEGA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BDB320)
#define EAALMHAJEGA__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDB540)

inline static constexpr unsigned int EAALMHAJEGA_TypeDefinitionIndex = 87838;

class EAALMHAJEGA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* BGOBBCNMNGL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::UnityEngine::RectTransform* PCIPIAGNBPC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MLIDMGIDIPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAALMHAJEGA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAALMHAJEGA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAALMHAJEGA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAALMHAJEGA_KGEBDLGBGNM_OFFSET))(this);
	}
};
