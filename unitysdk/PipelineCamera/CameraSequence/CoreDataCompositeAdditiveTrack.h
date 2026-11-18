#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITEADDITIVETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5010D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCompositeAdditiveTrack_TypeDefinitionIndex = 36537;

	class CoreDataCompositeAdditiveTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITEADDITIVETRACK__CTOR_OFFSET))(this);
		}
	};
}
