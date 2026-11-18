#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define GJPNKBIOPGC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13DDDB40)
#define GJPNKBIOPGC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13DDD9D0)
#define GJPNKBIOPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x13DDDB30)

inline static constexpr unsigned int GJPNKBIOPGC_TypeDefinitionIndex = 49377;

class GJPNKBIOPGC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BLMODGKEGLN; // 0x18
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x20
	::UnityEngine::RectTransform* EEFGMICBCKA; // 0x28
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x30
	::UnityEngine::RectTransform* OBEMLOACGAF; // 0x38
	::GCIMMDDIFBJ* PNCNPGAACAA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPNKBIOPGC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GJPNKBIOPGC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GJPNKBIOPGC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
