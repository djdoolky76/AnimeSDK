#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEMULTIPLEPOINTSINCOREPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC322B0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameMultiplePointsInCorePolicy_TypeDefinitionIndex = 36571;

	class FrameMultiplePointsInCorePolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEMULTIPLEPOINTSINCOREPOLICY__CTOR_OFFSET))(this);
		}
	};
}
