#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUTPARAM_GET_ROTATIONINPUT_OFFSET UNITYSDK_OFFSET(0x922000)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultRotationInputParam_TypeDefinitionIndex = 36658;

	struct alignas(4) DefaultRotationInputParam
	{
		::PipelineCamera::EulerRotation Rotation; // 0x10
		::UnityEngine::Vector3 RotationSpeed; // 0x58
		::System::Single DeltaTime; // 0x64

		::UnityEngine::Quaternion get_RotationInput()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUTPARAM_GET_ROTATIONINPUT_OFFSET))(this);
		}
	};
}
