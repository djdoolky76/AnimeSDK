#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5F20)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5A5A00)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A59E0)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D5A5A50)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1D5A5CB0)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x1D5A5D60)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D5A5A20)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1D5A5E10)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D5A5AE0)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETNONRANDOMIZEDHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D5A5C00)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1D5A59B0)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D5A5ED0)

namespace Collections::Pooled
{
	inline static constexpr unsigned int NonRandomizedStringEqualityComparer_TypeDefinitionIndex = 5103;

	class NonRandomizedStringEqualityComparer
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::String*>** StaticGet__Default_k__BackingField()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::String*>**)UnitySDK::FromName("Collections.Pooled", "NonRandomizedStringEqualityComparer")->GetStaticField(0x230);
		}

		static ::System::Int32* StaticGet_s_empyStringHashCode()
		{
			return (::System::Int32*)UnitySDK::FromName("Collections.Pooled", "NonRandomizedStringEqualityComparer")->GetStaticField(0x1A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::System::String*>* get_Default()
		{
			return ((::System::Collections::Generic::IEqualityComparer_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean Equals(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_1(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::String* a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_3(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::String*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode_1(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_1_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 GetNonRandomizedHashCode(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETNONRANDOMIZEDHASHCODE_OFFSET))(a1);
		}

	};
}
