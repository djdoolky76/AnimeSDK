#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PhotoGraphCheckCanIdleShowResult : ::System::Int32
	{
		OK = 0,
		AnimatorParamDisable = 1,
		EntityVisibleDisable = 2,
		AnimatorNotInIdleDisable = 3,
		EntityDisableIdleShow = 4,
	};
}
