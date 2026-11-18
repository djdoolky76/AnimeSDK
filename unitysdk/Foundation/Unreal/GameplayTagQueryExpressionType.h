#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagQueryExpressionType_TypeDefinitionIndex = 11594;

	enum class GameplayTagQueryExpressionType : ::System::Int32
	{
		AnyExprMatch = 4,
		NoTagsMatch = 3,
		AllExprMatch = 5,
		AnyTagsMatch = 1,
		AllTagsMatch = 2,
		Undefined = 0,
		NoExprMatch = 6,
	};
}
