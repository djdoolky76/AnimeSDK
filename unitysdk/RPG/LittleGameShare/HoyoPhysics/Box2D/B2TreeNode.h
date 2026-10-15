#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TreeNodeConnectionUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TreeNodeDataUnion.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2TreeNode
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0x10
		::System::UInt64 categoryBits; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeNodeDataUnion children; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeNodeConnectionUnion pn; // 0x30
		::System::UInt16 height; // 0x34
		::System::UInt16 flags; // 0x36
	};
}
