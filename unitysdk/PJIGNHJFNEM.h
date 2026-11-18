#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define PJIGNHJFNEM_DGHJGLOCCAE_OFFSET UNITYSDK_OFFSET(0x1C2B1D10)
#define PJIGNHJFNEM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C2B1F50)
#define PJIGNHJFNEM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C2B1EC0)
#define PJIGNHJFNEM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C2B1B20)
#define PJIGNHJFNEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B1F40)

inline static constexpr unsigned int PJIGNHJFNEM_TypeDefinitionIndex = 74563;

class PJIGNHJFNEM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x18
	::UnityEngine::RectTransform* HCGKJPIINDA; // 0x20
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x28
	::UnityEngine::RectTransform* FBLDNPFLAED; // 0x30
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x38
	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* BNKEEHDFLAG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIGNHJFNEM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJIGNHJFNEM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJIGNHJFNEM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>* DGHJGLOCCAE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::GCIMMDDIFBJ*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJIGNHJFNEM_DGHJGLOCCAE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIGNHJFNEM_KGEBDLGBGNM_OFFSET))(this);
	}
};
