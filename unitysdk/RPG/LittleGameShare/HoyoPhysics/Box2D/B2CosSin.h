#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2CosSin
	{
		::System::Single cosine; // 0x10
		::System::Single sine; // 0x14
	};
}
