#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int ElementProperties_TypeDefinitionIndex = 1822;

	enum class ElementProperties : ::System::UInt32
	{
		DEFAULT = 0,
		URI_PARENT = 1,
		BOOL_PARENT = 2,
		NAME_PARENT = 4,
		EMPTY = 8,
		NO_ENTITIES = 16,
		HEAD = 32,
		BLOCK_WS = 64,
		HAS_NS = 128,
	};
}
