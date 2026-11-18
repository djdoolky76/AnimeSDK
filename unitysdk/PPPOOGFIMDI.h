#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define PPPOOGFIMDI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A808980)
#define PPPOOGFIMDI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A8088F0)
#define PPPOOGFIMDI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A808720)
#define PPPOOGFIMDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A808970)

inline static constexpr unsigned int PPPOOGFIMDI_TypeDefinitionIndex = 92117;

class PPPOOGFIMDI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18
	::UnityEngine::GameObject* GJJKEOLNAJG; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x30
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPOOGFIMDI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPPOOGFIMDI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPPOOGFIMDI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPOOGFIMDI_KGEBDLGBGNM_OFFSET))(this);
	}
};
