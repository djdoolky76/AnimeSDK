#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MockAnimatorRecordFlag_TypeDefinitionIndex = 73331;

	enum class MockAnimatorRecordFlag : ::System::UInt32
	{
		Parameter = 1,
		LayerState = 2,
		Speed = 4,
		All = 4294967295,
	};
}
