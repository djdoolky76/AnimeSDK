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

#define EDODFKEHKND_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BEC860)
#define EDODFKEHKND_JBONCNMNKBH_OFFSET UNITYSDK_OFFSET(0x12BEC5E0)
#define EDODFKEHKND_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BEC7D0)
#define EDODFKEHKND_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BEC460)
#define EDODFKEHKND__CTOR_OFFSET UNITYSDK_OFFSET(0x12BEC850)

inline static constexpr unsigned int EDODFKEHKND_TypeDefinitionIndex = 64812;

class EDODFKEHKND : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* NIHEOCCKIDG; // 0x20
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDODFKEHKND__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDODFKEHKND_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* JBONCNMNKBH(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDODFKEHKND_JBONCNMNKBH_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDODFKEHKND_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDODFKEHKND_KGEBDLGBGNM_OFFSET))(this);
	}
};
