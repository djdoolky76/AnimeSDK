#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2BitSet
	{
		::Il2CppArray<::System::UInt64>* bits; // 0x10
		::System::Int32 blockCapacity; // 0x18
		::System::Int32 blockCount; // 0x1C
	};
}
