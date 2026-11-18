#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JPFEDDMHLID_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x155D3080)
#define JPFEDDMHLID_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x155D2FF0)
#define JPFEDDMHLID_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155D2E80)
#define JPFEDDMHLID__CTOR_OFFSET UNITYSDK_OFFSET(0x155D3070)

inline static constexpr unsigned int JPFEDDMHLID_TypeDefinitionIndex = 56878;

class JPFEDDMHLID : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFEDDMHLID__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPFEDDMHLID_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPFEDDMHLID_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFEDDMHLID_KGEBDLGBGNM_OFFSET))(this);
	}
};
