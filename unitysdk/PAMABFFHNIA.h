#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define PAMABFFHNIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A82010)
#define PAMABFFHNIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A81F80)
#define PAMABFFHNIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A81D30)
#define PAMABFFHNIA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A82000)

inline static constexpr unsigned int PAMABFFHNIA_TypeDefinitionIndex = 68447;

class PAMABFFHNIA : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* LPAJKGEMCNJ; // 0x18
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x20
	::GCIMMDDIFBJ* GHGJBEPJDKI; // 0x28
	::UnityEngine::GameObject* PFPCFEKFNLI; // 0x30
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x38
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x40
	::UnityEngine::GameObject* GMKGLALMLHA; // 0x48
	::UnityEngine::GameObject* ELOICMCOJGL; // 0x50
	::UnityEngine::GameObject* LMFBAKKFOMB; // 0x58
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMABFFHNIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAMABFFHNIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAMABFFHNIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMABFFHNIA_KGEBDLGBGNM_OFFSET))(this);
	}
};
