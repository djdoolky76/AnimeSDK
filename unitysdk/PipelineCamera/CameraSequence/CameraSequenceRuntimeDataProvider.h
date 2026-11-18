#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCERUNTIMEDATAPROVIDER_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1E843F70)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCERUNTIMEDATAPROVIDER_GET_DATAPATH_OFFSET UNITYSDK_OFFSET(0x1E843EC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCERUNTIMEDATAPROVIDER_SETPATH_OFFSET UNITYSDK_OFFSET(0x1E843F20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCERUNTIMEDATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E843FE0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceRuntimeDataProvider_TypeDefinitionIndex = 36507;

	class CameraSequenceRuntimeDataProvider : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSequence::CameraSequenceMemberPath dataPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCERUNTIMEDATAPROVIDER__CTOR_OFFSET))(this);
		}

		::System::String* get_DataPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCERUNTIMEDATAPROVIDER_GET_DATAPATH_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCERUNTIMEDATAPROVIDER_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCERUNTIMEDATAPROVIDER_COLLECTVARIABLE_OFFSET))(this, collector);
		}
	};
}
