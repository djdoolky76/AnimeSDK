#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/System/ValueTuple_2.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_ROTATIONSELECTOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x978730)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_ROTATIONSELECTOR_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x6FFFB0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_ROTATIONSELECTOR_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x6FFFA0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_ROTATIONSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x6FFF10)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameOnePointInFinalPolicy_LookAtByRotation_RotationSelector_TypeDefinitionIndex = 36560;

	struct alignas(4) FrameOnePointInFinalPolicy_LookAtByRotation_RotationSelector
	{
		::UnityEngine::Quaternion _rotation; // 0x10

		::System::Void _ctor(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_ROTATIONSELECTOR__CTOR_OFFSET))(this, rotation);
		}

		::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> left, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> right)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_ROTATIONSELECTOR_COMPARE_OFFSET))(this, left, right);
		}

		::System::Double get_MinPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_ROTATIONSELECTOR_GET_MINPITCH_OFFSET))(this);
		}

		::System::Double get_MaxPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_ROTATIONSELECTOR_GET_MAXPITCH_OFFSET))(this);
		}
	};
}
