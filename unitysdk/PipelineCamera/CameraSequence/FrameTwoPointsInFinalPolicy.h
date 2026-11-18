#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMETWOPOINTSINFINALPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F52F340)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameTwoPointsInFinalPolicy_TypeDefinitionIndex = 36569;

	class FrameTwoPointsInFinalPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMETWOPOINTSINFINALPOLICY__CTOR_OFFSET))(this);
		}
	};
}
