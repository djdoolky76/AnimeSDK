#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	enum class B2ContactFlags : ::System::Int32
	{
		b2_contactTouchingFlag = 1,
		b2_contactHitEventFlag = 2,
		b2_contactEnableContactEvents = 4,
	};
}
