#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackType_TypeDefinitionIndex = 29581;

	enum class MessagePackType : ::System::Byte
	{
		Binary = 6,
		Float = 4,
		Integer = 1,
		Nil = 2,
		String = 5,
		Boolean = 3,
		Array = 7,
		Map = 8,
		Unknown = 0,
		Extension = 9,
	};
}
