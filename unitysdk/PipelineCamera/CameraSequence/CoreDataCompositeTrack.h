#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F643870)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCompositeTrack_TypeDefinitionIndex = 36536;

	class CoreDataCompositeTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITETRACK__CTOR_OFFSET))(this);
		}
	};
}
