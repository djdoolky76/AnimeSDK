#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DoubleLookupDictionaryFormatter_3_TypeDefinitionIndex = 7466;

	template <typename T1, typename T2, typename T3>
	class DoubleLookupDictionaryFormatter_3
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T1>** StaticGet_PrimaryReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(DoubleLookupDictionaryFormatter_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<T2, T3>*>** StaticGet_InnerReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<T2, T3>*>**)Il2CppClass::FromTypeDefinitionIndex(DoubleLookupDictionaryFormatter_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
