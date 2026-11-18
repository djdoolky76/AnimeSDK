#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IFFLMFMNAKC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1013AF20)
#define IFFLMFMNAKC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1013AE20)
#define IFFLMFMNAKC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1013AC60)
#define IFFLMFMNAKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1013AF10)

inline static constexpr unsigned int IFFLMFMNAKC_TypeDefinitionIndex = 92672;

class IFFLMFMNAKC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MFKGPFPJPML; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x28
	::FGCOIBFFCHB* LBIEEFNEEKH; // 0x30
	::FGCOIBFFCHB* NOIOMPDGEEI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFLMFMNAKC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFFLMFMNAKC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFLMFMNAKC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFFLMFMNAKC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
