#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HDNJCHPLLMF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x146F2320)
#define HDNJCHPLLMF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x146F2290)
#define HDNJCHPLLMF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x146F20F0)
#define HDNJCHPLLMF__CTOR_OFFSET UNITYSDK_OFFSET(0x146F2310)

inline static constexpr unsigned int HDNJCHPLLMF_TypeDefinitionIndex = 46083;

class HDNJCHPLLMF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BLNCGEBJDBA; // 0x18
	::UnityEngine::UI::Extension::UIImgText* HJMOFMLMAOE; // 0x20
	::UnityEngine::RectTransform* OCPFFNKLFKP; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNJCHPLLMF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDNJCHPLLMF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNJCHPLLMF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDNJCHPLLMF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
