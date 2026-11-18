#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int HashSetFormatter_1_TypeDefinitionIndex = 7475;

	template <typename T>
	class HashSetFormatter_1
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_TSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(HashSetFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
