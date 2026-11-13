#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionVerseParam_TypeDefinitionIndex = 19204;

	enum class MissionVerseParam : ::System::Int32
	{
		None = 0,
		StoryLine = 1,
		Content = 2,
	};
}
