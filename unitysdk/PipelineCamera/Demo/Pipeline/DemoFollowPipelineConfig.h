#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::Demo::Pipeline { class DemoFollowPipelineSetting; }
namespace UnityEngine { class Transform; }

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F66D0)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelineConfig_TypeDefinitionIndex = 36432;

	class DemoFollowPipelineConfig : public ::System::Object
	{
	public:
		::PipelineCamera::Demo::Pipeline::DemoFollowPipelineSetting* defaultSetting; // 0x10
		::System::Single defaultPitch; // 0x18
		::System::Single minPitch; // 0x1C
		::System::Single maxPitch; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* followTarget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
