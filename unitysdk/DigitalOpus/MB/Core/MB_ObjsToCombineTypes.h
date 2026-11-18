#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_ObjsToCombineTypes_TypeDefinitionIndex = 96216;

	enum class MB_ObjsToCombineTypes : ::System::Int32
	{
		prefabOnly = 0,
		sceneObjOnly = 1,
		dontCare = 2,
	};
}
