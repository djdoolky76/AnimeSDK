#pragma once
#include "unitysdk/unitysdk.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_DATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F23F6B0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FramePivotInCore_DataProvider_TypeDefinitionIndex = 36630;

	class FramePivotInCore_DataProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_DATAPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
