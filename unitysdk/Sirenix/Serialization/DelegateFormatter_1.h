#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DelegateFormatter_1_TypeDefinitionIndex = 7462;

	template <typename T>
	class DelegateFormatter_1
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ObjectSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_StringSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_TypeSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Type*>*>** StaticGet_TypeArraySerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Type*>*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Delegate*>*>** StaticGet_DelegateArraySerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::Delegate*>*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
