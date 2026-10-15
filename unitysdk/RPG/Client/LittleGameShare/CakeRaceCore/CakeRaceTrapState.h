#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	enum class CakeRaceTrapState : ::System::Int32
	{
		Active = 0,
		Inactive = 1,
		Destroyed = 2,
	};
}
