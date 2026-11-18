#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShakeType_TypeDefinitionIndex = 66782;

	enum class ShakeType : ::System::Int32
	{
		CameraDir = 1,
		EpicenterDir = 0,
		CameraScreenDir = 2,
	};
}
