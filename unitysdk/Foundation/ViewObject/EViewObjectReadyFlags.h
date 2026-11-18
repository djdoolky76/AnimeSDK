#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectReadyFlags_TypeDefinitionIndex = 85322;

	enum class EViewObjectReadyFlags : ::System::Int32
	{
		GraphLoadFinish = 2,
		EntityLoadFinish = 1,
		None = 0,
	};
}
