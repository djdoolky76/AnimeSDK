#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_DeferredWork_TypeDefinitionIndex = 40774;

	enum class ImgTextFeature_DeferredWork : ::System::Int32
	{
		ContentLost = 1,
		None = 0,
		Position = 4,
		Rebuild = 2,
	};
}
