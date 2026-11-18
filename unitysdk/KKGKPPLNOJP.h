#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KKGKPPLNOJP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1F5B8BA0)
#define KKGKPPLNOJP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1F5B8AD0)
#define KKGKPPLNOJP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F5B8960)
#define KKGKPPLNOJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5B8B90)

inline static constexpr unsigned int KKGKPPLNOJP_TypeDefinitionIndex = 95104;

class KKGKPPLNOJP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GPPIHMIBFIB; // 0x18
	::FGCOIBFFCHB* ICJNBCIIBHC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KHBNCNAKEBM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGKPPLNOJP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKGKPPLNOJP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKGKPPLNOJP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGKPPLNOJP_KGEBDLGBGNM_OFFSET))(this);
	}
};
