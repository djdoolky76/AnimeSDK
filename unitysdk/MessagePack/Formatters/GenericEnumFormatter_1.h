#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GenericEnumFormatter_1_TypeDefinitionIndex = 29858;

	template <typename T>
	class GenericEnumFormatter_1 : public ::System::Object
	{
	public:
		::System::Object* serializer; // 0x0
		::System::Object* deserializer; // 0x0
	};
}
