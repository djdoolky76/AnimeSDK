#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define AHAFLCGJMHK_DGHJGLOCCAE_OFFSET UNITYSDK_OFFSET(0x17CCAD90)
#define AHAFLCGJMHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17CCAFD0)
#define AHAFLCGJMHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17CCAF40)
#define AHAFLCGJMHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17CCAB60)
#define AHAFLCGJMHK__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCAFC0)

inline static constexpr unsigned int AHAFLCGJMHK_TypeDefinitionIndex = 81807;

class AHAFLCGJMHK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ELOICMCOJGL; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28
	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* BNKEEHDFLAG; // 0x30
	::UnityEngine::GameObject* LMFBAKKFOMB; // 0x38
	::GCIMMDDIFBJ* LPAJKGEMCNJ; // 0x40
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x48
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAFLCGJMHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHAFLCGJMHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHAFLCGJMHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAFLCGJMHK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* DGHJGLOCCAE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHAFLCGJMHK_DGHJGLOCCAE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
