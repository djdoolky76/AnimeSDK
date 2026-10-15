#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	enum class Player_TimerType : ::System::Int32
	{
		None = 0,
		System = 1,
		Audio = 2,
		User = 3,
		Manual = 4,
	};
}
