#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AHNEJDCMNOA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14213540)
#define AHNEJDCMNOA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x142134F0)
#define AHNEJDCMNOA_NFOMLBJMBFO_OFFSET UNITYSDK_OFFSET(0x14213310)
#define AHNEJDCMNOA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x142130F0)
#define AHNEJDCMNOA__CTOR_OFFSET UNITYSDK_OFFSET(0x14213530)

inline static constexpr unsigned int AHNEJDCMNOA_TypeDefinitionIndex = 78999;

class AHNEJDCMNOA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LMDCLJAIFIL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* OHEPBKFOLHC; // 0x20
	::UnityEngine::RectTransform* EBGGJKEIFIO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ALCGIJJFKPO; // 0x30
	::GCIMMDDIFBJ* MCOPAFKDHDG; // 0x38
	::UnityEngine::RectTransform* HEFCBBOHOPE; // 0x40
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* KBHFBCJEHEN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNEJDCMNOA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHNEJDCMNOA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* NFOMLBJMBFO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHNEJDCMNOA_NFOMLBJMBFO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNEJDCMNOA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHNEJDCMNOA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
