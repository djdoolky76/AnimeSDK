#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PCBALJKKAFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F9D0A0)
#define PCBALJKKAFF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F9D010)
#define PCBALJKKAFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F9CE70)
#define PCBALJKKAFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9D090)

inline static constexpr unsigned int PCBALJKKAFF_TypeDefinitionIndex = 41345;

class PCBALJKKAFF : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KMDMEPAPJAK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x28
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x30
	::UnityEngine::RectTransform* AMEEMEPHGEL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBALJKKAFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCBALJKKAFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBALJKKAFF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCBALJKKAFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
