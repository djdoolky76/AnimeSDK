#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define KAJEJDILNDA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x155D7160)
#define KAJEJDILNDA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x155D70D0)
#define KAJEJDILNDA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155D6E80)
#define KAJEJDILNDA__CTOR_OFFSET UNITYSDK_OFFSET(0x155D7150)

inline static constexpr unsigned int KAJEJDILNDA_TypeDefinitionIndex = 90021;

class KAJEJDILNDA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::UnityEngine::GameObject* PFPCFEKFNLI; // 0x28
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x30
	::GCIMMDDIFBJ* LPAJKGEMCNJ; // 0x38
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x40
	::GCIMMDDIFBJ* GHGJBEPJDKI; // 0x48
	::UnityEngine::GameObject* LMFBAKKFOMB; // 0x50
	::UnityEngine::GameObject* ELOICMCOJGL; // 0x58
	::UnityEngine::GameObject* GMKGLALMLHA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJEJDILNDA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KAJEJDILNDA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJEJDILNDA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KAJEJDILNDA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
