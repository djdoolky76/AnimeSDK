#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class INCBBJCEHND;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEJGCLGPJLK_KBPONKNCKFB_OFFSET UNITYSDK_OFFSET(0x18A0D470)
#define JEJGCLGPJLK_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x18A0CAA0)
#define JEJGCLGPJLK_MILJIFLEKIF_OFFSET UNITYSDK_OFFSET(0x18A0CC30)
#define JEJGCLGPJLK__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0CA90)

inline static constexpr unsigned int JEJGCLGPJLK_TypeDefinitionIndex = 82500;

class JEJGCLGPJLK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::INCBBJCEHND*>*>* FCOMFKGCHCL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJGCLGPJLK__CTOR_OFFSET))(this);
	}

	static ::JEJGCLGPJLK* KCKBIOBGKBH()
	{
		return ((::JEJGCLGPJLK*(*)())((::PBYTE)hIl2Cpp + JEJGCLGPJLK_KCKBIOBGKBH_OFFSET))();
	}

	static ::System::Void MILJIFLEKIF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEJGCLGPJLK_MILJIFLEKIF_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::INCBBJCEHND*>* KBPONKNCKFB(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Collections::Generic::List_1<::INCBBJCEHND*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + JEJGCLGPJLK_KBPONKNCKFB_OFFSET))(KMMGKJPAOMF);
	}
};
