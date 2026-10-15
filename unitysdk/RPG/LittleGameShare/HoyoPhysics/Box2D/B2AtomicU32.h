#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2AtomicU32_TypeDefinitionIndex = 36584;

	struct alignas(4) B2AtomicU32
	{
		::System::Int64 value; // 0x10
	};
}
