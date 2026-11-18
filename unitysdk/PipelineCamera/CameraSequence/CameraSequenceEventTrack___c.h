#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9DEF50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DEF90)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__SORTEVENTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F9DEFA0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventTrack___c_TypeDefinitionIndex = 36496;

	class CameraSequenceEventTrack___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEventTrack___c_TypeDefinitionIndex)->GetStaticField(0x2B8F0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Single>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEventTrack___c_TypeDefinitionIndex)->GetStaticField(0x2B8F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Single _SortEvents_b__4_0(::PipelineCamera::CameraSequence::CameraSequenceEvent* item)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEvent*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__SORTEVENTS_B__4_0_OFFSET))(this, item);
		}
	};
}
