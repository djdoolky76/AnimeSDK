#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Rendering/DLSSData.h"
namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_DLSSPASS_CAMERAPARAMETERS_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C345D0)
#define RPG_CUSTOMRP_DLSSPASS_CAMERAPARAMETERS_CTOR_OFFSET UNITYSDK_OFFSET(0x3C345A0)

namespace RPG::CustomRP
{
	struct alignas(8) DLSSPass_CameraParameters
	{
		::UnityEngine::Camera* camera; // 0x10
		::System::Boolean enabled; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 quality; // 0x1C
		::System::Single sharpness; // 0x20
		::UnityEngine::Vector2 taaJitter; // 0x24
		::System::Void _ctor(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERAPARAMETERS_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::DLSSData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::DLSSData))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_CAMERAPARAMETERS_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
}
