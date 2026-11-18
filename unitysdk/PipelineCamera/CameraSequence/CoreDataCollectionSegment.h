#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONSEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4FA80)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollectionSegment_TypeDefinitionIndex = 36538;

	class CoreDataCollectionSegment
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONSEGMENT__CTOR_OFFSET))(this);
		}
	};
}
