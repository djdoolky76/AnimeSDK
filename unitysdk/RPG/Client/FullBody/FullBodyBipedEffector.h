#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FullBody
{
	enum class FullBodyBipedEffector : ::System::Int32
	{
		Body = 0,
		LeftShoulder = 1,
		RightShoulder = 2,
		LeftThigh = 3,
		RightThigh = 4,
		LeftHand = 5,
		RightHand = 6,
		LeftFoot = 7,
		RightFoot = 8,
	};
}
