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

#define KADOBMPOGPE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A491E60)
#define KADOBMPOGPE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A491DD0)
#define KADOBMPOGPE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A491A50)
#define KADOBMPOGPE_PDNHOCOALEP_OFFSET UNITYSDK_OFFSET(0x1A491BE0)
#define KADOBMPOGPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A491E50)

inline static constexpr unsigned int KADOBMPOGPE_TypeDefinitionIndex = 85462;

class KADOBMPOGPE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PHGPKDJBHJF; // 0x18
	::UnityEngine::RectTransform* CIPIDBOOIIL; // 0x20
	::LGINJIKKBJA* DNGFGABBHEG; // 0x28
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* FIPGAEMIPIJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADOBMPOGPE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KADOBMPOGPE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KADOBMPOGPE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADOBMPOGPE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PDNHOCOALEP(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KADOBMPOGPE_PDNHOCOALEP_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
