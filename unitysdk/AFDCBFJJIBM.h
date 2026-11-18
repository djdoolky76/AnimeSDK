#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AFDCBFJJIBM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1420FBF0)
#define AFDCBFJJIBM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1420FAE0)
#define AFDCBFJJIBM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1420F930)
#define AFDCBFJJIBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1420FBE0)

inline static constexpr unsigned int AFDCBFJJIBM_TypeDefinitionIndex = 90071;

class AFDCBFJJIBM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LCPPALPACCD; // 0x18
	::FGCOIBFFCHB* HKLINGLNGAL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDCBFJJIBM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFDCBFJJIBM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDCBFJJIBM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFDCBFJJIBM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
