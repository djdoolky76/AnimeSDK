#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E844960)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RotatorDampingPolicy_TypeDefinitionIndex = 36577;

	class RotatorDampingPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY__CTOR_OFFSET))(this);
		}
	};
}
