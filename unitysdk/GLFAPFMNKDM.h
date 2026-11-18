#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define GLFAPFMNKDM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F279F0)
#define GLFAPFMNKDM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F279A0)
#define GLFAPFMNKDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F27620)
#define GLFAPFMNKDM_PDNHOCOALEP_OFFSET UNITYSDK_OFFSET(0x15F277B0)
#define GLFAPFMNKDM__CTOR_OFFSET UNITYSDK_OFFSET(0x15F279E0)

inline static constexpr unsigned int GLFAPFMNKDM_TypeDefinitionIndex = 56772;

class GLFAPFMNKDM : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* FIPGAEMIPIJ; // 0x18
	::UnityEngine::RectTransform* CIPIDBOOIIL; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28
	::UnityEngine::RectTransform* PHGPKDJBHJF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFAPFMNKDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLFAPFMNKDM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PDNHOCOALEP(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLFAPFMNKDM_PDNHOCOALEP_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLFAPFMNKDM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFAPFMNKDM_KGEBDLGBGNM_OFFSET))(this);
	}
};
