#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CBOBFHGDFFM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128C4FF0)
#define CBOBFHGDFFM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x128C4F20)
#define CBOBFHGDFFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128C4CC0)
#define CBOBFHGDFFM__CTOR_OFFSET UNITYSDK_OFFSET(0x128C4FE0)

inline static constexpr unsigned int CBOBFHGDFFM_TypeDefinitionIndex = 69763;

class CBOBFHGDFFM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BHDJHOIDELH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GCAAIJLOPHP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::CanvasGroup* AFDJNDDFBEA; // 0x38
	::UnityEngine::CanvasGroup* HCILPKCELIB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* ANBFCCIHHFD; // 0x48
	::FGCOIBFFCHB* ANPBCLAFCJB; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* JIPFJCCIKFC; // 0x58
	::UnityEngine::CanvasGroup* MCNLAPMPCDM; // 0x60
	::FGCOIBFFCHB* CGNPIGHBMDN; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* OPLGFCCFEDB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOBFHGDFFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBOBFHGDFFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOBFHGDFFM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBOBFHGDFFM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
