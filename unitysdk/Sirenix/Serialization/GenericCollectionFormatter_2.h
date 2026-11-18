#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int GenericCollectionFormatter_2_TypeDefinitionIndex = 7474;

	template <typename T1, typename T2>
	class GenericCollectionFormatter_2
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T1>** StaticGet_valueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(GenericCollectionFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
