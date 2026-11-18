#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F9DF3A0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F9DF3B0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F9DF550)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DF670)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollection_CoreDataCollection_UnityGeneratedFormatter_TypeDefinitionIndex = 36542;

	class CoreDataCollection_CoreDataCollection_UnityGeneratedFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::PipelineCamera::CameraSequence::CoreDataCollection*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataCollection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::PipelineCamera::CameraSequence::CoreDataCollection*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataCollection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
