#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define ENNEMCBCGEI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F49560)
#define ENNEMCBCGEI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F49420)
#define ENNEMCBCGEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F491F0)
#define ENNEMCBCGEI__CTOR_OFFSET UNITYSDK_OFFSET(0x10F49550)

inline static constexpr unsigned int ENNEMCBCGEI_TypeDefinitionIndex = 91530;

class ENNEMCBCGEI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x18
	::FGCOIBFFCHB* FBMMJECPBFK; // 0x20
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30
	::FGCOIBFFCHB* MPCHAMOFLPN; // 0x38
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x40
	::FGCOIBFFCHB* PGJLPOAHMMK; // 0x48
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x50
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x58
	::FGCOIBFFCHB* BILPEKOHGON; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNEMCBCGEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENNEMCBCGEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNEMCBCGEI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENNEMCBCGEI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
