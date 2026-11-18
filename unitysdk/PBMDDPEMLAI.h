#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PBMDDPEMLAI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x20035E60)
#define PBMDDPEMLAI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x20035D70)
#define PBMDDPEMLAI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x20035BB0)
#define PBMDDPEMLAI__CTOR_OFFSET UNITYSDK_OFFSET(0x20035E50)

inline static constexpr unsigned int PBMDDPEMLAI_TypeDefinitionIndex = 96415;

class PBMDDPEMLAI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::FGCOIBFFCHB* JJEEOEKCKND; // 0x30
	::UnityEngine::GameObject* EBGGJKEIFIO; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMDDPEMLAI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBMDDPEMLAI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBMDDPEMLAI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMDDPEMLAI_KGEBDLGBGNM_OFFSET))(this);
	}
};
