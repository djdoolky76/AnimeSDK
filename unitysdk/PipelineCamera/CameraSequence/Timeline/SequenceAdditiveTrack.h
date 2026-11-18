#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/Timeline/SequenceCompositeTrack.h"

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCEADDITIVETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x20070030)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int SequenceAdditiveTrack_TypeDefinitionIndex = 96110;

	class SequenceAdditiveTrack : public ::PipelineCamera::CameraSequence::Timeline::SequenceCompositeTrack
	{
	public:
		::System::Single startOffset; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCEADDITIVETRACK__CTOR_OFFSET))(this);
		}
	};
}
