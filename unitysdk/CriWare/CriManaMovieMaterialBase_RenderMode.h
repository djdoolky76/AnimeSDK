#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieMaterialBase_RenderMode_TypeDefinitionIndex = 41107;

	enum class CriManaMovieMaterialBase_RenderMode : ::System::Int32
	{
		Always = 0,
		OnVisibility = 1,
		Never = 2,
	};
}
