#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2Mutex
	{
		::System::Object* lc; // 0x10
	};
}
