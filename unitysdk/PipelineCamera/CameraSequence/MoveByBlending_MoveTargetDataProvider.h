#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_MOVETARGETDATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC322C0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int MoveByBlending_MoveTargetDataProvider_TypeDefinitionIndex = 36638;

	class MoveByBlending_MoveTargetDataProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_MOVETARGETDATAPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
