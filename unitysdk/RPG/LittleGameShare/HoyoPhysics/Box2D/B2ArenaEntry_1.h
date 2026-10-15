#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArraySegment_1.h"
namespace System { class String; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	template <typename T>
	struct alignas(8) B2ArenaEntry_1
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<T> data; // 0x0
		::System::String* name; // 0x0
		::System::Int32 size; // 0x0
		::System::Boolean usedMalloc; // 0x0
	};
}
