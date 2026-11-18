#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectListLoopType_TypeDefinitionIndex = 54429;

	enum class StaticSceneObjectListLoopType : ::System::Int32
	{
		ListOnce = 1,
		RadomLoop = 3,
		ListLoop = 0,
		ListOnceAndEndPause = 4,
		RadomOnce = 2,
	};
}
