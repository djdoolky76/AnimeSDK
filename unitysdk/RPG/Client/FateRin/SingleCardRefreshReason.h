#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin
{
	enum class SingleCardRefreshReason : ::System::Int32
	{
		None = 0,
		CostChange = 1,
		CardCommonChange = 2,
	};
}
