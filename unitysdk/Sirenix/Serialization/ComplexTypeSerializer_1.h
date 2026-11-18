#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { class ComplexTypeSerializerCache; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ComplexTypeSerializer_1_TypeDefinitionIndex = 7553;

	template <typename T>
	class ComplexTypeSerializer_1
	{
	public:
		static ::Sirenix::Serialization::ComplexTypeSerializerCache** StaticGet_Cache()
		{
			return (::Sirenix::Serialization::ComplexTypeSerializerCache**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
