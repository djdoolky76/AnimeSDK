#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraCommandType.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERACOMMANDSPAWNSUBMODULES_ADD_2_OFFSET UNITYSDK_OFFSET(0x1FDEC0F0)
#define PIPELINECAMERA_CAMERACOMMANDSPAWNSUBMODULES_PIPELINECAMERA_ICAMERACOMMAND_GET_COMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x1FDEBF60)
#define PIPELINECAMERA_CAMERACOMMANDSPAWNSUBMODULES_PIPELINECAMERA_ICAMERACOMMAND_GET_PIPELINE_OFFSET UNITYSDK_OFFSET(0x1FDEBFA0)
#define PIPELINECAMERA_CAMERACOMMANDSPAWNSUBMODULES__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDEBFE0)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraCommandSpawnSubModules_TypeDefinitionIndex = 36140;

	class CameraCommandSpawnSubModules : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>*>* _specificSubModules; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Object*>* _subModules; // 0x18
		::PipelineCamera::ICameraDataBlenderBuilder* _blendOut; // 0x20
		::PipelineCamera::ICameraDataBlenderBuilder* _blendIn; // 0x28
		::System::Int32 _pipeline; // 0x30

		::System::Void _ctor(::System::Int32 pipeline)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDSPAWNSUBMODULES__CTOR_OFFSET))(this, pipeline);
		}

		::PipelineCamera::CameraCommandType PipelineCamera_ICameraCommand_get_CommandType()
		{
			return ((::PipelineCamera::CameraCommandType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDSPAWNSUBMODULES_PIPELINECAMERA_ICAMERACOMMAND_GET_COMMANDTYPE_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraCommand_get_Pipeline()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDSPAWNSUBMODULES_PIPELINECAMERA_ICAMERACOMMAND_GET_PIPELINE_OFFSET))(this);
		}

		::System::Void Add_2(::PipelineCamera::ICameraDataBlenderBuilder* blendIn, ::PipelineCamera::ICameraDataBlenderBuilder* blendOut)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlenderBuilder*, ::PipelineCamera::ICameraDataBlenderBuilder*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERACOMMANDSPAWNSUBMODULES_ADD_2_OFFSET))(this, blendIn, blendOut);
		}
	};
}
