#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Text { class StringBuilder; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FourDimensionalArrayFormatter_1_TypeDefinitionIndex = 7489;

	template <typename T>
	class FourDimensionalArrayFormatter_1
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<T>** StaticGet_ValueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(FourDimensionalArrayFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Text::StringBuilder** StaticGet_StrBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(FourDimensionalArrayFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::String* RANKS_NAME; // 0x0
		// static const ::System::Char RANKS_SEPARATOR = 0x7C; // 0x0
	};
}
