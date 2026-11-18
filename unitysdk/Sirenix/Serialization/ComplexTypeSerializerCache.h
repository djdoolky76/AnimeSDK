#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IFormatter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERCACHE_GETBASEFORMATTER_OFFSET UNITYSDK_OFFSET(0x1FF86700)
#define SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERCACHE_WILLTYPEUSESERIALIZABLEFORMATTER_OFFSET UNITYSDK_OFFSET(0x1FF863F0)
#define SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF86BD0)
#define SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF85D00)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ComplexTypeSerializerCache_TypeDefinitionIndex = 7555;

	class ComplexTypeSerializerCache : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_EverythingPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializerCache_TypeDefinitionIndex)->GetStaticField(0x6410);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_UnityPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializerCache_TypeDefinitionIndex)->GetStaticField(0x6418);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_StrictPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializerCache_TypeDefinitionIndex)->GetStaticField(0x6420);
		}
		::System::Object* FormattersByPolicy_LOCK; // 0x10
		::Sirenix::Serialization::IFormatter* UnityPolicyFormatter; // 0x18
		::Sirenix::Serialization::IFormatter* EverythingPolicyFormatter; // 0x20
		::System::Object* DefaultEqualityComparer; // 0x28
		::System::Type* PredictedType; // 0x30
		::System::String* PredictedTypeName; // 0x38
		::System::Type* TypeOf_T; // 0x40
		::Sirenix::Serialization::IFormatter* StrictPolicyFormatter; // 0x48
		::System::Collections::Generic::Dictionary_2<::Sirenix::Serialization::ISerializationPolicy*, ::Sirenix::Serialization::IFormatter*>* FormattersByPolicy; // 0x50
		::System::Boolean ComplexTypeMayBeBoxedValueType; // 0x58
		::System::Boolean ComplexTypeIsValueType; // 0x59
		::System::Boolean ComplexTypeIsAbstract; // 0x5A
		::System::Boolean ComplexTypeIsNullable; // 0x5B
		::System::Boolean ComplexTypeIsIEqualityComparer; // 0x5C
		::System::Boolean AllowDeserializeInvalidDataForT; // 0x5D
		::System::Boolean WillDefaultEqualityComparerUseSerializableFormatter; // 0x5E

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERCACHE__CTOR_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERCACHE__CCTOR_OFFSET))();
		}

		static ::System::Boolean WillTypeUseSerializableFormatter(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERCACHE_WILLTYPEUSESERIALIZABLEFORMATTER_OFFSET))(type);
		}

		::Sirenix::Serialization::IFormatter* GetBaseFormatter(::Sirenix::Serialization::ISerializationPolicy* serializationPolicy)
		{
			return ((::Sirenix::Serialization::IFormatter*(*)(::PVOID, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_COMPLEXTYPESERIALIZERCACHE_GETBASEFORMATTER_OFFSET))(this, serializationPolicy);
		}
	};
}
