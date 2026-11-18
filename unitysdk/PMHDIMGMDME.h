#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PMHDIMGMDME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B9F6110)
#define PMHDIMGMDME_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B9F6080)
#define PMHDIMGMDME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B9F5EB0)
#define PMHDIMGMDME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F6100)

inline static constexpr unsigned int PMHDIMGMDME_TypeDefinitionIndex = 72463;

class PMHDIMGMDME : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JHEJMIAHBON; // 0x18
	::GCIMMDDIFBJ* KMPIDMGPFIH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x28
	::UnityEngine::RectTransform* PPGOGGMDMGF; // 0x30
	::UnityEngine::RectTransform* HLJMMLMNFDG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHDIMGMDME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMHDIMGMDME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHDIMGMDME_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMHDIMGMDME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
