#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHPJHIMKMPF;
class ICKCNNLHLNF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MKOGNAEBDHO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB9A1330)
#define MKOGNAEBDHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A1680)
#define MKOGNAEBDHO_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB9A1C80)

	class MKOGNAEBDHO : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::ICKCNNLHLNF*>* PGBBLHBBDPM; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + MKOGNAEBDHO_CTOR_OFFSET))(this, a1);
		}

		static ::GHPJHIMKMPF* BPLPBPMEODA(::System::Collections::Generic::IList_1<::System::String*>* a1)
		{
			return ((::GHPJHIMKMPF*(*)(::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + MKOGNAEBDHO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean JJNFOPNOPBF(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKOGNAEBDHO_JJNFOPNOPBF_OFFSET))(this, a1);
		}

	};
