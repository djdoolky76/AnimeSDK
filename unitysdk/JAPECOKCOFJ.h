#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define JAPECOKCOFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194481F0)
#define JAPECOKCOFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19448100)
#define JAPECOKCOFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19447F40)
#define JAPECOKCOFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x194481E0)

inline static constexpr unsigned int JAPECOKCOFJ_TypeDefinitionIndex = 71616;

class JAPECOKCOFJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ALFAFFKFAEG; // 0x28
	::UnityEngine::UI::VerticalLayoutGroup* AJKADOOLMIF; // 0x30
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x38
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPECOKCOFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAPECOKCOFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPECOKCOFJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAPECOKCOFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
