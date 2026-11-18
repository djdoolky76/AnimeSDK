#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define IHAEICODHFO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x165757C0)
#define IHAEICODHFO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16575680)
#define IHAEICODHFO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16575480)
#define IHAEICODHFO__CTOR_OFFSET UNITYSDK_OFFSET(0x165757B0)

inline static constexpr unsigned int IHAEICODHFO_TypeDefinitionIndex = 66072;

class IHAEICODHFO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MPCHAMOFLPN; // 0x18
	::FGCOIBFFCHB* BILPEKOHGON; // 0x20
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x28
	::FGCOIBFFCHB* FBMMJECPBFK; // 0x30
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x38
	::FGCOIBFFCHB* PGJLPOAHMMK; // 0x40
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x48
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAEICODHFO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHAEICODHFO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAEICODHFO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHAEICODHFO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
