#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class SimpleViewService_1_AssetAsyncLoadHandle_State : ::System::Int32
	{
		Loading = 0,
		PostLoading = 1,
		Finish = 2,
		Cancel = 3,
	};
}
