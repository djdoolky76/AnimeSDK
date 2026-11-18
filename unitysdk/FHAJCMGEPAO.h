#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FHAJCMGEPAO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1FDF5040)
#define FHAJCMGEPAO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1FDF4F70)
#define FHAJCMGEPAO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FDF4DF0)
#define FHAJCMGEPAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF5030)

inline static constexpr unsigned int FHAJCMGEPAO_TypeDefinitionIndex = 96400;

class FHAJCMGEPAO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* OAKAIIJLMIL; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Text* LOIEHBLKDPE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAJCMGEPAO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHAJCMGEPAO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHAJCMGEPAO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAJCMGEPAO_KGEBDLGBGNM_OFFSET))(this);
	}
};
