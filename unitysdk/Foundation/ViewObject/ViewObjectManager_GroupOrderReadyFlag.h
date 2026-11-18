#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_GroupOrderReadyFlag_TypeDefinitionIndex = 66684;

	enum class ViewObjectManager_GroupOrderReadyFlag : ::System::Int32
	{
		PostLoadedFlag = 2,
		None = 0,
		LoadingFlag = 1,
	};
}
