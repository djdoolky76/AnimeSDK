#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int StackFormatter_2_TypeDefinitionIndex = 7499;

	template <typename T1, typename T2>
	class StackFormatter_2
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T1>** StaticGet_TSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(StackFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_List_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(StackFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<T1>** StaticGet_List()
		{
			return (::System::Collections::Generic::List_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(StackFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsPlainStack()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StackFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
