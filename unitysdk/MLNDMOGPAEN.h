#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MLNDMOGPAEN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x177CB390)
#define MLNDMOGPAEN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x177CB250)
#define MLNDMOGPAEN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177CB020)
#define MLNDMOGPAEN__CTOR_OFFSET UNITYSDK_OFFSET(0x177CB380)

inline static constexpr unsigned int MLNDMOGPAEN_TypeDefinitionIndex = 86942;

class MLNDMOGPAEN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x20
	::FGCOIBFFCHB* PGJLPOAHMMK; // 0x28
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x30
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x38
	::FGCOIBFFCHB* BILPEKOHGON; // 0x40
	::FGCOIBFFCHB* FBMMJECPBFK; // 0x48
	::FGCOIBFFCHB* MPCHAMOFLPN; // 0x50
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x58
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNDMOGPAEN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLNDMOGPAEN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLNDMOGPAEN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNDMOGPAEN_KGEBDLGBGNM_OFFSET))(this);
	}
};
