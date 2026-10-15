#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::UI::UIStateCtrl
{
	enum class PlayAnimationActionEndStrategy : ::System::Int32
	{
		PlayToEnd = 0,
		KeepPlaying = 1,
	};
}
