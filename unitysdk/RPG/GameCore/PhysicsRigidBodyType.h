#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PhysicsRigidBodyType : ::System::Int32
	{
		None = 0,
		Static = 1,
		Dynamic = 2,
		Kinematic = 3,
	};
}
