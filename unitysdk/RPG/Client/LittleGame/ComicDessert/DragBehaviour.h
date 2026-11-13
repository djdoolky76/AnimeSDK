#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int DragBehaviour_TypeDefinitionIndex = 44700;

	enum class DragBehaviour : ::System::Int32
	{
		None = 0,
		ServeProduct = 1,
		ServeTaiyaki = 2,
		ServeTofu = 3,
		ServeDevice = 4,
	};
}
