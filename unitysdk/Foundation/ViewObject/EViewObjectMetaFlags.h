#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectMetaFlags_TypeDefinitionIndex = 82712;

	enum class EViewObjectMetaFlags : ::System::Int32
	{
		IsGroup = 2,
		HasEntity = 4,
		None = 0,
		IsMember = 1,
	};
}
