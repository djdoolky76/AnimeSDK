#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TreeNodeDataUnion_TypeDefinitionIndex = 36798;

	struct alignas(4) B2TreeNodeDataUnion
	{
		::System::Int32 child1; // 0x10
		::System::UInt64 userData; // 0x10
		::System::Int32 child2; // 0x14
	};
}
