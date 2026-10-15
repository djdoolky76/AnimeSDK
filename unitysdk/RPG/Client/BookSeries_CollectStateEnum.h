#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BookSeries_CollectStateEnum : ::System::Int32
	{
		NotStart = 1,
		Collecting = 2,
		CollectFinish = 3,
		Count = 4,
	};
}
