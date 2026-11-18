#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int SerializationFormat_TypeDefinitionIndex = 1889;

	enum class SerializationFormat : ::System::Int32
	{
		Encoded = 0,
		Literal = 1,
	};
}
