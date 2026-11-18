#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JNBJKOKCBOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1309BEE0)
#define JNBJKOKCBOF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1309BDE0)
#define JNBJKOKCBOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1309BC10)
#define JNBJKOKCBOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1309BED0)

inline static constexpr unsigned int JNBJKOKCBOF_TypeDefinitionIndex = 43967;

class JNBJKOKCBOF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x28
	::FGCOIBFFCHB* ANEEEIBEEPJ; // 0x30
	::FGCOIBFFCHB* EJOAGGKKFGC; // 0x38
	::FGCOIBFFCHB* GFIPBLEEAIP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBJKOKCBOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNBJKOKCBOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNBJKOKCBOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBJKOKCBOF_KGEBDLGBGNM_OFFSET))(this);
	}
};
