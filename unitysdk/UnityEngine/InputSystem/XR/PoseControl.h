#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFB530854B88B5A8.h"
#include "unitysdk/UnityEngine/InputSystem/XR/PoseState.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x3FC0020)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FC02A0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x1CA8410)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x3F6C380)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x29997D0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x3FC0460)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x3F6C390)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x3F6C3B0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x3F6C3D0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x3FC0670)
#define UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3FC0890)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int PoseControl_TypeDefinitionIndex = 14363;

	class PoseControl
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::Vector3Control* _velocity_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField; // 0x1A0

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_POSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ISTRACKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_velocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_VELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::XR::PoseState E937D4885DAA1AE8, ::PVOID A536377AC8D49ABB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::XR::PoseState, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, E937D4885DAA1AE8, A536377AC8D49ABB);
		}

		::System::Void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_TRACKINGSTATE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ROTATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_SET_ANGULARVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ISTRACKED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ROTATION_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_position()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::XR::PoseState ReadUnprocessedValueFromState(::PVOID A536377AC8D49ABB)
		{
			return ((::UnityEngine::InputSystem::XR::PoseState(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, A536377AC8D49ABB);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_TRACKINGSTATE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_velocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_GET_VELOCITY_OFFSET))(this);
		}

		::AFB530854B88B5A8 CalculateOptimizedControlDataType()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_POSECONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(this);
		}
	};
}
