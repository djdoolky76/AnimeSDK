#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoLayoutElementProcessor;
namespace MoleMole { class GradientColor; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DLBLBDODGLM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x7FC2520)
#define DLBLBDODGLM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x7FC23A0)
#define DLBLBDODGLM__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC2510)

inline static constexpr unsigned int DLBLBDODGLM_TypeDefinitionIndex = 88773;

class DLBLBDODGLM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GDNOBCHIIKD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PMCNDKMMFDG; // 0x20
	::MonoLayoutElementProcessor* EDKJGKFONAF; // 0x28
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MBNJLLBDIHA; // 0x38
	::MoleMole::GradientColor* NIGLLCKMNHC; // 0x40
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBLBDODGLM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLBLBDODGLM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLBLBDODGLM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
