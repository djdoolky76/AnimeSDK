#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraPipeline_5_TypeDefinitionIndex = 36189;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	struct alignas(8) CameraPipeline_5
	{
		::System::Int32 _PipelineType_k__BackingField; // 0x0
		T1 _module1; // 0x0
		T2 _module2; // 0x0
		T3 _module3; // 0x0
		T4 _module4; // 0x0
		T5 _module5; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag1; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag2; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag3; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag4; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag5; // 0x0
	};
}
