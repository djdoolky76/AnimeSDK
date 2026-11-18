#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAttributeSource_TypeDefinitionIndex = 39108;

	enum class PlayableGraphAttributeSource : ::System::Byte
	{
		Curve = 2,
		Variable = 0,
		Property = 1,
	};
}
