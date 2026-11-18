#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EListenedPropertyType_TypeDefinitionIndex = 10766;

	enum class EListenedPropertyType : ::System::Int16
	{
		SceneProperty = 3,
		None = 0,
		All = 1,
		Property = 2,
	};
}
