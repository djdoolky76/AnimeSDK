#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryFormatter_2_TypeDefinitionIndex = 7465;

	template <typename T1, typename T2>
	class DictionaryFormatter_2
	{
	public:
		static ::System::Boolean* StaticGet_KeyIsValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DictionaryFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::IEqualityComparer_1<T1>*>** StaticGet_EqualityComparerSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::IEqualityComparer_1<T1>*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<T1>** StaticGet_KeyReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<T2>** StaticGet_ValueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<T2>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
