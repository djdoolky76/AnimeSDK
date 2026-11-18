#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PipelineCamera/CameraSequence/FramePivotDataInCore.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FramePivotInCore_DataProvider; }

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F23F600)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F23F640)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C___CCTOR_B__21_0_OFFSET UNITYSDK_OFFSET(0x1F23F650)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FramePivotInCore___c_TypeDefinitionIndex = 36631;

	class FramePivotInCore___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FramePivotInCore___c_TypeDefinitionIndex)->GetStaticField(0x2B9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C__CTOR_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::FramePivotDataInCore __cctor_b__21_0(::PipelineCamera::CameraSequence::FramePivotInCore_DataProvider* provider, ::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::CameraSequence::FramePivotDataInCore(*)(::PVOID, ::PipelineCamera::CameraSequence::FramePivotInCore_DataProvider*, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE___C___CCTOR_B__21_0_OFFSET))(this, provider, time, context);
		}
	};
}
