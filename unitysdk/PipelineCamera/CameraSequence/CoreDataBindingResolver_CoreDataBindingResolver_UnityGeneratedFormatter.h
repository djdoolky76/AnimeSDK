#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F3D4F00)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F3D4F10)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F3D50A0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D51C0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataBindingResolver_CoreDataBindingResolver_UnityGeneratedFormatter_TypeDefinitionIndex = 36533;

	class CoreDataBindingResolver_CoreDataBindingResolver_UnityGeneratedFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::PipelineCamera::CameraSequence::CoreDataBindingResolver*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataBindingResolver*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::PipelineCamera::CameraSequence::CoreDataBindingResolver*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataBindingResolver*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
