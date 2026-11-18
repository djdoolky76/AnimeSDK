#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define NHMJDOCPBDA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11590C00)
#define NHMJDOCPBDA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11590B70)
#define NHMJDOCPBDA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x115909F0)
#define NHMJDOCPBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x11590BF0)

inline static constexpr unsigned int NHMJDOCPBDA_TypeDefinitionIndex = 50457;

class NHMJDOCPBDA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x18
	::UnityEngine::GameObject* IPEMALHHKKI; // 0x20
	::UnityEngine::GameObject* BCMBLHMKGMA; // 0x28
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMJDOCPBDA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHMJDOCPBDA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMJDOCPBDA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHMJDOCPBDA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
