#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ArrayFormatter_1_TypeDefinitionIndex = 7455;

	template <typename T>
	class ArrayFormatter_1
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_valueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ArrayFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
