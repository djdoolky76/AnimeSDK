#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define ILBGKBGIEEH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1870E9F0)
#define ILBGKBGIEEH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEBE8BB0)
#define ILBGKBGIEEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1870E9E0)

inline static constexpr unsigned int ILBGKBGIEEH_TypeDefinitionIndex = 48186;

class ILBGKBGIEEH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* FBMMJECPBFK; // 0x18
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x20
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x38
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x40
	::UnityEngine::Animation* PGJLPOAHMMK; // 0x48
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x50
	::UnityEngine::Animation* BILPEKOHGON; // 0x58
	::UnityEngine::Animation* MPCHAMOFLPN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBGKBGIEEH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILBGKBGIEEH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILBGKBGIEEH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
