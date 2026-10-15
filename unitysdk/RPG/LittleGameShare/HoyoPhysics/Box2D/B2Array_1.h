#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	template <typename T>
	struct alignas(8) B2Array_1
	{
		::Il2CppArray<T>* data; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 capacity; // 0x0
	};
}
