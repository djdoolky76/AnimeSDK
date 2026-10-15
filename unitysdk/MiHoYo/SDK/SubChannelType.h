#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class SubChannelType : ::System::Int32
	{
		Default = 0,
		Official = 1,
		NoTapTap = 2,
		Epic = 3,
		SamSung = 4,
		Steam = 5,
		Google = 6,
		Xbox = 7,
		MAX = 8,
	};
}
