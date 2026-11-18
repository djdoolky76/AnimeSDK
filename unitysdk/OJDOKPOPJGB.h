#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OJDOKPOPJGB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B79FB20)
#define OJDOKPOPJGB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B79FA50)
#define OJDOKPOPJGB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B79F800)
#define OJDOKPOPJGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79FB10)

inline static constexpr unsigned int OJDOKPOPJGB_TypeDefinitionIndex = 92313;

class OJDOKPOPJGB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EGOLNOCJJBL; // 0x18
	::FGCOIBFFCHB* EBMOGOBNMPE; // 0x20
	::UnityEngine::GameObject* HNAJHAOKONK; // 0x28
	::FGCOIBFFCHB* MNJADHENBFO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DBMPEIKCMME; // 0x38
	::UnityEngine::GameObject* BJHLPHLFMEM; // 0x40
	::FGCOIBFFCHB* OBFDBOCIHAP; // 0x48
	::UnityEngine::GameObject* MFOGJLFFGLE; // 0x50
	::GCIMMDDIFBJ* BMDLLECOHDB; // 0x58
	::UnityEngine::GameObject* JPBJAMDLPHA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDOKPOPJGB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJDOKPOPJGB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJDOKPOPJGB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDOKPOPJGB_KGEBDLGBGNM_OFFSET))(this);
	}
};
