#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { class ICameraDataBlenderBuilder; }

#define PIPELINECAMERA_CAMERACOMMANDSUBMODULESBUILDER_ADD_OFFSET UNITYSDK_OFFSET(0x1F6430F0)
#define PIPELINECAMERA_CAMERACOMMANDSUBMODULESBUILDER_END_OFFSET UNITYSDK_OFFSET(0x1F643230)
#define PIPELINECAMERA_CAMERACOMMANDSUBMODULESBUILDER_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x1F6432F0)
#define PIPELINECAMERA_CAMERACOMMANDSUBMODULESBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F643350)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraCommandSubModulesBuilder_TypeDefinitionIndex = 36146;

	class CameraCommandSubModulesBuilder : public ::System::Object
	{
	public:
		::PipelineCamera::CameraCommandSpawnSubModules* _spawnCommand; // 0x10
		::PipelineCamera::CameraCommandUnSpawnSubModules* _unspawnCommand; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDSUBMODULESBUILDER__CTOR_OFFSET))(this);
		}

		::PipelineCamera::CameraCommandSubModulesBuilder* Add(::PipelineCamera::ICameraDataBlenderBuilder* blendIn, ::PipelineCamera::ICameraDataBlenderBuilder* blendOut)
		{
			return ((::PipelineCamera::CameraCommandSubModulesBuilder*(*)(::PVOID, ::PipelineCamera::ICameraDataBlenderBuilder*, ::PipelineCamera::ICameraDataBlenderBuilder*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDSUBMODULESBUILDER_ADD_OFFSET))(this, blendIn, blendOut);
		}

		::System::Void End(::PipelineCamera::CameraCommandSpawnSubModules*& spawnCommand, ::PipelineCamera::CameraCommandUnSpawnSubModules*& unspawnCommand)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDSUBMODULESBUILDER_END_OFFSET))(this, spawnCommand, unspawnCommand);
		}

		::System::Boolean IsRecording()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDSUBMODULESBUILDER_ISRECORDING_OFFSET))(this);
		}
	};
}
