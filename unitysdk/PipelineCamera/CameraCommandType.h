#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraCommandType_TypeDefinitionIndex = 36137;

	enum class CameraCommandType : ::System::Int32
	{
		SpawnSubModules = 0,
		UnSpawnSubModules = 1,
	};
}
