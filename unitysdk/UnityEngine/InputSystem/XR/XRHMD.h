#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/TrackedDevice.h"

namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x4027180)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEPOSITION_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEROTATION_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEPOSITION_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEROTATION_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRHMD_TypeDefinitionIndex = 14615;

	class XRHMD : public ::UnityEngine::InputSystem::TrackedDevice
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyePosition_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::QuaternionControl* _centerEyeRotation_k__BackingField; // 0x1D8

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_centerEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEROTATION_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD__CTOR_OFFSET))(this);
		}

		::System::Void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEROTATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEROTATION_OFFSET))(this);
		}

		::System::Void set_centerEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEPOSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEROTATION_OFFSET))(this);
		}

		::System::Void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEROTATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEPOSITION_OFFSET))(this);
		}

		::System::Void set_centerEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEROTATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEPOSITION_OFFSET))(this);
		}

		::System::Void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEPOSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEPOSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEPOSITION_OFFSET))(this);
		}
	};
}
