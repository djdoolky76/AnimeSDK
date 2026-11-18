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

#define JEFHEFOMOMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CAD610)
#define JEFHEFOMOMO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CAD580)
#define JEFHEFOMOMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CAD200)
#define JEFHEFOMOMO_PDNHOCOALEP_OFFSET UNITYSDK_OFFSET(0x13CAD390)
#define JEFHEFOMOMO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAD600)

inline static constexpr unsigned int JEFHEFOMOMO_TypeDefinitionIndex = 70199;

class JEFHEFOMOMO : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* FIPGAEMIPIJ; // 0x18
	::UnityEngine::RectTransform* CIPIDBOOIIL; // 0x20
	::LGINJIKKBJA* DNGFGABBHEG; // 0x28
	::UnityEngine::RectTransform* PHGPKDJBHJF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFHEFOMOMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEFHEFOMOMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEFHEFOMOMO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PDNHOCOALEP(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEFHEFOMOMO_PDNHOCOALEP_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFHEFOMOMO_KGEBDLGBGNM_OFFSET))(this);
	}
};
