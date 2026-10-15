#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class FastDeliverPuzzleStep : ::System::Int32
	{
		AimStep = 0,
		RotateStep = 1,
		RotatePreFinishStep = 2,
		FinalDollyZoom = 3,
		ImmediateDeliver = 4,
	};
}
