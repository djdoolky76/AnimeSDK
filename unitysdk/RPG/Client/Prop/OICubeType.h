#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OICubeType_TypeDefinitionIndex = 78713;

	enum class OICubeType : ::System::UInt32
	{
		MirrorFront = 1,
		MirrorBack = 2,
		Reflection = 4,
	};
}
