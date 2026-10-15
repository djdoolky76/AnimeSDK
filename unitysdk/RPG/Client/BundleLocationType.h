#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BundleLocationType : ::System::Int32
	{
		eServerBakBundle = 0,
		eLocalBakBundle = 1,
		eLocalNotBakBundle = 2,
	};
}
