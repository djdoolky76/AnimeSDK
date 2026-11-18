#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define AOKMIBLILAA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF77AEA0)
#define AOKMIBLILAA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF77AE10)
#define AOKMIBLILAA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF77AC60)
#define AOKMIBLILAA__CTOR_OFFSET UNITYSDK_OFFSET(0xF77AE90)

inline static constexpr unsigned int AOKMIBLILAA_TypeDefinitionIndex = 74108;

class AOKMIBLILAA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FBLDNPFLAED; // 0x18
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x20
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x28
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKMIBLILAA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AOKMIBLILAA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AOKMIBLILAA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKMIBLILAA_KGEBDLGBGNM_OFFSET))(this);
	}
};
