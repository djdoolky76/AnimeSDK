#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDLIDKMMNOA.h"
#include "unitysdk/System/Object.h"
class BLPBNHJNGID;
class DAEAOGMOHHA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKLKJCJFHKO_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBA5CCE0)
#define BKLKJCJFHKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA5CE30)
#define BKLKJCJFHKO_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xBA5CCC0)
#define BKLKJCJFHKO_PGNEBFCPLHF_OFFSET UNITYSDK_OFFSET(0xBA5CEB0)
#define BKLKJCJFHKO_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xBA5CCD0)

	class BKLKJCJFHKO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::KDLIDKMMNOA, ::BLPBNHJNGID*>* JJJOBMKIGJE; // 0x10
		::DAEAOGMOHHA* _Factory_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKJCJFHKO_CTOR_OFFSET))(this);
		}

		::DAEAOGMOHHA* get_Factory()
		{
			return ((::DAEAOGMOHHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKJCJFHKO_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::DAEAOGMOHHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAEAOGMOHHA*))((::PBYTE)hIl2Cpp + BKLKJCJFHKO_SET_FACTORY_OFFSET))(this, a1);
		}

		::BLPBNHJNGID* ACMKLFOMPFC(::KDLIDKMMNOA a1)
		{
			return ((::BLPBNHJNGID*(*)(::PVOID, ::KDLIDKMMNOA))((::PBYTE)hIl2Cpp + BKLKJCJFHKO_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::BLPBNHJNGID* PGNEBFCPLHF(::KDLIDKMMNOA a1)
		{
			return ((::BLPBNHJNGID*(*)(::PVOID, ::KDLIDKMMNOA))((::PBYTE)hIl2Cpp + BKLKJCJFHKO_PGNEBFCPLHF_OFFSET))(this, a1);
		}

	};
