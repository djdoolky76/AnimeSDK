#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A42F92C929C00FD7.h"

namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F5CF40)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x16B6EB0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x16B6EE0)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x18E6690)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x3F5D050)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_PARENTBONEINDEX_OFFSET UNITYSDK_OFFSET(0x16B6F10)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x16B6F50)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3F5D240)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x3F5D140)
#define UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F5D200)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int BoneControl_TypeDefinitionIndex = 14323;

	class BoneControl
	{
	public:
		::UnityEngine::InputSystem::Controls::IntegerControl* _parentBoneIndex_k__BackingField; // 0x140
		::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField; // 0x148
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField; // 0x150

		::System::Void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_ROTATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_ROTATION_OFFSET))(this);
		}

		::A42F92C929C00FD7 ReadUnprocessedValueFromState(::PVOID A536377AC8D49ABB)
		{
			return ((::A42F92C929C00FD7(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, A536377AC8D49ABB);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void set_parentBoneIndex(::UnityEngine::InputSystem::Controls::IntegerControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_PARENTBONEINDEX_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_SET_POSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_parentBoneIndex()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_PARENTBONEINDEX_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_position()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_GET_POSITION_OFFSET))(this);
		}

		::System::Void WriteValueIntoState(::A42F92C929C00FD7 E937D4885DAA1AE8, ::PVOID A536377AC8D49ABB)
		{
			return ((::System::Void(*)(::PVOID, ::A42F92C929C00FD7, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_BONECONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, E937D4885DAA1AE8, A536377AC8D49ABB);
		}
	};
}
