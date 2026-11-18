#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define HOKOAEKKAAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140C8BE0)
#define HOKOAEKKAAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140C8B50)
#define HOKOAEKKAAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140C89A0)
#define HOKOAEKKAAN__CTOR_OFFSET UNITYSDK_OFFSET(0x140C8BD0)

inline static constexpr unsigned int HOKOAEKKAAN_TypeDefinitionIndex = 45831;

class HOKOAEKKAAN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x28
	::UnityEngine::RectTransform* FBLDNPFLAED; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOAEKKAAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOKOAEKKAAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOAEKKAAN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOKOAEKKAAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
