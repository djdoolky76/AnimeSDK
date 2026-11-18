#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PNMLMPDELLD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150E2210)
#define PNMLMPDELLD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x150E2100)
#define PNMLMPDELLD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150E1F50)
#define PNMLMPDELLD__CTOR_OFFSET UNITYSDK_OFFSET(0x150E2200)

inline static constexpr unsigned int PNMLMPDELLD_TypeDefinitionIndex = 56178;

class PNMLMPDELLD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::FGCOIBFFCHB* ELBOLGJMGEF; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28
	::FGCOIBFFCHB* MLDHFJKCBBD; // 0x30
	::FGCOIBFFCHB* EPMNNELBGFG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLMPDELLD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNMLMPDELLD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLMPDELLD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNMLMPDELLD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
