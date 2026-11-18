#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectInstanceSource_TypeDefinitionIndex = 69403;

	enum class EViewObjectInstanceSource : ::System::Int32
	{
		Server = 0,
		LocalGenericGroup = 1,
	};
}
