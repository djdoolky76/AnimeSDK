#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExtraLevelResultType_TypeDefinitionIndex = 11215;

	enum class ExtraLevelResultType : ::System::Int32
	{
		None = 0,
		ComicUnlock = 1,
		ForumComment = 2,
	};
}
