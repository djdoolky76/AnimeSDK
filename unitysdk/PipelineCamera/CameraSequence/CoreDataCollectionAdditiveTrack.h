#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONADDITIVETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC32170)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollectionAdditiveTrack_TypeDefinitionIndex = 36540;

	class CoreDataCollectionAdditiveTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONADDITIVETRACK__CTOR_OFFSET))(this);
		}
	};
}
