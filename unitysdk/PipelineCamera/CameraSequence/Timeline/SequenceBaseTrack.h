#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/Timeline/SequenceCompositeTrack.h"

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCEBASETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x200700F0)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int SequenceBaseTrack_TypeDefinitionIndex = 96111;

	class SequenceBaseTrack : public ::PipelineCamera::CameraSequence::Timeline::SequenceCompositeTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCEBASETRACK__CTOR_OFFSET))(this);
		}
	};
}
