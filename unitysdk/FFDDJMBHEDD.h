#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define FFDDJMBHEDD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AC4970)
#define FFDDJMBHEDD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14AC48F0)
#define FFDDJMBHEDD_NMOGHEPGFIE_OFFSET UNITYSDK_OFFSET(0x14AC4700)
#define FFDDJMBHEDD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AC4520)
#define FFDDJMBHEDD__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC4960)

inline static constexpr unsigned int FFDDJMBHEDD_TypeDefinitionIndex = 77892;

class FFDDJMBHEDD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x30
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* KLBNHFICAGP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDDJMBHEDD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFDDJMBHEDD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* NMOGHEPGFIE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFDDJMBHEDD_NMOGHEPGFIE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDDJMBHEDD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFDDJMBHEDD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
