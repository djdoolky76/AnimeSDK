#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define NAANGCCBGCE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13B4BE90)
#define NAANGCCBGCE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13B4BE00)
#define NAANGCCBGCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13B4BC60)
#define NAANGCCBGCE__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4BE80)

inline static constexpr unsigned int NAANGCCBGCE_TypeDefinitionIndex = 57710;

class NAANGCCBGCE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAANGCCBGCE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAANGCCBGCE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAANGCCBGCE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAANGCCBGCE_KGEBDLGBGNM_OFFSET))(this);
	}
};
