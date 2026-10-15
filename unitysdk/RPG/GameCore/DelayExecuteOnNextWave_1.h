#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNIAKLNCCCH.h"

namespace RPG::GameCore
{
	template <typename T>
	class DelayExecuteOnNextWave_1 : public ::JNIAKLNCCCH
	{
	public:
		T Param; // 0x0
	};
}
