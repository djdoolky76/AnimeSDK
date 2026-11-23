#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFB530854B88B5A8.h"
#include "unitysdk/E733EA16DCBE16B0/F8D9A74079A72337.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x4000840)
#define UNITYENGINE_INPUTSYSTEM_XR_POSESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x4000780)
#define UNITYENGINE_INPUTSYSTEM_XR_POSESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x40007F0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int PoseState_TypeDefinitionIndex = 14533;

	struct alignas(4) PoseState
	{
		static ::AFB530854B88B5A8* StaticGet_s_Format()
		{
			return (::AFB530854B88B5A8*)Il2CppClass::FromTypeDefinitionIndex(PoseState_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 kSizeInBytes = 0x3C; // 0x0
		::System::Boolean isTracked; // 0x10
		::System::Byte _padding0[0x3];
		::E733EA16DCBE16B0::F8D9A74079A72337 trackingState; // 0x14
		::UnityEngine::Vector3 position; // 0x18
		::UnityEngine::Quaternion rotation; // 0x24
		::UnityEngine::Vector3 velocity; // 0x34
		::UnityEngine::Vector3 angularVelocity; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSESTATE__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Boolean AEA755A632CDC4FA, ::E733EA16DCBE16B0::F8D9A74079A72337 E69105EBD54B3D1A, ::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Quaternion A0556B8B541B6D55, ::UnityEngine::Vector3 E53F9540C727B4AB, ::UnityEngine::Vector3 F97BE7CB585D69D3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::E733EA16DCBE16B0::F8D9A74079A72337, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSESTATE__CTOR_OFFSET))(this, AEA755A632CDC4FA, E69105EBD54B3D1A, EB211B01816ACA79, A0556B8B541B6D55, E53F9540C727B4AB, F97BE7CB585D69D3);
		}

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSESTATE_GET_FORMAT_OFFSET))(this);
		}
	};
}
