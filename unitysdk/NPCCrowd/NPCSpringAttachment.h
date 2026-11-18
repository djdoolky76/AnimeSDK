#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCQuaternionSpringState.h"
#include "unitysdk/NPCCrowd/NPCVectorSpringState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class NPCSpringAttachment_SpringParameters; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_NPCSPRINGATTACHMENT_APPLYROOTSPACEPOSE_OFFSET UNITYSDK_OFFSET(0xFD3F600)
#define NPCCROWD_NPCSPRINGATTACHMENT_GETTARGETPOSEINROOTSPACE_OFFSET UNITYSDK_OFFSET(0xFD3ED10)
#define NPCCROWD_NPCSPRINGATTACHMENT_GET_SPRINGROOT_OFFSET UNITYSDK_OFFSET(0xFD3E620)
#define NPCCROWD_NPCSPRINGATTACHMENT_INITOFFSET_OFFSET UNITYSDK_OFFSET(0xFD3EAD0)
#define NPCCROWD_NPCSPRINGATTACHMENT_INITSPRINGSTATE_OFFSET UNITYSDK_OFFSET(0xFD3F0C0)
#define NPCCROWD_NPCSPRINGATTACHMENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xFD3E790)
#define NPCCROWD_NPCSPRINGATTACHMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xFD3E630)
#define NPCCROWD_NPCSPRINGATTACHMENT_RESETSPRINGSTATE_OFFSET UNITYSDK_OFFSET(0xFD3E680)
#define NPCCROWD_NPCSPRINGATTACHMENT_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0xFD3F240)
#define NPCCROWD_NPCSPRINGATTACHMENT_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0xFD3F4F0)
#define NPCCROWD_NPCSPRINGATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xFD400B0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpringAttachment_TypeDefinitionIndex = 49803;

	class NPCSpringAttachment : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _attachBone; // 0x18
		::UnityEngine::Transform* _attachedTransform; // 0x20
		::System::Boolean _enablePositionSpring; // 0x28
		::System::Byte _padding0[0x7];
		::NPCCrowd::NPCSpringAttachment_SpringParameters* _positionParameters; // 0x30
		::System::Boolean _enableRotationSpring; // 0x38
		::System::Byte _padding1[0x7];
		::NPCCrowd::NPCSpringAttachment_SpringParameters* _rotationParameters; // 0x40
		::NPCCrowd::NPCVectorSpringState _positionSpringState; // 0x48
		::NPCCrowd::NPCQuaternionSpringState _rotationSpringState; // 0x64
		::UnityEngine::Vector3 _rootSpacePosition; // 0x84
		::UnityEngine::Quaternion _rootSpaceRotation; // 0x90
		::System::Boolean _springStateInitialized; // 0xA0
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 _positionOffset; // 0xA4
		::UnityEngine::Quaternion _rotationOffset; // 0xB0
		::System::Boolean _offsetInitialized; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_SpringRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_GET_SPRINGROOT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ResetSpringState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_RESETSPRINGSTATE_OFFSET))(this);
		}

		::System::Void InitOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_INITOFFSET_OFFSET))(this);
		}

		::System::Void GetTargetPoseInRootSpace(::UnityEngine::Vector3& targetRootPosition, ::UnityEngine::Quaternion& targetRootRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_GETTARGETPOSEINROOTSPACE_OFFSET))(this, targetRootPosition, targetRootRotation);
		}

		::System::Void InitSpringState(::UnityEngine::Vector3 targetRootPosition, ::UnityEngine::Quaternion targetRootRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_INITSPRINGSTATE_OFFSET))(this, targetRootPosition, targetRootRotation);
		}

		::System::Void UpdatePosition(::UnityEngine::Vector3 targetRootPosition, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_UPDATEPOSITION_OFFSET))(this, targetRootPosition, deltaTime);
		}

		::System::Void UpdateRotation(::UnityEngine::Quaternion targetRootRotation, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_UPDATEROTATION_OFFSET))(this, targetRootRotation, deltaTime);
		}

		::System::Void ApplyRootSpacePose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPRINGATTACHMENT_APPLYROOTSPACEPOSE_OFFSET))(this);
		}
	};
}
