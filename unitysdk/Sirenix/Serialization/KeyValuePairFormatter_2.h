#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int KeyValuePairFormatter_2_TypeDefinitionIndex = 7478;

	template <typename T1, typename T2>
	class KeyValuePairFormatter_2
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T1>** StaticGet_KeySerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(KeyValuePairFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<T2>** StaticGet_ValueSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<T2>**)Il2CppClass::FromTypeDefinitionIndex(KeyValuePairFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
