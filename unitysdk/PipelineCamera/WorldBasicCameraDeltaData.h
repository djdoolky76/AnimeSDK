#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData_DeltaDataStorage.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x967260)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9672C0)

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldBasicCameraDeltaData_TypeDefinitionIndex = 36265;

	struct alignas(8) WorldBasicCameraDeltaData
	{
		// static const ::System::String* BlendingCategoryError; // 0x0
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraDataDeltaFlag> _flag; // 0x10
		::PipelineCamera::WorldBasicCameraDeltaData_DeltaDataStorage _storage; // 0x18

		::PipelineCamera::WorldBasicCameraDataDeltaFlag get_Flag()
		{
			return ((::PipelineCamera::WorldBasicCameraDataDeltaFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_GET_FLAG_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData Update(::System::Single fadedAlpha, ::PipelineCamera::WorldBasicCameraData& cameraData)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_UPDATE_OFFSET))(this, fadedAlpha, cameraData);
		}
	};
}
