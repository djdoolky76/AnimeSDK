#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraSubModuleContainer_1_ItemStatus_TypeDefinitionIndex = 36195;

	enum class CameraSubModuleContainer_1_ItemStatus : ::System::Byte
	{
		Init = 1,
		Active = 2,
		MarkForRemoval = 4,
	};
}
