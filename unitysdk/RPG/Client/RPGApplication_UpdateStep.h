#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RPGApplication_UpdateStep : ::System::Int32
	{
		BeforeUpdate = 0,
		Update = 1,
		AfterUpdate = 2,
		LateUpdate = 3,
		AfterLateUpdate = 4,
	};
}
