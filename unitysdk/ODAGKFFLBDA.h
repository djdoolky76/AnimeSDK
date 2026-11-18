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

#define ODAGKFFLBDA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F5B8E0)
#define ODAGKFFLBDA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F5B850)
#define ODAGKFFLBDA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F5B4D0)
#define ODAGKFFLBDA_PDNHOCOALEP_OFFSET UNITYSDK_OFFSET(0x15F5B660)
#define ODAGKFFLBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5B8D0)

inline static constexpr unsigned int ODAGKFFLBDA_TypeDefinitionIndex = 81862;

class ODAGKFFLBDA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DNGFGABBHEG; // 0x18
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* FIPGAEMIPIJ; // 0x20
	::UnityEngine::RectTransform* PHGPKDJBHJF; // 0x28
	::UnityEngine::RectTransform* CIPIDBOOIIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAGKFFLBDA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODAGKFFLBDA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PDNHOCOALEP(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODAGKFFLBDA_PDNHOCOALEP_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODAGKFFLBDA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAGKFFLBDA_KGEBDLGBGNM_OFFSET))(this);
	}
};
