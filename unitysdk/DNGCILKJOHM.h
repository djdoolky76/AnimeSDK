#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define DNGCILKJOHM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E5B260)
#define DNGCILKJOHM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13E5B1D0)
#define DNGCILKJOHM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E5AE50)
#define DNGCILKJOHM_PDNHOCOALEP_OFFSET UNITYSDK_OFFSET(0x13E5AFE0)
#define DNGCILKJOHM__CTOR_OFFSET UNITYSDK_OFFSET(0x13E5B250)

inline static constexpr unsigned int DNGCILKJOHM_TypeDefinitionIndex = 73151;

class DNGCILKJOHM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PHGPKDJBHJF; // 0x18
	::UnityEngine::RectTransform* CIPIDBOOIIL; // 0x20
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* FIPGAEMIPIJ; // 0x28
	::LGINJIKKBJA* DNGFGABBHEG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGCILKJOHM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNGCILKJOHM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGCILKJOHM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PDNHOCOALEP(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNGCILKJOHM_PDNHOCOALEP_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNGCILKJOHM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
