#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ELKIHNKPBPK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17129690)
#define ELKIHNKPBPK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17129600)
#define ELKIHNKPBPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17129480)
#define ELKIHNKPBPK__CTOR_OFFSET UNITYSDK_OFFSET(0x17129680)

inline static constexpr unsigned int ELKIHNKPBPK_TypeDefinitionIndex = 68340;

class ELKIHNKPBPK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MBDMAMEEAOO; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKIHNKPBPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELKIHNKPBPK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELKIHNKPBPK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKIHNKPBPK_KGEBDLGBGNM_OFFSET))(this);
	}
};
