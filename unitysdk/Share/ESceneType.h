#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneType_TypeDefinitionIndex = 11025;

	enum class ESceneType : ::System::Int16
	{
		MultiFight = 5,
		Hall = 1,
		Hollow = 2,
		Fresh = 4,
		Fight = 3,
	};
}
