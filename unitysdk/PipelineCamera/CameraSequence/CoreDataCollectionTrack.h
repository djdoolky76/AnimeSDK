#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC321D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollectionTrack_TypeDefinitionIndex = 36539;

	class CoreDataCollectionTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONTRACK__CTOR_OFFSET))(this);
		}
	};
}
