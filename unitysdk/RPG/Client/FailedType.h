#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class FailedType : ::System::Int32
	{
		Immediate = 0,
		OnAllFinish = 1,
		Ingore = 2,
	};
}
