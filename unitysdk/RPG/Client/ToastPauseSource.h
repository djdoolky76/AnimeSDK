#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ToastPauseSource : ::System::Int32
	{
		Default = 1,
		Performance = 2,
		ScreenTransfer = 3,
		TutorialGuide = 4,
		Task = 5,
		StoryViewUI = 6,
		CakeRace = 7,
		ChenLingBattle = 8,
		B51Racing = 9,
	};
}
