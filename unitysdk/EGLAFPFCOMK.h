#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define EGLAFPFCOMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11A713E0)
#define EGLAFPFCOMK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11A712A0)
#define EGLAFPFCOMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11A71070)
#define EGLAFPFCOMK__CTOR_OFFSET UNITYSDK_OFFSET(0x11A713D0)

inline static constexpr unsigned int EGLAFPFCOMK_TypeDefinitionIndex = 45484;

class EGLAFPFCOMK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::RectTransform* AKFINCPKPPN; // 0x20
	::UnityEngine::RectTransform* BAOBIBPKOEK; // 0x28
	::FGCOIBFFCHB* FBMMJECPBFK; // 0x30
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x38
	::FGCOIBFFCHB* MPCHAMOFLPN; // 0x40
	::FGCOIBFFCHB* PGJLPOAHMMK; // 0x48
	::UnityEngine::RectTransform* EDIOHHAMBDM; // 0x50
	::FGCOIBFFCHB* BILPEKOHGON; // 0x58
	::UnityEngine::RectTransform* BFKJOEJAOLJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAFPFCOMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGLAFPFCOMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGLAFPFCOMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAFPFCOMK_KGEBDLGBGNM_OFFSET))(this);
	}
};
