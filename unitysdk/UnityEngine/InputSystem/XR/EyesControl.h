#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B2742F4772FF4309.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F5E490)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x3F5E680)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_FIXATIONPOINT_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEOPENAMOUNT_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x29D8AA0)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x3F5E840)
#define UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F5E9E0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int EyesControl_TypeDefinitionIndex = 14306;

	class EyesControl
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector3Control* _fixationPoint_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::AxisControl* _leftEyeOpenAmount_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::AxisControl* _rightEyeOpenAmount_k__BackingField; // 0x1C8

		::System::Void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEROTATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void WriteValueIntoState(::B2742F4772FF4309 E937D4885DAA1AE8, ::PVOID A536377AC8D49ABB)
		{
			return ((::System::Void(*)(::PVOID, ::B2742F4772FF4309, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, E937D4885DAA1AE8, A536377AC8D49ABB);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEPOSITION_OFFSET))(this);
		}

		::System::Void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEROTATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_fixationPoint(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_FIXATIONPOINT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEROTATION_OFFSET))(this);
		}

		::System::Void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEPOSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_leftEyeOpenAmount()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEOPENAMOUNT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_LEFTEYEPOSITION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_rightEyeOpenAmount()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEOPENAMOUNT_OFFSET))(this);
		}

		::System::Void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEPOSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_RIGHTEYEROTATION_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_leftEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_LEFTEYEOPENAMOUNT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::B2742F4772FF4309 ReadUnprocessedValueFromState(::PVOID A536377AC8D49ABB)
		{
			return ((::B2742F4772FF4309(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, A536377AC8D49ABB);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_fixationPoint()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_GET_FIXATIONPOINT_OFFSET))(this);
		}

		::System::Void set_rightEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_EYESCONTROL_SET_RIGHTEYEOPENAMOUNT_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
