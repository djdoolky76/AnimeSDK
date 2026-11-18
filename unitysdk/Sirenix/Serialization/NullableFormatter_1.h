#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int NullableFormatter_1_TypeDefinitionIndex = 7490;

	template <typename T>
	class NullableFormatter_1
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_TSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(NullableFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
