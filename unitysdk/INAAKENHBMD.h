#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define INAAKENHBMD_DGHJGLOCCAE_OFFSET UNITYSDK_OFFSET(0x153C2900)
#define INAAKENHBMD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x153C2B40)
#define INAAKENHBMD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x153C2AB0)
#define INAAKENHBMD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x153C2710)
#define INAAKENHBMD__CTOR_OFFSET UNITYSDK_OFFSET(0x153C2B30)

inline static constexpr unsigned int INAAKENHBMD_TypeDefinitionIndex = 82404;

class INAAKENHBMD : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* BNKEEHDFLAG; // 0x18
	::UnityEngine::RectTransform* FBLDNPFLAED; // 0x20
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x28
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x30
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x38
	::UnityEngine::RectTransform* HCGKJPIINDA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INAAKENHBMD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INAAKENHBMD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INAAKENHBMD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* DGHJGLOCCAE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INAAKENHBMD_DGHJGLOCCAE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INAAKENHBMD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
