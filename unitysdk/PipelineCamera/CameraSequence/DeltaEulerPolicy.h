#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C78C250)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DeltaEulerPolicy_TypeDefinitionIndex = 36574;

	class DeltaEulerPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY__CTOR_OFFSET))(this);
		}
	};
}
