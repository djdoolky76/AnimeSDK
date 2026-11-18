#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraModuleIdentifier_2_TypeDefinitionIndex = 36224;

	template <typename T1, typename T2>
	struct alignas(8) CameraModuleIdentifier_2
	{
		T1 Controller; // 0x0
		::System::Int32 PipelineType; // 0x0
		::System::Int32 ModuleIndex; // 0x0
	};
}
