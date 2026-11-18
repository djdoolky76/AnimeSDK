#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FFEFLCFHKFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156B84C0)
#define FFEFLCFHKFA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156B83C0)
#define FFEFLCFHKFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156B81F0)
#define FFEFLCFHKFA__CTOR_OFFSET UNITYSDK_OFFSET(0x156B84B0)

inline static constexpr unsigned int FFEFLCFHKFA_TypeDefinitionIndex = 63008;

class FFEFLCFHKFA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PPGOGGMDMGF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::FGCOIBFFCHB* HLJMMLMNFDG; // 0x28
	::UnityEngine::RectTransform* OOIPEDAEENP; // 0x30
	::FGCOIBFFCHB* PADJNMBLMMJ; // 0x38
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEFLCFHKFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFEFLCFHKFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEFLCFHKFA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFEFLCFHKFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
