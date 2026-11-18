#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ALIMBDPNJNH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D06A10)
#define ALIMBDPNJNH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D06960)
#define ALIMBDPNJNH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D06770)
#define ALIMBDPNJNH__CTOR_OFFSET UNITYSDK_OFFSET(0x12D06A00)

inline static constexpr unsigned int ALIMBDPNJNH_TypeDefinitionIndex = 56718;

class ALIMBDPNJNH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MLIDMGIDIPE; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* BGOBBCNMNGL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KGKKHNIIJMO; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38
	::UnityEngine::RectTransform* FCMBPIOCJFK; // 0x40
	::FGCOIBFFCHB* OCJOCLEDABL; // 0x48
	::UnityEngine::RectTransform* PCIPIAGNBPC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMBDPNJNH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALIMBDPNJNH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALIMBDPNJNH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMBDPNJNH_KGEBDLGBGNM_OFFSET))(this);
	}
};
