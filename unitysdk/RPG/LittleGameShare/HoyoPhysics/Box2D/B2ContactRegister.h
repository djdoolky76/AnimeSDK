#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2ManifoldFcn; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2ContactRegister
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2ManifoldFcn* fcn; // 0x10
		::System::Boolean primary; // 0x18
	};
}
