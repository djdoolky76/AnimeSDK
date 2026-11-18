#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraPipeline_1_TypeDefinitionIndex = 36193;

	template <typename T>
	struct alignas(8) CameraPipeline_1
	{
		::System::Int32 _PipelineType_k__BackingField; // 0x0
		T _module1; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag1; // 0x0
	};
}
