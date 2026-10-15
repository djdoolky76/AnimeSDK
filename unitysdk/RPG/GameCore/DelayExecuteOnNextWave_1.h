#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNIAKLNCCCH.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DelayExecuteOnNextWave_1_TypeDefinitionIndex = 57603;

	template <typename T>
	class DelayExecuteOnNextWave_1 : public ::JNIAKLNCCCH
	{
	public:
		T Param; // 0x0
	};
}
