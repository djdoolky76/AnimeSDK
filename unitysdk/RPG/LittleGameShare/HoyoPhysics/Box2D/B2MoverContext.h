#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2QueryFilter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2MoverContext
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter filter; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxy; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transform; // 0x70
		::System::Object* userContext; // 0x80
	};
}
