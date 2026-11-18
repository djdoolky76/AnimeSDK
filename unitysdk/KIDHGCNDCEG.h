#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define KIDHGCNDCEG_DGHJGLOCCAE_OFFSET UNITYSDK_OFFSET(0x13C687E0)
#define KIDHGCNDCEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C68A20)
#define KIDHGCNDCEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C68990)
#define KIDHGCNDCEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C685F0)
#define KIDHGCNDCEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C68A10)

inline static constexpr unsigned int KIDHGCNDCEG_TypeDefinitionIndex = 50679;

class KIDHGCNDCEG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x18
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x20
	::UnityEngine::RectTransform* HCGKJPIINDA; // 0x28
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x30
	::UnityEngine::RectTransform* FBLDNPFLAED; // 0x38
	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* BNKEEHDFLAG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHGCNDCEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KIDHGCNDCEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHGCNDCEG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* DGHJGLOCCAE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KIDHGCNDCEG_DGHJGLOCCAE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KIDHGCNDCEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
