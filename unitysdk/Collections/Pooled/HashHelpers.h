#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define COLLECTIONS_POOLED_HASHHELPERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C41F0E0)
#define COLLECTIONS_POOLED_HASHHELPERS_EXPANDPRIME_OFFSET UNITYSDK_OFFSET(0x1C41F0C0)
#define COLLECTIONS_POOLED_HASHHELPERS_GETPRIME_OFFSET UNITYSDK_OFFSET(0x1C41EF90)
#define COLLECTIONS_POOLED_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET UNITYSDK_OFFSET(0x1C41EE50)
#define COLLECTIONS_POOLED_HASHHELPERS_ISPRIME_OFFSET UNITYSDK_OFFSET(0x1C41EF10)

namespace Collections::Pooled
{
	class HashHelpers : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>** StaticGet_s_serializationInfoTable()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>**)UnitySDK::FromName("Collections.Pooled", "HashHelpers")->GetStaticField(0x220);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_Primes()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("Collections.Pooled", "HashHelpers")->GetStaticField(0x228);
		}

		// static const ::System::Object HashCollisionThreshold; // 0x0
		// static const ::System::Object MaxPrimeArrayLength; // 0x0
		// static const ::System::Object HashPrime; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_CCTOR_OFFSET))();
		}

		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable()
		{
			return ((::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET))();
		}

		static ::System::Boolean IsPrime(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_ISPRIME_OFFSET))(a1);
		}

		static ::System::Int32 GetPrime(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_GETPRIME_OFFSET))(a1);
		}

		static ::System::Int32 ExpandPrime(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_EXPANDPRIME_OFFSET))(a1);
		}

	};
}
