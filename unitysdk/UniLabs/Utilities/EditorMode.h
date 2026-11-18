#pragma once
#include "unitysdk/unitysdk.h"

namespace UniLabs::Utilities
{
	inline static constexpr unsigned int EditorMode_TypeDefinitionIndex = 96684;

	enum class EditorMode : ::System::Int32
	{
		EditMode = 1,
		PlayMode = 2,
		Both = 3,
	};
}
