#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TutorialNodeCheckType : ::System::Int32
	{
		Active = 1,
		UISize = 2,
		Moving = 4,
		BtnCanClick = 8,
		End = 16,
		Default = 7,
	};
}
