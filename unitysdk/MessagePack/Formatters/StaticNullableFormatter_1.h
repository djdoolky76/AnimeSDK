#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Formatters { class IMessagePackFormatter; }

namespace MessagePack::Formatters
{
	template <typename T>
	class StaticNullableFormatter_1 : public ::System::Object
	{
	public:
		::MessagePack::Formatters::IMessagePackFormatter* underlyingFormatter; // 0x0
	};
}
