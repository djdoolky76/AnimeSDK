#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define HLNAPCFAFHI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BDECA0)
#define HLNAPCFAFHI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BDEBF0)
#define HLNAPCFAFHI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BDEA00)
#define HLNAPCFAFHI__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDEC90)

inline static constexpr unsigned int HLNAPCFAFHI_TypeDefinitionIndex = 39624;

class HLNAPCFAFHI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* MHCMFCLBDDP; // 0x18
	::FGCOIBFFCHB* AIOLEBPOKMF; // 0x20
	::GCIMMDDIFBJ* KBLBGBILDPH; // 0x28
	::UnityEngine::GameObject* BJODNLJFNBB; // 0x30
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x38
	::FGCOIBFFCHB* CLLOJDONDMF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNAPCFAFHI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLNAPCFAFHI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNAPCFAFHI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLNAPCFAFHI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
