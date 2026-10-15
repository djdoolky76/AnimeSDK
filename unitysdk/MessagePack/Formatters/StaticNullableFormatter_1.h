#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int StaticNullableFormatter_1_TypeDefinitionIndex = 7443;

	template <typename T>
	class StaticNullableFormatter_1 : public ::System::Object
	{
	public:
		::MessagePack::Formatters::IMessagePackFormatter* underlyingFormatter; // 0x0
	};
}
