#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int MultiDimensionalArrayFormatter_2_TypeDefinitionIndex = 7483;

	template <typename T1, typename T2>
	class MultiDimensionalArrayFormatter_2
	{
	public:
		static ::System::Int32* StaticGet_ArrayRank()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MultiDimensionalArrayFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<T1>** StaticGet_ValueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(MultiDimensionalArrayFormatter_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::String* RANKS_NAME; // 0x0
		// static const ::System::Char RANKS_SEPARATOR = 0x7C; // 0x0
	};
}
